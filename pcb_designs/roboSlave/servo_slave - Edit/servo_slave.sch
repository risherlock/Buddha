EESchema Schematic File Version 4
LIBS:servo_slave-cache
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date "28 oct 2013"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L servo_slave-rescue:ATMEGA168-P-servo_controller_no485-rescue IC1
U 1 1 526D2E22
P 4250 3750
F 0 "IC1" H 3400 5050 40  0000 L BNN
F 1 "ATMEGA168-P" H 4600 2400 40  0000 L BNN
F 2 "Package_DIP:DIP-28_W7.62mm" H 4250 3750 30  0001 C CIN
F 3 "" H 4250 3750 60  0000 C CNN
	1    4250 3750
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:CONN_2-servo_controller_no485-rescue P3
U 1 1 526D3DA2
P 1550 1000
F 0 "P3" V 1500 1000 40  0000 C CNN
F 1 "CONN_2" V 1600 1000 40  0000 C CNN
F 2 "modFiles:Solar_Connector0.1" H 1550 1000 60  0000 C CNN
F 3 "~" H 1550 1000 60  0000 C CNN
	1    1550 1000
	-1   0    0    1   
$EndComp
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR01
U 1 1 526D3DB1
P 2000 1200
F 0 "#PWR01" H 2000 1200 30  0001 C CNN
F 1 "GND" H 2000 1130 30  0001 C CNN
F 2 "" H 2000 1200 60  0000 C CNN
F 3 "" H 2000 1200 60  0000 C CNN
	1    2000 1200
	1    0    0    -1  
$EndComp
Wire Wire Line
	2000 1200 2000 1100
Wire Wire Line
	2000 1100 1900 1100
$Comp
L servo_slave-rescue:POT-servo_controller_no485-rescue RV1
U 1 1 526D3DC1
P 2350 1200
F 0 "RV1" H 2350 1100 50  0000 C CNN
F 1 "POT" H 2350 1200 50  0000 C CNN
F 2 "modFiles:Skeleton_Preset" H 2350 1200 60  0001 C CNN
F 3 "~" H 2350 1200 60  0000 C CNN
	1    2350 1200
	0    1    -1   0   
$EndComp
$Comp
L servo_slave-rescue:TIP122-servo_controller_no485-rescue Q1
U 1 1 526D2E9B
P 2950 1000
F 0 "Q1" H 2900 850 40  0000 R CNN
F 1 "TIP122" H 2950 1150 40  0000 R CNN
F 2 "modFiles:Voltage_Regulator" H 2830 1105 29  0001 C CNN
F 3 "~" H 2950 1000 60  0000 C CNN
	1    2950 1000
	0    -1   -1   0   
$EndComp
Wire Wire Line
	1900 900  2000 900 
Wire Wire Line
	2350 900  2350 950 
Connection ~ 2350 900 
$Comp
L servo_slave-rescue:+6V-servo_controller_no485-rescue #PWR02
U 1 1 526D3EA4
P 2000 850
F 0 "#PWR02" H 2000 980 20  0001 C CNN
F 1 "+6V" H 2000 950 30  0000 C CNN
F 2 "" H 2000 850 60  0000 C CNN
F 3 "" H 2000 850 60  0000 C CNN
	1    2000 850 
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR03
U 1 1 526D3EBC
P 2350 1500
F 0 "#PWR03" H 2350 1500 30  0001 C CNN
F 1 "GND" H 2350 1430 30  0001 C CNN
F 2 "" H 2350 1500 60  0000 C CNN
F 3 "" H 2350 1500 60  0000 C CNN
	1    2350 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	2350 1500 2350 1450
$Comp
L servo_slave-rescue:VCC-servo_controller_no485-rescue #PWR04
U 1 1 526DA774
P 3850 850
F 0 "#PWR04" H 3850 950 30  0001 C CNN
F 1 "VCC" H 3850 950 30  0000 C CNN
F 2 "" H 3850 850 60  0000 C CNN
F 3 "" H 3850 850 60  0000 C CNN
	1    3850 850 
	1    0    0    -1  
$EndComp
Wire Wire Line
	3150 900  3400 900 
Wire Wire Line
	3850 900  3850 850 
$Comp
L servo_slave-rescue:VCC-servo_controller_no485-rescue #PWR09
U 1 1 526DA94E
P 3200 2550
F 0 "#PWR09" H 3200 2650 30  0001 C CNN
F 1 "VCC" H 3200 2650 30  0000 C CNN
F 2 "" H 3200 2550 60  0000 C CNN
F 3 "" H 3200 2550 60  0000 C CNN
	1    3200 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	3200 2550 3200 2600
Wire Wire Line
	3200 2600 3250 2600
$Comp
L servo_slave-rescue:C-servo_controller_no485-rescue C1
U 1 1 526DA989
P 2950 3400
F 0 "C1" H 2950 3500 40  0000 L CNN
F 1 "104" H 2956 3315 40  0000 L CNN
F 2 "modFiles:Ceramic_5.00" H 2988 3250 30  0000 C CNN
F 3 "~" H 2950 3400 60  0000 C CNN
	1    2950 3400
	1    0    0    -1  
$EndComp
Wire Wire Line
	3250 3200 2950 3200
Wire Wire Line
	3200 2900 3250 2900
Connection ~ 3200 2600
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR010
U 1 1 526DA9F1
P 2950 3700
F 0 "#PWR010" H 2950 3700 30  0001 C CNN
F 1 "GND" H 2950 3630 30  0001 C CNN
F 2 "" H 2950 3700 60  0000 C CNN
F 3 "" H 2950 3700 60  0000 C CNN
	1    2950 3700
	1    0    0    -1  
$EndComp
Wire Wire Line
	2950 3700 2950 3600
Wire Wire Line
	3250 4800 3250 4900
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR011
U 1 1 526DAA45
P 3250 5000
F 0 "#PWR011" H 3250 5000 30  0001 C CNN
F 1 "GND" H 3250 4930 30  0001 C CNN
F 2 "" H 3250 5000 60  0000 C CNN
F 3 "" H 3250 5000 60  0000 C CNN
	1    3250 5000
	1    0    0    -1  
$EndComp
Connection ~ 3250 4900
$Comp
L servo_slave-rescue:CONN_14-servo_controller_no485-rescue P1
U 1 1 526DAC36
P 850 3000
F 0 "P1" V 820 3000 60  0000 C CNN
F 1 "CONN_14" V 930 3000 60  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x14_P2.54mm_Vertical" H 850 3000 60  0000 C CNN
F 3 "~" H 850 3000 60  0000 C CNN
	1    850  3000
	-1   0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:CONN_14-servo_controller_no485-rescue P2
U 1 1 526DAC45
P 1950 3000
F 0 "P2" V 1920 3000 60  0000 C CNN
F 1 "CONN_14" V 2030 3000 60  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x14_P2.54mm_Vertical" H 1950 3000 60  0000 C CNN
F 3 "~" H 1950 3000 60  0000 C CNN
	1    1950 3000
	-1   0    0    -1  
