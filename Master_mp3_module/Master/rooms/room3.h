/*
 * room3.h
 *
 * Created: 1/26/2020 1:46:19 PM
 *  Author: Ant
 */ 


#ifndef ROOM3_H_
#define ROOM3_H_

#include "../includes.h"

//slaves
#define NO_OF_SLAVES 7
#define LIGHT_CONTROLLER	0x45
#define KING				0x46
#define SIDDHARTHA			0x47
#define SIDDHARTHA_MINISTER 0x48
#define DEVDUTTA			0x49
#define DEVDUTTA_MINISTER	0x50
#define TV					0x51

//amp_volume (max:32)
#define VOLUME 27

//Lights
#define AUDIENCE_LIGHT			B1
#define ATMOSPHERIC_LIGHT		G1
#define BACKGROUND_LIGHT_LEFT_R		R3
#define BACKGROUND_LIGHT_LEFT_G		G3
#define BACKGROUND_LIGHT_LEFT_B		B3
#define BACKGROUND_LIGHT_RIGHT_R		R4
#define BACKGROUND_LIGHT_RIGHT_G		G4
#define BACKGROUND_LIGHT_RIGHT_B		B4
#define KING_FOCUS_LIGHT		L1
#define DEVDUTTA_FOCUS_LIGHT	L3
#define SIDDHARTHA_FOCUS_LIGHT	L2

//Servo Id
#define MOUTH_SERVO 1
#define NECK_SERVO 2
#define SHOULDER_SERVO 3
#define HAND_SERVO 4
#define HEAD_SERVO 5
//servo (for king)
#define LEFT_HAND_SERVO SHOULDER_SERVO
#define RIGHT_HAND_SERVO HAND_SERVO
//servo (for swan)
#define SWAN_HEAD_SERVO HEAD_SERVO
#define SWAN_NECK_SERVO SHOULDER_SERVO

//Pneumatic Id
#define KING_RIGHT_HAND_PNEUMATIC 4
#define KING_LEFT_HAND_PNEUMATIC 3
#define SIDDHARTHA_HEAD_PNEUMATIC 4
#define SIDDHARTHA_WAIST_PNEUMATIC 3
#define SWAN_NECK_PNEUMATIC 2
#define SIDDHARTHA_MINISTER_HAND_PNEUMATIC 3
#define SIDDHARTHA_MINISTER_WAIST_PNEUMATIC 4
#define DEVDUTTA_WAIST_PNEUMATIC 4
#define DEVDUTTA_MINISTER_WAIST_PNEUAMTIC 4
#define DEVDUTTA_MINISTER_HEAD_PNEUAMTIC 3

//Servo positions
#define KING_MOUTH_UP_POS 100
#define KING_MOUTH_DOWN_POS 250
#define SIDDHARTHA_MOUTH_UP_POS 150
#define SIDDHARTHA_MOUTH_DOWN_POS 250
#define SIDDHARTHA_MINISTER_MOUTH_UP_POS 520
#define SIDDHARTHA_MINISTER_MOUTH_DOWN_POS 690
#define DEVDUTTA_MOUTH_UP_POS 945
#define DEVDUTTA_MOUTH_DOWN_POS 790
#define DEVDUTTA_MINISTER_MOUTH_UP_POS 40
#define DEVDUTTA_MINISTER_MOUTH_DOWN_POS 0

#define KING_LEFT_HAND_UP_POS 350
#define KING_LEFT_HAND_DOWN_POS 0
#define KING_RIGHT_HAND_UP_POS 15
#define KING_RIGHT_HAND_DOWN_POS 405
#define SIDDHARTHA_HAND_UP_POS 600
#define SIDDHARTHA_HAND_DOWN_POS 450
#define SIDDHARTHA_MINISTER_HAND_UP_POS 500
#define SIDDHARTHA_MINISTER_HAND_DOWN_POS 600
#define DEVDUTTA_HAND_UP_POS 500
#define DEVDUTTA_HAND_DOWN_POS 600
#define DEVDUTTA_MINISTER_HAND_UP_POS 500
#define DEVDUTTA_MINISTER_HAND_DOWN_POS 600

