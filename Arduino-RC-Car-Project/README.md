# CSCI-4830
Projects 2 for CSCI 4830

**_Arduino RC Car Project - "An Arduino Controlled Maisto Rock Crawler"_**

Step By Step Instructable can be found here:  http://www.instructables.com/id/Arduino-Xbox-RC-Car-Hack-Maisto-Rock-Crawler/

**Base Project Description:**

In this project we are going to hack an RC Car (Maisto Rock Crawler) and replace it's stock circuit board with an Arduino Uno R3, Motor Shield, and XBee module. We will use another Arduino to collect and interpret data from an Xbox 360 controller; this Arduino will also have an XBee module, which will be sending instructions to its XBee pair (located on the Car).
    				
**Components:**

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
    
**Tools:**

    Multimeter
    Soldering Iron
    Solder
    Micro USB to USB cable
    USB cable type A/B
   
**Software:**

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

**Steps:** - Reference Instructables page for full detail 

    1. Gather Materials & Disassemble RC Car
    2. Map Functionality of Circuit Board
    3. Cut and Splice Wires
    4. Attach a Motor Shield / Load Test to Arduino 
    5. Program two RF Modules (XBee's) to Communicate 
    6. Attach one XBee to Your Arduino and one to Your Computer
    7. Control RC Car from Your Computer 
    8. Test the USB Shield and Connect to Xbox 360 Controller  
    9. Move XBee to Our 2nd Arduino
    10. Write Our Final Two Sketches 


**Other Expansive Options:**

    - Add an onboard camera and wirelessly stream video to a phone or a controller mounted display
    - Attach Microphone to pick up audio (Spying device) 
    - Communicate with motors/servos via web server hosted on device, allowing a phone to operate the car  
    - Add some autonomous features for obstacle avoidance (i.e Sonar, GPS technology) 
    - Add Speaker to communicate with people around the RC Car 
    - Send and process video for use by a virtual reality headset 
    
**References:**

"Arduino - Getting Started." Arduino - Getting Started. N.p., n.d. Web. 02 Mar. 2016. <https://www.arduino.cc/en/Guide/HomePage>."Legend." Arduino Playground. N.p., n.d. Web. 02 Mar. 2016. <http://playground.arduino.cc/Main/ShieldPinUsage>."Exploring XBees and XCTU." Exploring XBees and XCTU. N.p., n.d. Web. 03 Mar. 2016. <https://learn.sparkfun.com/tutorials/exploring-xbees-and-xctu>."Driving an RC Car with a PS3 Controller." Barretts Projects. N.p., 13 Jan. 2013. Web. 02 Mar. 2016. <https://barrettsprojects.wordpress.com/2013/01/13/driving-an-rc-car-with-a-ps3-controller/>."Felis/USB_Host_Shield_2.0." GitHub. N.p., n.d. Web. 02 Mar. 2016. <https://github.com/felis/USB_Host_Shield_2.0>."Arduino and Xbee Wireless Setup (Video 1)." YouTube. YouTube, n.d. Web. 03 Mar. 2016. <https://www.youtube.com/watch?v=WTnC1bHoaDM>."Arduino - RC Car Hacked Together Tutorial." YouTube. YouTube, n.d. Web. 03 Mar. 2016. <https://www.youtube.com/watch?v=iRIgvX2Q2x8>.
    