$EndComp
Text Label 5150 2600 0    60   ~ 0
P14
Text Label 5150 2700 0    60   ~ 0
P15
Text Label 5150 2800 0    60   ~ 0
P16
Text Label 5150 2900 0    60   ~ 0
P17
Text Label 5150 3000 0    60   ~ 0
P18
Text Label 5150 3100 0    60   ~ 0
P19
Text Label 3200 2900 2    60   ~ 0
P20
Text Label 3200 2600 2    60   ~ 0
P7
Text Label 5150 4050 0    60   ~ 0
P1
Text Label 5150 4200 0    60   ~ 0
P2
Text Label 5150 4300 0    60   ~ 0
P3
Text Label 5150 4400 0    60   ~ 0
P4
Text Label 5150 4500 0    60   ~ 0
P5
Text Label 5150 4600 0    60   ~ 0
P6
Text Label 3250 4900 2    60   ~ 0
P8
Text Label 5150 3200 0    60   ~ 0
P9
Text Label 5150 4700 0    60   ~ 0
P11
Text Label 5150 4800 0    60   ~ 0
P12
Text Label 5150 4900 0    60   ~ 0
P13
Text Label 3200 3200 2    60   ~ 0
P21
Text Label 5150 3300 0    60   ~ 0
P10
Text Label 5150 3450 0    60   ~ 0
P23
Text Label 5150 3550 0    60   ~ 0
P24
Text Label 5150 3650 0    60   ~ 0
P25
Text Label 5150 3750 0    60   ~ 0
P26
Text Label 5150 3850 0    60   ~ 0
P27
Text Label 5150 3950 0    60   ~ 0
P28
Text Label 2300 2350 0    60   ~ 0
P15
Text Label 2300 2450 0    60   ~ 0
P16
Text Label 2300 2550 0    60   ~ 0
P17
Text Label 2300 2650 0    60   ~ 0
P18
Text Label 2300 2750 0    60   ~ 0
P19
Text Label 2300 3150 0    60   ~ 0
P23
Text Label 2300 3250 0    60   ~ 0
P24
Text Label 2300 3350 0    60   ~ 0
P25
Text Label 2300 3450 0    60   ~ 0
P26
Text Label 2300 3550 0    60   ~ 0
P27
Text Label 2300 3650 0    60   ~ 0
P28
Text Label 1200 2450 0    60   ~ 0
P2
Text Label 1200 2550 0    60   ~ 0
P3
Text Label 1200 2650 0    60   ~ 0
P4
Text Label 1200 2750 0    60   ~ 0
P5
Text Label 1200 2850 0    60   ~ 0
P6
Text Label 2300 2850 0    60   ~ 0
P20
Text Label 2300 2950 0    60   ~ 0
P21
Text Label 2300 3050 0    60   ~ 0
P22
Text Label 3250 4800 2    60   ~ 0
P22
Text Label 1200 2350 0    60   ~ 0
P1
Text Label 1200 2950 0    60   ~ 0
P7
Text Label 1200 3050 0    60   ~ 0
P8
Text Label 1200 3150 0    60   ~ 0
P9
Text Label 1200 3250 0    60   ~ 0
P10
Text Label 1200 3350 0    60   ~ 0
P11
Text Label 1200 3450 0    60   ~ 0
P12
Text Label 1200 3550 0    60   ~ 0
P13
Text Label 1200 3650 0    60   ~ 0
P14
Text Label 5400 4050 0    60   ~ 0
RST
Wire Wire Line
	5400 4050 5150 4050
Text Label 5400 3200 0    60   ~ 0
XTAL1
Wire Wire Line
	5400 3200 5150 3200
Text Label 5400 3300 0    60   ~ 0
XTAL2
Wire Wire Line
	5400 3300 5150 3300
$Comp
L servo_slave-rescue:CRYSTAL-servo_controller_no485-rescue X1
U 1 1 526DAE1F
P 4750 5550
F 0 "X1" H 4750 5700 60  0000 C CNN
F 1 "16MHz" H 4750 5400 60  0000 C CNN
F 2 "Crystal:Crystal_HC49-4H_Vertical" H 4750 5550 60  0000 C CNN
F 3 "~" H 4750 5550 60  0000 C CNN
	1    4750 5550
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:C-servo_controller_no485-rescue C4
U 1 1 526DAE38
P 4450 5850
F 0 "C4" H 4450 5950 40  0000 L CNN
F 1 "22pF" H 4456 5765 40  0000 L CNN
F 2 "modFiles:Ceramic_2.54" H 4488 5700 30  0000 C CNN
F 3 "~" H 4450 5850 60  0000 C CNN
	1    4450 5850
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:C-servo_controller_no485-rescue C5
U 1 1 526DAE47
P 5050 5850
F 0 "C5" H 5050 5950 40  0000 L CNN
F 1 "22pF" H 5056 5765 40  0000 L CNN
F 2 "modFiles:Ceramic_2.54" H 5088 5700 30  0000 C CNN
F 3 "~" H 5050 5850 60  0000 C CNN
	1    5050 5850
	1    0    0    -1  
$EndComp
Wire Wire Line
	5050 5550 5050 5650
Wire Wire Line
	4450 5550 4450 5650
Wire Wire Line
	4450 6050 5050 6050
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR012
U 1 1 526DAED1
P 5050 6100
F 0 "#PWR012" H 5050 6100 30  0001 C CNN
F 1 "GND" H 5050 6030 30  0001 C CNN
F 2 "" H 5050 6100 60  0000 C CNN
F 3 "" H 5050 6100 60  0000 C CNN
	1    5050 6100
	1    0    0    -1  
$EndComp
Wire Wire Line
	5050 6050 5050 6100
Text Label 4450 5550 2    60   ~ 0
XTAL1
Text Label 5050 5550 0    60   ~ 0
XTAL2
$Comp
L servo_slave-rescue:CP1-servo_controller_no485-rescue C2
U 1 1 526DB332
P 3400 1100
F 0 "C2" H 3450 1200 50  0000 L CNN
F 1 "1000uF" H 3450 1000 50  0000 L CNN
F 2 "modFiles:Capacitor_1000uF" H 3400 1100 60  0000 C CNN
F 3 "~" H 3400 1100 60  0000 C CNN
	1    3400 1100
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:C-servo_controller_no485-rescue C3
U 1 1 526DB36B
P 3850 1100
F 0 "C3" H 3850 1200 40  0000 L CNN
F 1 "104" H 3856 1015 40  0000 L CNN
F 2 "modFiles:Ceramic_5.00" H 3888 950 30  0000 C CNN
F 3 "~" H 3850 1100 60  0000 C CNN
	1    3850 1100
	1    0    0    -1  
$EndComp
Connection ~ 3400 900 
Wire Wire Line
	3850 1300 3400 1300
Connection ~ 3850 900 
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR015
U 1 1 526DB5ED
P 3850 1350
F 0 "#PWR015" H 3850 1350 30  0001 C CNN
F 1 "GND" H 3850 1280 30  0001 C CNN
F 2 "" H 3850 1350 60  0000 C CNN
F 3 "" H 3850 1350 60  0000 C CNN
	1    3850 1350
	1    0    0    -1  