#define KING_NECK_LEFT_POS 775
#define KING_NECK_RIGHT_POS 960
#define KING_NECK_CENTER_POS 880
#define SIDDHARTHA_NECK_LEFT_POS 0
#define SIDDHARTHA_NECK_RIGHT_POS 70
#define SIDDHARTHA_NECK_SWAN_POS 150
#define SIDDHARTHA_MINISTER_NECK_LEFT_POS 340
#define SIDDHARTHA_MINISTER_NECK_RIGHT_POS 415
#define DEVDUTTA_MINISTER_NECK_LEFT_POS 225
#define DEVDUTTA_MINISTER_NECK_RIGHT_POS 290

#define SWAN_NECK_LEFT_POS 900
#define SWAN_NECK_RIGHT_POS 1000
#define SWAN_HEAD_LEFT_POS 800
#define SWAN_HEAD_RIGHT_POS 675

#define ON 1
#define OFF 0
#define UP 1
#define DOWN 0
#define MOUTH_DEL_TIME


void resetToInitial(){
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER,AUDIENCE_LIGHT,127,6000);
	
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, MOUTH_SERVO, SIDDHARTHA_MOUTH_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA_MINISTER, MOUTH_SERVO, SIDDHARTHA_MINISTER_MOUTH_UP_POS);
	
	SlaveCtrlAPI::servoPosWrite(DEVDUTTA, MOUTH_SERVO, DEVDUTTA_MOUTH_UP_POS);
	SlaveCtrlAPI::servoPosWrite(DEVDUTTA_MINISTER, MOUTH_SERVO, DEVDUTTA_MINISTER_MOUTH_UP_POS);
	
	SlaveCtrlAPI::servoPosWrite(KING, MOUTH_SERVO, KING_MOUTH_UP_POS);
	SlaveCtrlAPI::servoPosWrite(KING, NECK_SERVO, KING_NECK_CENTER_POS);
	SlaveCtrlAPI::servoPosWrite(KING, LEFT_HAND_SERVO, KING_LEFT_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(KING, RIGHT_HAND_SERVO, KING_RIGHT_HAND_DOWN_POS);
	
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, NECK_SERVO, SIDDHARTHA_NECK_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA_MINISTER, NECK_SERVO, SIDDHARTHA_MINISTER_NECK_RIGHT_POS);
		
	for(int i=1; i<5; i++){
		SlaveCtrlAPI::pneumaticWrite(KING,i,OFF);
		SlaveCtrlAPI::pneumaticWrite(SIDDHARTHA,i,OFF);
		SlaveCtrlAPI::pneumaticWrite(SIDDHARTHA_MINISTER,i,OFF);
		SlaveCtrlAPI::pneumaticWrite(DEVDUTTA,i,OFF);
		SlaveCtrlAPI::pneumaticWrite(DEVDUTTA_MINISTER,i,OFF);
	}
	
}

