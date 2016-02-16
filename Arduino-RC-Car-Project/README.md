# CSCI-4830
Projects 2 for CSCI 4830

**_Arduino RC Car Project - "An Arduino Controlled Maisto Rock Crawler"_**

**Base Project Description:**

In this project I want to reverse engineer and disassemble an RC Car and replace it's stock onboard circuit board with an Arduino Uno R3 (and Motor Shield). Once
we have the car's motors/servos taking driving instructions from the Arduino we will incorporate a Bluetooth Module (Xbee Wire Antenna) to communicate with a 
wireless remote (PS2 OR XBOX controller). 

**Concept:**
    
    We will need:
    
    RC Car 						- I have a Maisto Rock Crawler (4WD, 2 DC motors for front and back throttle, and 1 Servo for steering)
    Arduino 					- I will be using a Arduino Uno R3 
    Motor and Servo Shield 		- I will use an Adafruit motor shield v2 (For most RC Cars the shield must support 2 DC motors and a Servo)
    Multimeter 					- To test voltages and find what wires are connected to what motors
    Jumper leads and Wires 		- Will need all sorts (Female/Male, Male/Male)
    Bluetooth Module 			- I will use an Xbee wire antenna (Not Pictured)
    WiFi Dongle 				- For streaming of video, I have a WiPi wireless adapter
    9V Battery 					- Can reconfigure battery pack onboard RC Car and/or use single 9v for testing purposes
    Solder and Soldering Iron
    
![ScreenShot](https://github.com/WileTheCoyote/CSCI-4830/blob/master/Arduino-RC-Car-Project/ToolsAndComponents.jpg)

First we remove the plastic body and any plastic cover shielding the stock circuit board and components. Once removed, we can now start probing around
with our multimeter; taking special attention to which wire does what and at what voltage. After we have mapped what each wire does on the RC Car's Circuit Board, 
We can cut the wires but it may help to immediately solder on a female head on one spliced side and a male head on the other (This way we can always re-assemble 
the motors/servo wires to the stock circuit board and restore is designed functionality). 

![ScreenShot](https://github.com/WileTheCoyote/CSCI-4830/blob/master/Arduino-RC-Car-Project/RCcar.jpg)   

Voltages:

    Forward = Approx. 9v
    Backwards = Approx. 9v
    Right = Approx. 6v
    Left = Approx. 6v
    
Circuit Board Map:
    
    M1+		= Forward (2 Black Leads)
    M1- 	= Backward (2 Red Leads
    M2 +	= Left (Purple Lead)
    M2 - 	= Right (Grey Lead)
    VCC		= Power (Red Lead)
    Gnd		= Ground (Black Lead)
    Ant		= Antenna
    A,B,C	= Radio Channels from controller
    
![ScreenShot](https://github.com/WileTheCoyote/CSCI-4830/blob/master/Arduino-RC-Car-Project/StockCircuitBoard.jpg)   

**Expansive Options:**

    - Add an onboard camera and wirelessly stream video to a phone or a controller mounted display
    - Attach Microphone to pick up audio (Spying device)  
    - Communicate with motors/servos via web server hosted on device, allowing a phone to operate the car
    - Add some autonomous features for obstacle avoidance (i.e Sonar, GPS technology) 
    - Add Speaker to communicate with people around the RC Car
    - Send and process video for use by a virtual reality headset
    