$EndComp
Wire Wire Line
	3850 1350 3850 1300
Text Label 5400 4300 0    60   ~ 0
TX
Wire Wire Line
	5400 4300 5150 4300
Text Label 5400 4200 0    60   ~ 0
RX
Wire Wire Line
	5400 4200 5150 4200
Wire Wire Line
	5400 4400 5150 4400
Wire Wire Line
	5400 4500 5150 4500
Text Label 7650 3750 2    60   ~ 0
P19
Text Label 7700 5100 2    60   ~ 0
P26
Text Label 6300 5000 2    60   ~ 0
P27
Text Label 5400 3100 0    60   ~ 0
SCK
Wire Wire Line
	5400 3100 5150 3100
Text Label 5400 3000 0    60   ~ 0
MISO
Wire Wire Line
	5400 3000 5150 3000
Text Label 5400 2900 0    60   ~ 0
MOSI
Wire Wire Line
	5400 2900 5150 2900
$Comp
L servo_slave-rescue:CP1-servo_controller_no485-rescue C6
U 1 1 526DC213
P 6800 1100
F 0 "C6" H 6850 1200 50  0000 L CNN
F 1 "1000uF" H 6850 1000 50  0000 L CNN
F 2 "modFiles:Capacitor_1000uF" H 6800 1100 60  0000 C CNN
F 3 "~" H 6800 1100 60  0000 C CNN
	1    6800 1100
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR048
U 1 1 526DC755
P 6800 1400
F 0 "#PWR048" H 6800 1400 30  0001 C CNN
F 1 "GND" H 6800 1330 30  0001 C CNN
F 2 "" H 6800 1400 60  0000 C CNN
F 3 "" H 6800 1400 60  0000 C CNN
	1    6800 1400
	1    0    0    -1  
$EndComp
Wire Wire Line
	6800 1400 6800 1300
$Comp
L servo_slave-rescue:+6V-servo_controller_no485-rescue #PWR049
U 1 1 526DC7E8
P 6800 800
F 0 "#PWR049" H 6800 930 20  0001 C CNN
F 1 "+6V" H 6800 900 30  0000 C CNN
F 2 "" H 6800 800 60  0000 C CNN
F 3 "" H 6800 800 60  0000 C CNN
	1    6800 800 
	1    0    0    -1  
$EndComp
Wire Wire Line
	6800 800  6800 900 
$Comp
L servo_slave-rescue:R-servo_controller_no485-rescue R1
U 1 1 526DD511
P 4350 1900
F 0 "R1" V 4350 2000 30  0000 C CNN
F 1 "1K" V 4350 1850 30  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 4280 1900 30  0000 C CNN
F 3 "~" H 4350 1900 30  0000 C CNN
	1    4350 1900
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4050 1900 4100 1900
$Comp
L servo_slave-rescue:LED-servo_controller_no485-rescue D1
U 1 1 526DD51B
P 4850 1900
F 0 "D1" H 4850 2000 50  0000 C CNN
F 1 "LED" H 4850 1800 50  0000 C CNN
F 2 "modFiles:Led_3mm" H 4850 1900 60  0000 C CNN
F 3 "~" H 4850 1900 60  0000 C CNN
	1    4850 1900
	1    0    0    -1  
$EndComp
Wire Wire Line
	4650 1900 4600 1900
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR058
U 1 1 526DD5D1
P 5100 2100
F 0 "#PWR058" H 5100 2100 30  0001 C CNN
F 1 "GND" H 5100 2030 30  0001 C CNN
F 2 "" H 5100 2100 60  0000 C CNN
F 3 "" H 5100 2100 60  0000 C CNN
	1    5100 2100
	1    0    0    -1  
$EndComp
Wire Wire Line
	5100 2100 5100 1900
Wire Wire Line
	5100 1900 5050 1900
$Comp
L servo_slave-rescue:SW_PUSH-servo_controller_no485-rescue SW1
U 1 1 526DE3C1
P 6700 2600
F 0 "SW1" H 6850 2710 50  0000 C CNN
F 1 "SW_PUSH" H 6700 2520 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH-12mm" H 6700 2600 60  0001 C CNN
F 3 "~" H 6700 2600 60  0000 C CNN
	1    6700 2600
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:R-servo_controller_no485-rescue R4
U 1 1 526DE3D8
P 6700 2300
F 0 "R4" V 6700 2400 30  0000 C CNN
F 1 "10K" V 6700 2250 30  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 6630 2300 30  0000 C CNN
F 3 "~" H 6700 2300 30  0000 C CNN
	1    6700 2300
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6950 2300 7000 2300
Wire Wire Line
	7000 2300 7000 2600
$Comp
L servo_slave-rescue:VCC-servo_controller_no485-rescue #PWR059
U 1 1 526DE4BF
P 6400 2250
F 0 "#PWR059" H 6400 2350 30  0001 C CNN
F 1 "VCC" H 6400 2350 30  0000 C CNN
F 2 "" H 6400 2250 60  0000 C CNN
F 3 "" H 6400 2250 60  0000 C CNN
	1    6400 2250
	1    0    0    -1  
$EndComp
Wire Wire Line
	6400 2250 6400 2300
Wire Wire Line
	6400 2300 6450 2300
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR060
U 1 1 526DE583
P 6400 2750
F 0 "#PWR060" H 6400 2750 30  0001 C CNN
F 1 "GND" H 6400 2680 30  0001 C CNN
F 2 "" H 6400 2750 60  0000 C CNN
F 3 "" H 6400 2750 60  0000 C CNN
	1    6400 2750
	1    0    0    -1  
$EndComp
Wire Wire Line
	6400 2750 6400 2600
Text Label 7550 2300 0    60   ~ 0
RST
$Comp
L servo_slave-rescue:R-servo_controller_no485-rescue R5
U 1 1 526DE647
P 7300 2300
F 0 "R5" V 7300 2400 30  0000 C CNN
F 1 "100E" V 7300 2250 30  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 7230 2300 30  0000 C CNN
F 3 "~" H 7300 2300 30  0000 C CNN
	1    7300 2300
	0    -1   -1   0   
$EndComp
Connection ~ 7000 2300
Wire Wire Line
	7000 2600 7050 2600
Text Label 7050 2600 0    60   ~ 0
RST_IN
$Comp
L servo_slave-rescue:CONN_2-servo_controller_no485-rescue P4
U 1 1 526E0107
P 1550 1550
F 0 "P4" V 1500 1550 40  0000 C CNN
F 1 "CONN_2" V 1600 1550 40  0000 C CNN
F 2 "modFiles:Solar_Connector0.1" H 1550 1550 60  0000 C CNN
F 3 "~" H 1550 1550 60  0000 C CNN
	1    1550 1550
	-1   0    0    1   
$EndComp
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR066
U 1 1 526E01BC
P 2000 1750
F 0 "#PWR066" H 2000 1750 30  0001 C CNN
F 1 "GND" H 2000 1680 30  0001 C CNN
F 2 "" H 2000 1750 60  0000 C CNN
F 3 "" H 2000 1750 60  0000 C CNN
	1    2000 1750
	1    0    0    -1  
