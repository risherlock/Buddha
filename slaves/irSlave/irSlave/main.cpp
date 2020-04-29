/*
 * irSlave.cpp
 *
 * Created: 2/2/2020 12:09:32 AM
 * Author : Rishav
 */ 


#include <avr/io.h>
#include "includes.h"

//Registers and buffers for Modbus communication
#define REG_OUTPUT_START 1000
#define REG_INPUT_START 1000
#define REG_OUTPUT_NREGS 70
#define REG_INPUT_NREGS 4

//Static Variables
static USHORT   usRegOutputStart = REG_OUTPUT_START;
static USHORT   usRegInputStart = REG_INPUT_START;
static USHORT   usRegOutputBuf[REG_OUTPUT_NREGS];
static USHORT   usRegInputBuf[REG_INPUT_NREGS];

//_delay_ms() must not be removed  
int main(void)
{
	//Indicator init (debug)
	DDRB  |= (1<<PINB0);
	DDRD  |= (1<<PIND7);
	
	//timer0 init
	init();
	
	//Initialize tip122 ports 
	tip122Init();
		
	//Modbus initialization
	const UCHAR ucSlaveID[] = {0xAA, 0xBB, 0xCC};
	eMBInit(MB_ASCII, SLAVE_ADDRESS, 0, 9600, MB_PAR_ODD);
	eMBSetSlaveID(0x34, TRUE, ucSlaveID, 3);
	eMBEnable();
	
	//Makes device ready for play();
	remote::init();
	
	
	//Indicates initialization 
	PORTD  |= (1<<PIND7);
	
	
	while (1)
	{	
		(void )eMBPoll( );
	}
	
}

eMBErrorCode
eMBRegInputCB( UCHAR * pucRegBuffer, USHORT usAddress, USHORT usNRegs )
{
	eMBErrorCode    eStatus = MB_ENOERR;
	int             iRegIndex;

	if( ( usAddress >= REG_INPUT_START )
	&& ( usAddress + usNRegs <= REG_INPUT_START + REG_INPUT_NREGS ) )
	{
		iRegIndex = ( int )( usAddress - usRegInputStart );
		while( usNRegs > 0 )
		{
			*pucRegBuffer++ =
			( unsigned char )( usRegInputBuf[iRegIndex] >> 8 );
			*pucRegBuffer++ =
			( unsigned char )( usRegInputBuf[iRegIndex] & 0xFF );
			iRegIndex++;
			usNRegs--;
		}
	}
	else
	{
		eStatus = MB_ENOREG;
	}

	return eStatus;
}

eMBErrorCode
eMBRegHoldingCB( UCHAR * pucRegBuffer, USHORT usAddress, USHORT usNRegs,
eMBRegisterMode eMode )
{
	eMBErrorCode    eStatus = MB_ENOERR;
	int             iRegIndex;

	if( ( usAddress >= REG_OUTPUT_START )
	&& ( usAddress + usNRegs <= REG_OUTPUT_START + REG_OUTPUT_NREGS ) )
	{
		iRegIndex = ( int )( usAddress - usRegOutputStart );
		if(eMode==MB_REG_READ){
			while( usNRegs > 0 )
			{
				*pucRegBuffer++ =
				( unsigned char )( usRegOutputBuf[iRegIndex] >> 8 );
				*pucRegBuffer++ =
				( unsigned char )( usRegOutputBuf[iRegIndex] & 0xFF );
				iRegIndex++;
				usNRegs--;
			}
		}
		else if(eMode==MB_REG_WRITE){
			while( usNRegs > 0 )
			{
				UCHAR upper = *pucRegBuffer++;
				UCHAR lower = *pucRegBuffer++;
				
				usRegOutputBuf[iRegIndex] = (((uint16_t)upper)<<8) | ((uint16_t)lower);
				
				if(iRegIndex == 12){
					remote::play();
					PORTB  |= (1<<PINB0); //Play indicator
				}
				else if (iRegIndex == 13){
					remote::lampOff();
				}
				else if (iRegIndex == 14){
					remote::lampOn();
				}
				else if (iRegIndex == 15){
					remote::nextConfig(); 
					PORTB  &= ~(1<<PINB0); //Reconfig indicator
				}
				
				iRegIndex++;
				usNRegs--;
			}
			
		}
	}
	else
	{
		eStatus = MB_ENOREG;
	}

	return eStatus;
}


eMBErrorCode
eMBRegCoilsCB( UCHAR * pucRegBuffer, USHORT usAddress, USHORT usNCoils,
eMBRegisterMode eMode )
{
	return MB_ENOREG;
}

eMBErrorCode
eMBRegDiscreteCB( UCHAR * pucRegBuffer, USHORT usAddress, USHORT usNDiscrete )
{
	return MB_ENOREG;
}




