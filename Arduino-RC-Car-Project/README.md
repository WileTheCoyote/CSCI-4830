# CSCI-4830
Projects 2 for CSCI 4830

**_Arduino RC Car Project - "An Arduino Controlled Maisto Rock Crawler"_**

**Base Project Description:**

In this project we are going to hack an RC Car (Maisto Rock Crawler) and replace it's stock circuit board with an Arduino Uno R3, Motor Shield, and XBee module. We will use another Arduino to collect and interpret data from an Xbox 360 controller; this Arduino will also have an XBee module, which will be sending instructions to its XBee pair (located on the Car).

**Concept:**
    				
    Components:

    RC Car 							-We used: Maisto Rock Crawler (4WD)
    Arduino x2						-We used: Arduino Uno R3
    Motor/Servo Shield 				-We used: Velleman VMA03
    USB Host shield 				-We used: Circuits@Home USB Host shield 2.0
    XBee RF Module x2				-We used: XBee 802.15.4) x2
    XBee host shield x2				-We used: one Arduino Wireless SD shield & one Arduino XBee shield model 
    XBee mini USB adaptor 			-i.e SparkFun XBee Explorer
    Xbox 360 wireless Receiver		-be sure to use Microsoft (No Third Party)
    Xbox 360 Controller
    9V Battery Pack
    Female/Male & Male/Male Connector cables
    
    Tools:

    Multimeter
    Soldering Iron
    Solder
    Micro USB to USB cable
    USB cable type A/B
   
    Software:

    XCTU (For programming XBees)
    Arduino IDE
    
![ScreenShot](https://github.com/WileTheCoyote/CSCI-4830/blob/master/Arduino-RC-Car-Project/ToolsAndComponents.jpg)

First we remove the plastic body and any plastic cover shielding the stock circuit board and components. Once removed, we can now start probing around
with our multimeter; taking special attention to which wire does what and at what voltage. After we have mapped what each wire does on the RC Car's Circuit Board, 
We can cut the wires but it may help to immediately solder on a female head on one spliced side and a male head on the other (This way we can always re-assemble 
the motors/servo wires to the stock circuit board and restore is designed functionality). 

![ScreenShot](https://github.com/WileTheCoyote/CSCI-4830/blob/master/Arduino-RC-Car-Project/RCcar.jpg)   

Voltages:

    Forward 	= Approx. 9v
    Backwards 	= Approx. 9v
    Right 		= Approx. 6v
    Left 		= Approx. 6v
    
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
    