$EndComp
Wire Wire Line
	2000 1750 2000 1650
Wire Wire Line
	2000 1650 1900 1650
Wire Wire Line
	2500 1200 2950 1200
Wire Wire Line
	2000 850  2000 900 
Connection ~ 2000 900 
Wire Wire Line
	2350 900  2750 900 
Wire Wire Line
	3200 2600 3200 2900
Wire Wire Line
	3250 4900 3250 5000
Wire Wire Line
	3400 900  3850 900 
Wire Wire Line
	7000 2300 7050 2300
$Comp
L Connector:DB9_Male J2
U 1 1 5CBCAAAC
P 2600 4900
F 0 "J2" H 2780 4946 50  0000 L CNN
F 1 "DB9_Male" H 2780 4855 50  0000 L CNN
F 2 "modFiles:DB9" H 2600 4900 50  0001 C CNN
F 3 " ~" H 2600 4900 50  0001 C CNN
	1    2600 4900
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:MAX13080E-servo_slave U1
U 1 1 5CC5C0C3
P 1550 5900
F 0 "U1" H 1450 5550 50  0000 C CNN
F 1 "MAX13080E" H 1450 5450 50  0000 C CNN
F 2 "Package_DIP:DIP-14_W7.62mm" H 1600 5900 50  0001 C CNN
F 3 "" H 1600 5900 50  0001 C CNN
	1    1550 5900
	1    0    0    -1  
$EndComp
Text Label 1950 6000 0    50   ~ 0
Y
Text Label 1950 6100 0    50   ~ 0
Z
Text Label 1950 6500 0    50   ~ 0
B
Text Label 1950 6650 0    50   ~ 0
A
$Comp
L Device:R R2
U 1 1 5CC5CA48
P 1350 5450
F 0 "R2" H 1420 5496 50  0000 L CNN
F 1 "10K" V 1350 5400 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 1280 5450 50  0001 C CNN
F 3 "~" H 1350 5450 50  0001 C CNN
	1    1350 5450
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0102
U 1 1 5CC5CB77
P 950 5350
F 0 "#PWR0102" H 950 5100 50  0001 C CNN
F 1 "GND" H 955 5177 50  0000 C CNN
F 2 "" H 950 5350 50  0001 C CNN
F 3 "" H 950 5350 50  0001 C CNN
	1    950  5350
	1    0    0    -1  
$EndComp
Wire Wire Line
	950  5350 950  5300
Wire Wire Line
	950  5300 1350 5300
Wire Wire Line
	1350 5600 1150 5600
Connection ~ 1350 5600
Text Label 950  6100 2    50   ~ 0
sTx
Text Label 950  6500 2    50   ~ 0
sRx
$Comp
L servo_slave-rescue:VCC-servo_controller_no485-rescue #PWR0103
U 1 1 5CC7231B
P 1550 5600
F 0 "#PWR0103" H 1550 5700 30  0001 C CNN
F 1 "VCC" H 1550 5700 30  0000 C CNN
F 2 "" H 1550 5600 60  0000 C CNN
F 3 "" H 1550 5600 60  0000 C CNN
	1    1550 5600
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:TIP122-servo_slave Q3
U 1 1 5CBD2AFE
P 6800 5000
F 0 "Q3" H 7041 5038 40  0000 L CNN
F 1 "TIP122" H 7041 4962 40  0000 L CNN
F 2 "modFiles:Voltage_Regulator" H 6680 5105 29  0001 C CNN
F 3 "" H 6800 5000 60  0000 C CNN
	1    6800 5000
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:TIP122-servo_slave Q5
U 1 1 5CBD2B82
P 8200 5100
F 0 "Q5" H 8441 5138 40  0000 L CNN
F 1 "TIP122" H 8441 5062 40  0000 L CNN
F 2 "modFiles:Voltage_Regulator" H 8080 5205 29  0001 C CNN
F 3 "" H 8200 5100 60  0000 C CNN
	1    8200 5100
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:TIP122-servo_slave Q4
U 1 1 5CBD2C0C
P 8150 3750
F 0 "Q4" H 8391 3788 40  0000 L CNN
F 1 "TIP122" H 8391 3712 40  0000 L CNN
F 2 "modFiles:Voltage_Regulator" H 8030 3855 29  0001 C CNN
F 3 "" H 8150 3750 60  0000 C CNN
	1    8150 3750
	1    0    0    -1  
$EndComp
$Comp
L power:+12V #PWR0104
U 1 1 5CBD2DF3
P 8622 2850
F 0 "#PWR0104" H 8622 2700 50  0001 C CNN
F 1 "+12V" H 8637 3023 50  0000 C CNN
F 2 "" H 8622 2850 50  0001 C CNN
F 3 "" H 8622 2850 50  0001 C CNN
	1    8622 2850
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0107
U 1 1 5CBD306F
P 6900 5200
F 0 "#PWR0107" H 6900 4950 50  0001 C CNN
F 1 "GND" H 6905 5027 50  0000 C CNN
F 2 "" H 6900 5200 50  0001 C CNN
F 3 "" H 6900 5200 50  0001 C CNN
	1    6900 5200
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0108
U 1 1 5CBD30DD
P 8300 5300
F 0 "#PWR0108" H 8300 5050 50  0001 C CNN
F 1 "GND" H 8305 5127 50  0000 C CNN
F 2 "" H 8300 5300 50  0001 C CNN
F 3 "" H 8300 5300 50  0001 C CNN
	1    8300 5300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0109
U 1 1 5CBD3144
P 8250 3950
F 0 "#PWR0109" H 8250 3700 50  0001 C CNN
F 1 "GND" H 8255 3777 50  0000 C CNN
F 2 "" H 8250 3950 50  0001 C CNN
F 3 "" H 8250 3950 50  0001 C CNN
	1    8250 3950
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:TIP122-servo_slave Q2
U 1 1 5CBDE611
P 6750 3750
F 0 "Q2" H 6991 3788 40  0000 L CNN
F 1 "TIP122" H 6991 3712 40  0000 L CNN
F 2 "modFiles:Voltage_Regulator" H 6630 3855 29  0001 C CNN
F 3 "" H 6750 3750 60  0000 C CNN
	1    6750 3750
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0111
U 1 1 5CBDE6FC
P 6850 3950
F 0 "#PWR0111" H 6850 3700 50  0001 C CNN
F 1 "GND" H 6855 3777 50  0000 C CNN
F 2 "" H 6850 3950 50  0001 C CNN
F 3 "" H 6850 3950 50  0001 C CNN
	1    6850 3950
	1    0    0    -1  
$EndComp
$Comp
L Device:R R11
U 1 1 5CBF4A6E
P 7950 3900
F 0 "R11" H 8020 3946 50  0000 L CNN
F 1 "R" H 8020 3855 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 7880 3900 50  0001 C CNN
F 3 "~" H 7950 3900 50  0001 C CNN
	1    7950 3900
	1    0    0    -1  