void playScript(){
	//TIME 0:0
	SlaveCtrlAPI::waitTill(toMillis(0,0));
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, AUDIENCE_LIGHT, 0, 5000);
	SlaveCtrlAPI::irSlaveCommand(TV, PLAY_VIDEO);
	
	//TIME 1:50
	SlaveCtrlAPI::waitTill(toMillis(1,50));
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_LEFT_R, 10, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_LEFT_G, 10, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_LEFT_G, 5, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_RIGHT_R, 10, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_RIGHT_G, 10, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_RIGHT_G, 5, 6000);
	
	//TIME 2:46
	SlaveCtrlAPI::waitTill(toMillis(2,46));
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, ATMOSPHERIC_LIGHT, 60, 6000);
	
	//TIME 2:49
	SlaveCtrlAPI::waitTill(toMillis(2,49));
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, KING_FOCUS_LIGHT, 65, 6000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_LEFT_POS);
	
	//TIME 2:50
	SlaveCtrlAPI::waitTill(toMillis(2,50));
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	
	//TIME 2:52
	SlaveCtrlAPI::waitTill(toMillis(2,52));
	SlaveCtrlAPI::pneumaticWrite(KING, KING_RIGHT_HAND_PNEUMATIC, ON);
	SlaveCtrlAPI::pneumaticWrite(KING, KING_LEFT_HAND_PNEUMATIC, ON);
	SlaveCtrlAPI::servoPosWrite(KING, RIGHT_HAND_SERVO, KING_RIGHT_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(KING, LEFT_HAND_SERVO, KING_LEFT_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	SlaveCtrlAPI::mouthStart(KING, KING_MOUTH_UP_POS, KING_MOUTH_DOWN_POS);

	//Time 2:54
	SlaveCtrlAPI::waitTill(toMillis(2,54));
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_RIGHT_POS);
	
	//Time 2:58
	SlaveCtrlAPI::waitTill(toMillis(2,58));
	SlaveCtrlAPI::mouthStop(KING);
	
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	
	//TIME 3:00
	SlaveCtrlAPI::waitTill(toMillis(3,00));
	SlaveCtrlAPI::pneumaticWrite(KING, KING_RIGHT_HAND_PNEUMATIC, OFF);
	SlaveCtrlAPI::pneumaticWrite(KING, KING_LEFT_HAND_PNEUMATIC, OFF);
	SlaveCtrlAPI::servoPosWrite(KING, RIGHT_HAND_SERVO, KING_RIGHT_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(KING, LEFT_HAND_SERVO, KING_LEFT_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	SlaveCtrlAPI::pneumaticWrite(DEVDUTTA, DEVDUTTA_WAIST_PNEUMATIC, ON);
	SlaveCtrlAPI::mouthStart(DEVDUTTA, DEVDUTTA_MOUTH_UP_POS, DEVDUTTA_MOUTH_DOWN_POS);

	//TIME 3:01
	SlaveCtrlAPI::waitTill(toMillis(3,1));
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, DEVDUTTA_FOCUS_LIGHT, 65, 6000);
	SlaveCtrlAPI::servoPosWrite(KING, NECK_SERVO, KING_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA_MINISTER, NECK_SERVO, SIDDHARTHA_MINISTER_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(DEVDUTTA_MINISTER, NECK_SERVO, DEVDUTTA_MINISTER_NECK_RIGHT_POS);
	SlaveCtrlAPI::pneumaticWrite(DEVDUTTA, DEVDUTTA_WAIST_PNEUMATIC, ON);
	SlaveCtrlAPI::pneumaticWrite(DEVDUTTA_MINISTER, DEVDUTTA_MINISTER_WAIST_PNEUAMTIC, ON);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	
	//TIME 3:06
	SlaveCtrlAPI::waitTill(toMillis(3,6));
	SlaveCtrlAPI::servoPosWrite(KING, NECK_SERVO, KING_NECK_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(KING, RIGHT_HAND_SERVO, KING_RIGHT_HAND_UP_POS);
	SlaveCtrlAPI::pneumaticWrite(KING, KING_RIGHT_HAND_PNEUMATIC, ON);
	SlaveCtrlAPI::mouthStart(KING, KING_MOUTH_UP_POS, KING_MOUTH_DOWN_POS);
	SlaveCtrlAPI::mouthStop(DEVDUTTA);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_LEFT_POS);
	
	//TIME 3:08
	SlaveCtrlAPI::waitTill(toMillis(3,8));
	SlaveCtrlAPI::mouthStop(KING);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	
	//TIME 3:10
	SlaveCtrlAPI::waitTill(toMillis(3,10));
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(KING, RIGHT_HAND_SERVO, KING_RIGHT_HAND_DOWN_POS);
	SlaveCtrlAPI::pneumaticWrite(KING, KING_RIGHT_HAND_PNEUMATIC, OFF);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 65, 5000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, NECK_SERVO, SIDDHARTHA_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_RIGHT_POS);
	SlaveCtrlAPI::pneumaticWrite(SIDDHARTHA, SIDDHARTHA_WAIST_PNEUMATIC, ON);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA_MINISTER, NECK_SERVO, SIDDHARTHA_MINISTER_NECK_LEFT_POS);
	SlaveCtrlAPI::pneumaticWrite(SIDDHARTHA_MINISTER, SIDDHARTHA_MINISTER_WAIST_PNEUMATIC, ON);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::mouthStart(SIDDHARTHA, SIDDHARTHA_MOUTH_UP_POS, SIDDHARTHA_MOUTH_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(DEVDUTTA_MINISTER, NECK_SERVO, DEVDUTTA_MINISTER_NECK_LEFT_POS);
	SlaveCtrlAPI::pneumaticWrite(DEVDUTTA, DEVDUTTA_WAIST_PNEUMATIC, OFF);
	SlaveCtrlAPI::pneumaticWrite(DEVDUTTA_MINISTER, DEVDUTTA_MINISTER_WAIST_PNEUAMTIC, OFF);
	
	//TIME 3:25
	SlaveCtrlAPI::waitTill(toMillis(3,25));
	SlaveCtrlAPI::pneumaticWrite(SIDDHARTHA_MINISTER, SIDDHARTHA_MINISTER_WAIST_PNEUMATIC, OFF);
	SlaveCtrlAPI::pneumaticWrite(SIDDHARTHA_MINISTER, SIDDHARTHA_MINISTER_WAIST_PNEUMATIC, OFF);
	SlaveCtrlAPI::pneumaticWrite(DEVDUTTA_MINISTER, DEVDUTTA_MINISTER_WAIST_PNEUAMTIC, ON);
	SlaveCtrlAPI::pneumaticWrite(DEVDUTTA, DEVDUTTA_WAIST_PNEUMATIC, ON);
	SlaveCtrlAPI::servoPosWrite(KING, NECK_SERVO, KING_NECK_LEFT_POS);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 0, 5000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, DEVDUTTA_FOCUS_LIGHT, 65, 5000);
	SlaveCtrlAPI::servoPosWrite(DEVDUTTA, HAND_SERVO, DEVDUTTA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	SlaveCtrlAPI::mouthStart(DEVDUTTA, DEVDUTTA_MOUTH_UP_POS, DEVDUTTA_MOUTH_DOWN_POS);
	SlaveCtrlAPI::mouthStop(SIDDHARTHA);
	
	
	//TIME 3:38
	SlaveCtrlAPI::waitTill(toMillis(3,38));
	SlaveCtrlAPI::mouthStop(DEVDUTTA);
	SlaveCtrlAPI::pneumaticWrite(DEVDUTTA_MINISTER, DEVDUTTA_MINISTER_WAIST_PNEUAMTIC, OFF);
	SlaveCtrlAPI::pneumaticWrite(DEVDUTTA, DEVDUTTA_WAIST_PNEUMATIC, OFF);
	SlaveCtrlAPI::mouthStart(SIDDHARTHA, SIDDHARTHA_MOUTH_UP_POS, SIDDHARTHA_MOUTH_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	SlaveCtrlAPI::pneumaticWrite(SIDDHARTHA_MINISTER, SIDDHARTHA_MINISTER_WAIST_PNEUMATIC, ON);
	SlaveCtrlAPI::servoPosWrite(KING, NECK_SERVO, KING_NECK_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_LEFT_POS);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, DEVDUTTA_FOCUS_LIGHT, 0, 5000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 65, 5000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_RIGHT_POS);
	
	//TIME 3:52
	SlaveCtrlAPI::waitTill(toMillis(3,52));
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 65, 10000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	
	//TIME 4:02
	SlaveCtrlAPI::waitTill(toMillis(4,2));
	SlaveCtrlAPI::mouthStop(SIDDHARTHA);
	
	//TIME 4:03
	SlaveCtrlAPI::waitTill(toMillis(4,3));
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, DEVDUTTA_FOCUS_LIGHT, 65, 3000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 0, 5000);
	SlaveCtrlAPI::mouthStart(DEVDUTTA, DEVDUTTA_MOUTH_UP_POS, DEVDUTTA_MOUTH_DOWN_POS);
	
	//TIME 4:04
	SlaveCtrlAPI::waitTill(toMillis(4,4));
	SlaveCtrlAPI::servoPosWrite(KING, NECK_SERVO, KING_NECK_LEFT_POS);
	
	//TIME 4:07
	SlaveCtrlAPI::waitTill(toMillis(4,7));
	SlaveCtrlAPI::mouthStop(DEVDUTTA);
	
	//TIME 4:09
	SlaveCtrlAPI::waitTill(toMillis(4,9));
	SlaveCtrlAPI::servoPosWrite(KING, NECK_SERVO, KING_NECK_RIGHT_POS);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, DEVDUTTA_FOCUS_LIGHT, 0, 3000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 65, 5000);
	SlaveCtrlAPI::mouthStart(SIDDHARTHA, SIDDHARTHA_MOUTH_UP_POS, SIDDHARTHA_MOUTH_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	
	//TIME 4:32
	SlaveCtrlAPI::waitTill(toMillis(4,32));
	SlaveCtrlAPI::mouthStop(SIDDHARTHA);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, KING_FOCUS_LIGHT, 0, 6000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_LEFT_POS);
	SlaveCtrlAPI::pneumaticWrite(SIDDHARTHA, SWAN_NECK_PNEUMATIC, ON);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 0, 5000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, ATMOSPHERIC_LIGHT, 20, 5000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_LEFT_R, 0, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_LEFT_G, 0, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_LEFT_G, 0, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_RIGHT_R, 0, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_RIGHT_G, 0, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_RIGHT_G, 0, 6000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	
	//TIME 5:15
	SlaveCtrlAPI::waitTill(toMillis(5,15));
	SlaveCtrlAPI::pneumaticWrite(SIDDHARTHA, SWAN_NECK_PNEUMATIC, ON);
	SlaveCtrlAPI::mouthStart(SIDDHARTHA, SIDDHARTHA_MOUTH_UP_POS, SIDDHARTHA_MOUTH_DOWN_POS);
	
	//TIME 5:25
	SlaveCtrlAPI::waitTill(toMillis(5,25));
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 65, 5000);
	
	//TIME 5:26
	SlaveCtrlAPI::waitTill(toMillis(5,26));
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, NECK_SERVO, SIDDHARTHA_NECK_LEFT_POS);
	SlaveCtrlAPI::pneumaticWrite(SIDDHARTHA, SIDDHARTHA_WAIST_PNEUMATIC, ON);
	SlaveCtrlAPI::mouthStart(SIDDHARTHA, SIDDHARTHA_MOUTH_UP_POS, SIDDHARTHA_MOUTH_DOWN_POS);
	
	//TIME 5:34
	SlaveCtrlAPI::waitTill(toMillis(5,34));
	SlaveCtrlAPI::mouthStop(SIDDHARTHA);
	
	//TIME 5:37
	SlaveCtrlAPI::waitTill(toMillis(5,37));
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 0, 5000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, KING_FOCUS_LIGHT, 65, 5000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_LEFT_R, 10, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_LEFT_G, 10, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_LEFT_G, 5, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_RIGHT_R, 10, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_RIGHT_G, 10, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_RIGHT_G, 5, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, ATMOSPHERIC_LIGHT, 60, 5000);
	SlaveCtrlAPI::mouthStart(KING, KING_MOUTH_UP_POS, KING_MOUTH_DOWN_POS);
	
	//TIME 5:40
	SlaveCtrlAPI::waitTill(toMillis(5,40));
	SlaveCtrlAPI::servoPosWrite(KING, RIGHT_HAND_SERVO, KING_RIGHT_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(KING, NECK_SERVO, KING_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(KING, LEFT_HAND_SERVO, KING_LEFT_HAND_UP_POS);
	SlaveCtrlAPI::pneumaticWrite(KING, KING_RIGHT_HAND_PNEUMATIC, ON);
	SlaveCtrlAPI::pneumaticWrite(KING, KING_LEFT_HAND_PNEUMATIC, ON);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, NECK_SERVO, SIDDHARTHA_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA_MINISTER, NECK_SERVO, SIDDHARTHA_MINISTER_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(DEVDUTTA_MINISTER, NECK_SERVO, DEVDUTTA_MINISTER_NECK_RIGHT_POS);
	
	//TIME 5:45
	SlaveCtrlAPI::waitTill(toMillis(5,42));
	SlaveCtrlAPI::servoPosWrite(KING, NECK_SERVO, KING_NECK_RIGHT_POS);
	
	//TIME 5:45
	SlaveCtrlAPI::waitTill(toMillis(5,45));
	SlaveCtrlAPI::servoPosWrite(KING, RIGHT_HAND_SERVO, KING_RIGHT_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(KING, LEFT_HAND_SERVO, KING_LEFT_HAND_DOWN_POS);
	SlaveCtrlAPI::pneumaticWrite(KING, KING_RIGHT_HAND_PNEUMATIC, OFF);
	SlaveCtrlAPI::pneumaticWrite(KING, KING_LEFT_HAND_PNEUMATIC, OFF);
	SlaveCtrlAPI::mouthStop(KING);
	SlaveCtrlAPI::servoPosWrite(KING, NECK_SERVO, KING_NECK_CENTER_POS);
	
	//TIME 5:47
	SlaveCtrlAPI::waitTill(toMillis(5,47));
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, DEVDUTTA_FOCUS_LIGHT, 65, 5000);
	SlaveCtrlAPI::pneumaticWrite(SIDDHARTHA_MINISTER, SIDDHARTHA_MINISTER_WAIST_PNEUMATIC, OFF);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA_MINISTER, NECK_SERVO, SIDDHARTHA_MINISTER_NECK_RIGHT_POS);
	SlaveCtrlAPI::pneumaticWrite(DEVDUTTA_MINISTER, DEVDUTTA_MINISTER_HEAD_PNEUAMTIC, ON);
	SlaveCtrlAPI::mouthStart(DEVDUTTA_MINISTER, DEVDUTTA_MINISTER_MOUTH_UP_POS, DEVDUTTA_MINISTER_MOUTH_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(KING, NECK_SERVO, KING_NECK_LEFT_POS);
	
	//TIME 5:53
	SlaveCtrlAPI::waitTill(toMillis(5,53));
	SlaveCtrlAPI::servoPosWrite(DEVDUTTA_MINISTER, SHOULDER_SERVO, DEVDUTTA_MINISTER_HAND_UP_POS);
	SlaveCtrlAPI::pneumaticWrite(DEVDUTTA_MINISTER, DEVDUTTA_MINISTER_WAIST_PNEUAMTIC, ON);
	SlaveCtrlAPI::mouthStart(DEVDUTTA_MINISTER, DEVDUTTA_MINISTER_MOUTH_UP_POS, DEVDUTTA_MINISTER_MOUTH_DOWN_POS);
	
	//TIME 5:57
	SlaveCtrlAPI::waitTill(toMillis(5,57));
	SlaveCtrlAPI::servoPosWrite(DEVDUTTA_MINISTER, SHOULDER_SERVO, DEVDUTTA_MINISTER_HAND_DOWN_POS);
	SlaveCtrlAPI::mouthStop(DEVDUTTA_MINISTER);
	
	//TIME 5:58
	SlaveCtrlAPI::waitTill(toMillis(5,58));
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 65, 5000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, DEVDUTTA_FOCUS_LIGHT, 0, 5000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA_MINISTER, SHOULDER_SERVO, SIDDHARTHA_MINISTER_HAND_UP_POS);
	SlaveCtrlAPI::pneumaticWrite(SIDDHARTHA_MINISTER, SIDDHARTHA_MINISTER_HAND_PNEUMATIC, ON);
	SlaveCtrlAPI::pneumaticWrite(DEVDUTTA_MINISTER, DEVDUTTA_MINISTER_WAIST_PNEUAMTIC, OFF);
	SlaveCtrlAPI::servoPosWrite(DEVDUTTA_MINISTER, NECK_SERVO, DEVDUTTA_MINISTER_NECK_LEFT_POS);
	SlaveCtrlAPI::pneumaticWrite(SIDDHARTHA_MINISTER, SIDDHARTHA_MINISTER_WAIST_PNEUMATIC, ON);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA_MINISTER, NECK_SERVO, SIDDHARTHA_MINISTER_NECK_LEFT_POS);
	SlaveCtrlAPI::mouthStart(SIDDHARTHA_MINISTER, SIDDHARTHA_MINISTER_MOUTH_UP_POS, SIDDHARTHA_MINISTER_MOUTH_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(KING, NECK_SERVO, KING_NECK_RIGHT_POS);
	
	//TIME 6:22
	SlaveCtrlAPI::waitTill(toMillis(6,22));
	SlaveCtrlAPI::mouthStop(SIDDHARTHA_MINISTER);
	SlaveCtrlAPI::pneumaticWrite(SIDDHARTHA_MINISTER, SIDDHARTHA_MINISTER_HAND_PNEUMATIC, ON);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA_MINISTER, SHOULDER_SERVO, SIDDHARTHA_MINISTER_HAND_DOWN_POS);
	
	//TIME 6:23
	SlaveCtrlAPI::waitTill(toMillis(6,23));
	SlaveCtrlAPI::pneumaticWrite(DEVDUTTA_MINISTER, DEVDUTTA_MINISTER_WAIST_PNEUAMTIC, ON);
	SlaveCtrlAPI::servoPosWrite(DEVDUTTA_MINISTER, NECK_SERVO, DEVDUTTA_MINISTER_NECK_RIGHT_POS);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 0, 5000);
	SlaveCtrlAPI::mouthStart(KING, KING_MOUTH_UP_POS, KING_MOUTH_DOWN_POS);
	
	//TIME 6:26
	SlaveCtrlAPI::waitTill(toMillis(6,26));
	SlaveCtrlAPI::servoPosWrite(KING, RIGHT_HAND_SERVO, KING_RIGHT_HAND_UP_POS);
	SlaveCtrlAPI::pneumaticWrite(KING, KING_RIGHT_HAND_PNEUMATIC, ON);
	SlaveCtrlAPI::servoPosWrite(KING, NECK_SERVO, KING_NECK_RIGHT_POS);
	
	//TIME 6:31
	SlaveCtrlAPI::waitTill(toMillis(6,31));
	SlaveCtrlAPI::servoPosWrite(KING, RIGHT_HAND_SERVO, KING_RIGHT_HAND_DOWN_POS);
	SlaveCtrlAPI::pneumaticWrite(KING, KING_RIGHT_HAND_PNEUMATIC, OFF);
	
	//TIME 6:37
	SlaveCtrlAPI::waitTill(toMillis(6,37));
	SlaveCtrlAPI::servoPosWrite(KING, NECK_SERVO, KING_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(KING, LEFT_HAND_SERVO, KING_LEFT_HAND_UP_POS);
	SlaveCtrlAPI::pneumaticWrite(KING, KING_LEFT_HAND_PNEUMATIC, ON);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, ATMOSPHERIC_LIGHT, 0, 5000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	
	//TIME 6:40
	SlaveCtrlAPI::waitTill(toMillis(6,40));
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, KING_FOCUS_LIGHT, 0, 10000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, ATMOSPHERIC_LIGHT, 0, 10000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 65, 10000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	
	//TIME 6:49
	SlaveCtrlAPI::waitTill(toMillis(6,49));
	SlaveCtrlAPI::servoPosWrite(KING, LEFT_HAND_SERVO, KING_LEFT_HAND_DOWN_POS);
	SlaveCtrlAPI::pneumaticWrite(KING, KING_LEFT_HAND_PNEUMATIC, OFF);
	SlaveCtrlAPI::mouthStop(KING);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, KING_FOCUS_LIGHT, 0, 5000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 30, 10000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_LEFT_R, 0, 10000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_LEFT_G, 0, 10000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_LEFT_G, 0, 10000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_RIGHT_R, 0, 10000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_RIGHT_G, 0, 10000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, BACKGROUND_LIGHT_RIGHT_G, 0, 10000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	
	//TIME 6:56
	SlaveCtrlAPI::waitTill(toMillis(6,56));
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 65, 10000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 65, 10000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_LEFT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_NECK_SERVO, SWAN_NECK_RIGHT_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	
	//TIME 7:10
	SlaveCtrlAPI::waitTill(toMillis(7,10));
	SlaveCtrlAPI::pneumaticWrite(SIDDHARTHA,SWAN_NECK_PNEUMATIC, ON);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 30, 10000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	
	
	//TIME 7:18
	SlaveCtrlAPI::waitTill(toMillis(7,18));
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 65, 10000);
	SlaveCtrlAPI::irSlaveCommand(TV, RECONFIGURE);
	
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_DOWN_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_LEFT_POS);
	_delay_ms(1000);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, HAND_SERVO, SIDDHARTHA_HAND_UP_POS);
	SlaveCtrlAPI::servoPosWrite(SIDDHARTHA, SWAN_HEAD_SERVO, SWAN_HEAD_RIGHT_POS);
	_delay_ms(1000);
	
	//TIME 7:30
	SlaveCtrlAPI::waitTill(toMillis(7,30));
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, SIDDHARTHA_FOCUS_LIGHT, 0, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, ATMOSPHERIC_LIGHT, 0, 6000);
	SlaveCtrlAPI::lightGradualWrite(LIGHT_CONTROLLER, AUDIENCE_LIGHT, 127, 6000);
	ampStop();
}
#endif /* ROOM3_H_ */