$EndComp
$Comp
L Device:R R12
U 1 1 5CBF4B38
P 8000 5250
F 0 "R12" H 8070 5296 50  0000 L CNN
F 1 "R" H 8070 5205 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 7930 5250 50  0001 C CNN
F 3 "~" H 8000 5250 50  0001 C CNN
	1    8000 5250
	1    0    0    -1  
$EndComp
$Comp
L Device:R R8
U 1 1 5CBF4BCE
P 6600 5150
F 0 "R8" H 6670 5196 50  0000 L CNN
F 1 "R" H 6670 5105 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 6530 5150 50  0001 C CNN
F 3 "~" H 6600 5150 50  0001 C CNN
	1    6600 5150
	1    0    0    -1  
$EndComp
$Comp
L Device:R R7
U 1 1 5CBF4E01
P 6550 3900
F 0 "R7" H 6620 3946 50  0000 L CNN
F 1 "R" H 6620 3855 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 6480 3900 50  0001 C CNN
F 3 "~" H 6550 3900 50  0001 C CNN
	1    6550 3900
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0112
U 1 1 5CBF4E93
P 6550 4050
F 0 "#PWR0112" H 6550 3800 50  0001 C CNN
F 1 "GND" H 6555 3877 50  0000 C CNN
F 2 "" H 6550 4050 50  0001 C CNN
F 3 "" H 6550 4050 50  0001 C CNN
	1    6550 4050
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0113
U 1 1 5CBF4F02
P 6600 5300
F 0 "#PWR0113" H 6600 5050 50  0001 C CNN
F 1 "GND" H 6605 5127 50  0000 C CNN
F 2 "" H 6600 5300 50  0001 C CNN
F 3 "" H 6600 5300 50  0001 C CNN
	1    6600 5300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0114
U 1 1 5CBF4F71
P 8000 5400
F 0 "#PWR0114" H 8000 5150 50  0001 C CNN
F 1 "GND" H 8005 5227 50  0000 C CNN
F 2 "" H 8000 5400 50  0001 C CNN
F 3 "" H 8000 5400 50  0001 C CNN
	1    8000 5400
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0115
U 1 1 5CBF4FE0
P 7950 4050
F 0 "#PWR0115" H 7950 3800 50  0001 C CNN
F 1 "GND" H 7955 3877 50  0000 C CNN
F 2 "" H 7950 4050 50  0001 C CNN
F 3 "" H 7950 4050 50  0001 C CNN
	1    7950 4050
	1    0    0    -1  
$EndComp
$Comp
L Device:R R3
U 1 1 5CBF504F
P 6400 3750
F 0 "R3" V 6193 3750 50  0000 C CNN
F 1 "R" V 6284 3750 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 6330 3750 50  0001 C CNN
F 3 "~" H 6400 3750 50  0001 C CNN
	1    6400 3750
	0    1    1    0   
$EndComp
Connection ~ 6550 3750
Text Label 6250 3750 2    60   ~ 0
P28
$Comp
L Device:R R9
U 1 1 5CBF5206
P 7800 3750
F 0 "R9" V 7593 3750 50  0000 C CNN
F 1 "R" V 7684 3750 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 7730 3750 50  0001 C CNN
F 3 "~" H 7800 3750 50  0001 C CNN
	1    7800 3750
	0    1    1    0   
$EndComp
Connection ~ 7950 3750
$Comp
L Device:R R10
U 1 1 5CBF539E
P 7850 5100
F 0 "R10" V 7643 5100 50  0000 C CNN
F 1 "R" V 7734 5100 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 7780 5100 50  0001 C CNN
F 3 "~" H 7850 5100 50  0001 C CNN
	1    7850 5100
	0    1    1    0   
$EndComp
Connection ~ 8000 5100
$Comp
L Device:R R6
U 1 1 5CBF54DB
P 6450 5000
F 0 "R6" V 6243 5000 50  0000 C CNN
F 1 "R" V 6334 5000 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 6380 5000 50  0001 C CNN
F 3 "~" H 6450 5000 50  0001 C CNN
	1    6450 5000
	0    1    1    0   
$EndComp
Connection ~ 6600 5000
$Comp
L Switch:SW_DIP_x04 SW2
U 1 1 5CBDD61E
P 6150 6150
F 0 "SW2" V 6104 6480 50  0000 L CNN
F 1 "Address" V 6195 6480 50  0000 L CNN
F 2 "Package_DIP:DIP-8_W7.62mm" H 6150 6150 50  0001 C CNN
F 3 "" H 6150 6150 50  0001 C CNN
	1    6150 6150
	1    0    0    -1  
$EndComp
Text Label 5850 5950 2    50   ~ 0
P18
Text Label 5850 6050 2    50   ~ 0
P17
Text Label 5850 6250 2    50   ~ 0
P15
Text Label 5850 6150 2    50   ~ 0
P16
Wire Wire Line
	6450 6250 6450 6150
Wire Wire Line
	6450 6150 6450 6100
Connection ~ 6450 6150
Wire Wire Line
	6450 6050 6450 5950
Connection ~ 6450 6050
$Comp
L power:GND #PWR0116
U 1 1 5CBEF0AA
P 6450 6100
F 0 "#PWR0116" H 6450 5850 50  0001 C CNN
F 1 "GND" H 6455 5927 50  0000 C CNN
F 2 "" H 6450 6100 50  0001 C CNN
F 3 "" H 6450 6100 50  0001 C CNN
	1    6450 6100
	0    -1   -1   0   
$EndComp
Connection ~ 6450 6100
Wire Wire Line
	6450 6100 6450 6050
$Comp
L Device:R R13
U 1 1 5CBDD252
P 3500 5750
F 0 "R13" H 3570 5796 50  0000 L CNN
F 1 "R" H 3570 5705 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3430 5750 50  0001 C CNN
F 3 "~" H 3500 5750 50  0001 C CNN
	1    3500 5750
	1    0    0    -1  
$EndComp
$Comp
L Device:Jumper JP1
U 1 1 5CBDD4EE
P 3500 6200
F 0 "JP1" V 3546 6112 50  0000 R CNN
F 1 "Jumper" V 3455 6112 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 3500 6200 50  0001 C CNN
F 3 "~" H 3500 6200 50  0001 C CNN
	1    3500 6200
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R14
U 1 1 5CBDD75B
P 3500 6650
F 0 "R14" H 3570 6696 50  0000 L CNN
F 1 "R" H 3570 6605 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3430 6650 50  0001 C CNN
F 3 "~" H 3500 6650 50  0001 C CNN
	1    3500 6650
	1    0    0    -1  
$EndComp
$Comp
L Device:R R15
U 1 1 5CBDD80F
P 3500 6950
F 0 "R15" H 3570 6996 50  0000 L CNN
F 1 "R" H 3570 6905 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3430 6950 50  0001 C CNN
F 3 "~" H 3500 6950 50  0001 C CNN
	1    3500 6950
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR0117
U 1 1 5CBDD8A7
P 3500 7100
F 0 "#PWR0117" H 3500 7100 30  0001 C CNN
F 1 "GND" H 3500 7030 30  0001 C CNN
F 2 "" H 3500 7100 60  0000 C CNN
F 3 "" H 3500 7100 60  0000 C CNN
	1    3500 7100
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:VCC-servo_controller_no485-rescue #PWR0118
U 1 1 5CBDDAC5
P 3500 5600
F 0 "#PWR0118" H 3500 5700 30  0001 C CNN
F 1 "VCC" H 3500 5700 30  0000 C CNN
F 2 "" H 3500 5600 60  0000 C CNN
F 3 "" H 3500 5600 60  0000 C CNN
	1    3500 5600
	1    0    0    -1  
$EndComp
Text Label 3500 5900 0    50   ~ 0
Y
Text Label 3500 6800 0    50   ~ 0
Z
$Comp
L Device:R R16
U 1 1 5CBE43EC
P 3950 5750
F 0 "R16" H 4020 5796 50  0000 L CNN
F 1 "R" H 4020 5705 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3880 5750 50  0001 C CNN
F 3 "~" H 3950 5750 50  0001 C CNN
	1    3950 5750
	1    0    0    -1  
$EndComp
$Comp
L Device:Jumper JP2
U 1 1 5CBE43F3
P 3950 6200
F 0 "JP2" V 3996 6112 50  0000 R CNN
F 1 "Jumper" V 3905 6112 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 3950 6200 50  0001 C CNN
F 3 "~" H 3950 6200 50  0001 C CNN
	1    3950 6200
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R17
U 1 1 5CBE43FA
P 3950 6650
F 0 "R17" H 4020 6696 50  0000 L CNN
F 1 "R" H 4020 6605 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3880 6650 50  0001 C CNN
F 3 "~" H 3950 6650 50  0001 C CNN
	1    3950 6650
	1    0    0    -1  
$EndComp
$Comp
L Device:R R18
U 1 1 5CBE4401
P 3950 6950
F 0 "R18" H 4020 6996 50  0000 L CNN
F 1 "R" H 4020 6905 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3880 6950 50  0001 C CNN
F 3 "~" H 3950 6950 50  0001 C CNN
	1    3950 6950
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR0119
U 1 1 5CBE4408
P 3950 7100
F 0 "#PWR0119" H 3950 7100 30  0001 C CNN
F 1 "GND" H 3950 7030 30  0001 C CNN
F 2 "" H 3950 7100 60  0000 C CNN
F 3 "" H 3950 7100 60  0000 C CNN
	1    3950 7100
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:VCC-servo_controller_no485-rescue #PWR0120
U 1 1 5CBE440E
P 3950 5600
F 0 "#PWR0120" H 3950 5700 30  0001 C CNN
F 1 "VCC" H 3950 5700 30  0000 C CNN
F 2 "" H 3950 5600 60  0000 C CNN
F 3 "" H 3950 5600 60  0000 C CNN
	1    3950 5600
	1    0    0    -1  
$EndComp
Text Label 3950 5900 0    50   ~ 0
A
Text Label 3950 6800 0    50   ~ 0
B
Text Label 2300 5200 0    50   ~ 0
Y
Text Label 2300 5000 0    50   ~ 0
Z
Text Label 2300 4600 0    50   ~ 0
A
Text Label 2300 4800 0    50   ~ 0
B
Text Label 5400 4400 0    50   ~ 0
sRx
Text Label 5400 4500 0    50   ~ 0
sTx
Wire Wire Line
	2000 900  2350 900 
$Comp
L power:+12V #PWR0122
U 1 1 5CC4667C
P 1900 1450
F 0 "#PWR0122" H 1900 1300 50  0001 C CNN
F 1 "+12V" H 1915 1623 50  0000 C CNN
F 2 "" H 1900 1450 50  0001 C CNN
F 3 "" H 1900 1450 50  0001 C CNN
	1    1900 1450
	1    0    0    -1  
$EndComp
Text Label 1150 5600 2    50   ~ 0
P11
$Comp
L power:GND #PWR0125
U 1 1 5CBE3878
P 9828 6068
F 0 "#PWR0125" H 9828 5818 50  0001 C CNN
F 1 "GND" H 9833 5895 50  0000 C CNN
F 2 "" H 9828 6068 50  0001 C CNN
F 3 "" H 9828 6068 50  0001 C CNN
	1    9828 6068
	1    0    0    -1  
$EndComp
$Comp
L Device:R R21
U 1 1 5CBFB0D0
P 5050 6700
F 0 "R21" H 5120 6746 50  0000 L CNN
F 1 "R" H 5120 6655 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 4980 6700 50  0001 C CNN
F 3 "~" H 5050 6700 50  0001 C CNN
	1    5050 6700
	1    0    0    -1  
$EndComp
$Comp
L Device:R R22
U 1 1 5CBFB156
P 5200 6700
F 0 "R22" H 5270 6746 50  0000 L CNN
F 1 "R" H 5270 6655 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 5130 6700 50  0001 C CNN
F 3 "~" H 5200 6700 50  0001 C CNN
	1    5200 6700
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D4
U 1 1 5CBFBB0F
P 5050 7000
F 0 "D4" V 5088 6883 50  0000 R CNN
F 1 "LED" V 4997 6883 50  0000 R CNN
F 2 "modFiles:Led_3mm" H 5050 7000 50  0001 C CNN
F 3 "~" H 5050 7000 50  0001 C CNN
	1    5050 7000
	0    -1   -1   0   
$EndComp
$Comp
L Device:LED D5
U 1 1 5CBFBD35
P 5200 7000
F 0 "D5" V 5238 6883 50  0000 R CNN
F 1 "LED" V 5147 6883 50  0000 R CNN
F 2 "modFiles:Led_3mm" H 5200 7000 50  0001 C CNN
F 3 "~" H 5200 7000 50  0001 C CNN
	1    5200 7000
	0    -1   -1   0   
$EndComp
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR0128
U 1 1 5CBFBEDB
P 5050 7150
F 0 "#PWR0128" H 5050 7150 30  0001 C CNN
F 1 "GND" H 5050 7080 30  0001 C CNN
F 2 "" H 5050 7150 60  0000 C CNN
F 3 "" H 5050 7150 60  0000 C CNN
	1    5050 7150
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR0129
U 1 1 5CBFC0B3
P 5200 7150
F 0 "#PWR0129" H 5200 7150 30  0001 C CNN
F 1 "GND" H 5200 7080 30  0001 C CNN
F 2 "" H 5200 7150 60  0000 C CNN
F 3 "" H 5200 7150 60  0000 C CNN
	1    5200 7150
	1    0    0    -1  
$EndComp
Text Label 5050 6550 1    50   ~ 0
P13
Text Label 5200 6550 1    50   ~ 0
P14
$Comp
L power:VCC #PWR0130
U 1 1 5CBFEF33
P 4050 1900
F 0 "#PWR0130" H 4050 1750 50  0001 C CNN
F 1 "VCC" H 4067 2073 50  0000 C CNN
F 2 "" H 4050 1900 50  0001 C CNN
F 3 "" H 4050 1900 50  0001 C CNN
	1    4050 1900
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:C-servo_controller_no485-rescue C9
U 1 1 5CBFC0E9
P 8050 1250
F 0 "C9" H 8050 1350 40  0000 L CNN
F 1 "104" H 8056 1165 40  0000 L CNN
F 2 "modFiles:Ceramic_5.00" H 8088 1100 30  0000 C CNN
F 3 "~" H 8050 1250 60  0000 C CNN
	1    8050 1250
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:C-servo_controller_no485-rescue C12
U 1 1 5CBFC558
P 8250 1250
F 0 "C12" H 8250 1350 40  0000 L CNN
F 1 "104" H 8256 1165 40  0000 L CNN
F 2 "modFiles:Ceramic_5.00" H 8288 1100 30  0000 C CNN
F 3 "~" H 8250 1250 60  0000 C CNN
	1    8250 1250
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:C-servo_controller_no485-rescue C14
U 1 1 5CBFEF5B
P 8450 1250
F 0 "C14" H 8450 1350 40  0000 L CNN
F 1 "104" H 8456 1165 40  0000 L CNN
F 2 "modFiles:Ceramic_5.00" H 8488 1100 30  0000 C CNN
F 3 "~" H 8450 1250 60  0000 C CNN
	1    8450 1250
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:C-servo_controller_no485-rescue C15
U 1 1 5CBFEF62
P 8650 1250
F 0 "C15" H 8650 1350 40  0000 L CNN
F 1 "104" H 8656 1165 40  0000 L CNN
F 2 "modFiles:Ceramic_2.54" H 8688 1100 30  0000 C CNN
F 3 "~" H 8650 1250 60  0000 C CNN
	1    8650 1250
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:C-servo_controller_no485-rescue C16
U 1 1 5CBFEF69
P 8850 1250
F 0 "C16" H 8850 1350 40  0000 L CNN
F 1 "104" H 8856 1165 40  0000 L CNN
F 2 "modFiles:Ceramic_5.00" H 8888 1100 30  0000 C CNN
F 3 "~" H 8850 1250 60  0000 C CNN
	1    8850 1250
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:C-servo_controller_no485-rescue C17
U 1 1 5CBFEF70
P 9050 1250
F 0 "C17" H 9050 1350 40  0000 L CNN
F 1 "104" H 9056 1165 40  0000 L CNN
F 2 "modFiles:Ceramic_5.00" H 9088 1100 30  0000 C CNN
F 3 "~" H 9050 1250 60  0000 C CNN
	1    9050 1250
	1    0    0    -1  
$EndComp
Wire Wire Line
	8450 1050 8650 1050
Connection ~ 8450 1050
Wire Wire Line
	8650 1050 8850 1050
Connection ~ 8650 1050
Wire Wire Line
	8850 1050 9050 1050
Connection ~ 8850 1050
Wire Wire Line
	9050 1450 8850 1450
Wire Wire Line
	8850 1450 8650 1450
Connection ~ 8850 1450
Wire Wire Line
	8650 1450 8450 1450
Connection ~ 8650 1450
Connection ~ 8450 1450
$Comp
L power:VCC #PWR0131
U 1 1 5CC28E47
P 8050 1050
F 0 "#PWR0131" H 8050 900 50  0001 C CNN
F 1 "VCC" H 8067 1223 50  0000 C CNN
F 2 "" H 8050 1050 50  0001 C CNN
F 3 "" H 8050 1050 50  0001 C CNN
	1    8050 1050
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0132
U 1 1 5CC28F7D
P 9050 1450
F 0 "#PWR0132" H 9050 1200 50  0001 C CNN
F 1 "GND" H 9055 1277 50  0000 C CNN
F 2 "" H 9050 1450 50  0001 C CNN
F 3 "" H 9050 1450 50  0001 C CNN
	1    9050 1450
	1    0    0    -1  
$EndComp
Connection ~ 9050 1450
$Comp
L servo_slave-rescue:C-servo_controller_no485-rescue C7
U 1 1 5CC290F2
P 7300 1750
F 0 "C7" H 7300 1850 40  0000 L CNN
F 1 "104" H 7306 1665 40  0000 L CNN
F 2 "modFiles:Ceramic_5.00" H 7338 1600 30  0000 C CNN
F 3 "~" H 7300 1750 60  0000 C CNN
	1    7300 1750
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:C-servo_controller_no485-rescue C8
U 1 1 5CC291AE
P 7500 1750
F 0 "C8" H 7500 1850 40  0000 L CNN
F 1 "104" H 7506 1665 40  0000 L CNN
F 2 "modFiles:Ceramic_5.00" H 7538 1600 30  0000 C CNN
F 3 "~" H 7500 1750 60  0000 C CNN
	1    7500 1750
	1    0    0    -1  
$EndComp
$Comp
L servo_slave-rescue:+6V-servo_controller_no485-rescue #PWR0133
U 1 1 5CC2968E
P 7300 1550
F 0 "#PWR0133" H 7300 1680 20  0001 C CNN
F 1 "+6V" H 7300 1650 30  0000 C CNN
F 2 "" H 7300 1550 60  0000 C CNN
F 3 "" H 7300 1550 60  0000 C CNN
	1    7300 1550
	1    0    0    -1  
$EndComp
Wire Wire Line
	7500 1550 7300 1550
Connection ~ 7300 1550
Wire Wire Line
	7700 1950 7500 1950
Wire Wire Line
	7500 1950 7300 1950
Connection ~ 7500 1950
$Comp
L power:GND #PWR0134
U 1 1 5CC3A0B1
P 7700 1950
F 0 "#PWR0134" H 7700 1700 50  0001 C CNN
F 1 "GND" H 7705 1777 50  0000 C CNN
F 2 "" H 7700 1950 50  0001 C CNN
F 3 "" H 7700 1950 50  0001 C CNN
	1    7700 1950
	1    0    0    -1  
$EndComp
Connection ~ 8250 1050
Connection ~ 8250 1450
Wire Wire Line
	8250 1050 8450 1050
Wire Wire Line
	8250 1450 8450 1450
Wire Wire Line
	8050 1050 8250 1050
Connection ~ 8050 1050
Wire Wire Line
	8050 1450 8250 1450
$Comp
L Connector:Conn_01x05_Male J3
U 1 1 5CC5DE84
P 8822 3050
F 0 "J3" H 8795 2980 50  0000 R CNN
F 1 "Conn_01x05_Male" H 8795 3071 50  0000 R CNN
F 2 "Connector_Phoenix_MC_HighVoltage:PhoenixContact_MCV_1,5_5-G-5.08_1x05_P5.08mm_Vertical" H 8822 3050 50  0001 C CNN
F 3 "~" H 8822 3050 50  0001 C CNN
	1    8822 3050
	-1   0    0    1   
$EndComp
Text Label 8622 2950 2    50   ~ 0
28
Text Label 8622 3050 2    50   ~ 0
26
Text Label 8622 3250 2    50   ~ 0
27
Text Label 8622 3150 2    50   ~ 0
25
Text Label 6850 3550 0    50   ~ 0
28
Text Label 8250 3550 2    50   ~ 0
25
Text Label 6900 4800 0    50   ~ 0
27
Text Label 8300 4900 0    50   ~ 0
26
Text Label 9828 5968 2    50   ~ 0
RX
Text Label 9828 5868 2    50   ~ 0
TX
$Comp
L power:GND #PWR0105
U 1 1 5CC626CA
P 9828 5768
F 0 "#PWR0105" H 9828 5518 50  0001 C CNN
F 1 "GND" H 9833 5595 50  0000 C CNN
F 2 "" H 9828 5768 50  0001 C CNN
F 3 "" H 9828 5768 50  0001 C CNN
	1    9828 5768
	0    1    1    0   
$EndComp
$Comp
L Connector:Conn_01x05_Male J4
U 1 1 5CC61B19
P 10028 5868
F 0 "J4" H 10001 5798 50  0000 R CNN
F 1 "Conn_01x05_Male" H 10001 5889 50  0000 R CNN
F 2 "Connector_Phoenix_MC:PhoenixContact_MCV_1,5_5-G-3.5_1x05_P3.50mm_Vertical" H 10028 5868 50  0001 C CNN
F 3 "~" H 10028 5868 50  0001 C CNN
	1    10028 5868
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR0106
U 1 1 5CD15C11
P 9828 5668
F 0 "#PWR0106" H 9828 5418 50  0001 C CNN
F 1 "GND" H 9833 5495 50  0000 C CNN
F 2 "" H 9828 5668 50  0001 C CNN
F 3 "" H 9828 5668 50  0001 C CNN
	1    9828 5668
	0    1    1    0   
$EndComp
$Comp
L pspice:DIODE D2
U 1 1 5CD17C2C
P 7672 6090
F 0 "D2" V 7626 6218 50  0000 L CNN
F 1 "DIODE" V 7717 6218 50  0000 L CNN
F 2 "modFiles:Diode_1N4007" H 7672 6090 50  0001 C CNN
F 3 "~" H 7672 6090 50  0001 C CNN
	1    7672 6090
	0    1    1    0   
$EndComp
Text Label 7672 5890 0    50   ~ 0
25
$Comp
L pspice:DIODE D3
U 1 1 5CD190AD
P 7988 6090
F 0 "D3" V 7942 6218 50  0000 L CNN
F 1 "DIODE" V 8033 6218 50  0000 L CNN
F 2 "modFiles:Diode_1N4007" H 7988 6090 50  0001 C CNN
F 3 "~" H 7988 6090 50  0001 C CNN
	1    7988 6090
	0    1    1    0   
$EndComp
Text Label 7988 5890 0    50   ~ 0
26
$Comp
L pspice:DIODE D6
U 1 1 5CD1AD71
P 8314 6090
F 0 "D6" V 8268 6218 50  0000 L CNN
F 1 "DIODE" V 8359 6218 50  0000 L CNN
F 2 "modFiles:Diode_1N4007" H 8314 6090 50  0001 C CNN
F 3 "~" H 8314 6090 50  0001 C CNN
	1    8314 6090
	0    1    1    0   
$EndComp
Text Label 8314 5890 0    50   ~ 0
27
Text Label 8628 5860 0    50   ~ 0
28
$Comp
L power:+12V #PWR0110
U 1 1 5CD21342
P 7290 6202
F 0 "#PWR0110" H 7290 6052 50  0001 C CNN
F 1 "+12V" H 7305 6375 50  0000 C CNN
F 2 "" H 7290 6202 50  0001 C CNN
F 3 "" H 7290 6202 50  0001 C CNN
	1    7290 6202
	1    0    0    -1  
$EndComp
Wire Wire Line
	7290 6202 7290 6290
Wire Wire Line
	7290 6290 7672 6290
Wire Wire Line
	8628 6290 8628 6260
Connection ~ 8314 6290
Wire Wire Line
	8314 6290 8628 6290
Connection ~ 7988 6290
Wire Wire Line
	7988 6290 8314 6290
Connection ~ 7672 6290
Wire Wire Line
	7672 6290 7988 6290
$Comp
L pspice:DIODE D7
U 1 1 5CD1C9CB
P 8628 6060
F 0 "D7" V 8582 6188 50  0000 L CNN
F 1 "DIODE" V 8673 6188 50  0000 L CNN
F 2 "modFiles:Diode_1N4007" H 8628 6060 50  0001 C CNN
F 3 "~" H 8628 6060 50  0001 C CNN
	1    8628 6060
	0    1    1    0   
$EndComp
Wire Wire Line
	2300 5300 2300 5200
Wire Wire Line
	2300 5100 2300 5000
Wire Wire Line
	2300 4900 2300 4800
Wire Wire Line
	2300 4700 2300 4600
$Comp
L Connector:DB9_Female J1
U 1 1 5CBCAFC9
P 1400 4600
F 0 "J1" H 1579 4646 50  0000 L CNN
F 1 "DB9_Female" H 1579 4555 50  0000 L CNN
F 2 "modFiles:DB9" H 1400 4600 50  0001 C CNN
F 3 " ~" H 1400 4600 50  0001 C CNN
	1    1400 4600
	-1   0    0    1   
$EndComp
Text Label 1700 4850 0    50   ~ 0
A
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR0101
U 1 1 5CC50DEE
P 2300 4450
F 0 "#PWR0101" H 2300 4450 30  0001 C CNN
F 1 "GND" H 2300 4380 30  0001 C CNN
F 2 "" H 2300 4450 60  0000 C CNN
F 3 "" H 2300 4450 60  0000 C CNN
	1    2300 4450
	-1   0    0    1   
$EndComp
Text Label 1700 4650 0    50   ~ 0
B
Text Label 1700 4450 0    50   ~ 0
Z
Text Label 1700 4250 0    50   ~ 0
Y
$Comp
L servo_slave-rescue:GND-servo_controller_no485-rescue #PWR0121
U 1 1 5CC34E1F
P 1700 5100
F 0 "#PWR0121" H 1700 5100 30  0001 C CNN
F 1 "GND" H 1700 5030 30  0001 C CNN
F 2 "" H 1700 5100 60  0000 C CNN
F 3 "" H 1700 5100 60  0000 C CNN
	1    1700 5100
	1    0    0    -1  
$EndComp
Wire Wire Line
	1700 5100 1700 5000
Wire Wire Line
	1700 4800 1700 4900
Wire Wire Line
	1700 4600 1700 4700
Wire Wire Line
	1700 4400 1700 4500
Wire Wire Line
	1700 4200 1700 4300
Wire Wire Line
	2300 4500 2300 4450
$Comp
L power:GND #PWR?
U 1 1 5DEBD23E
P 1500 7000
F 0 "#PWR?" H 1500 6750 50  0001 C CNN
F 1 "GND" H 1505 6827 50  0000 C CNN
F 2 "" H 1500 7000 50  0001 C CNN
F 3 "" H 1500 7000 50  0001 C CNN
	1    1500 7000
	1    0    0    -1  
$EndComp
Wire Wire Line
	1550 7000 1500 7000
Wire Wire Line
	1500 7000 1450 7000
Connection ~ 1500 7000
Wire Wire Line
	1450 7000 1250 7000
Connection ~ 1450 7000
$EndSCHEMATC
