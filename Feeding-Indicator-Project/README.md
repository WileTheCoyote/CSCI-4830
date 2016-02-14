# CSCI-4830
1st Project for CSCI 4830

Feeding Schedule Lights - "Lights that indicate whether your pet has been fed"

Problem Description:

https://vimeo.com/153738062?utm_source=email&utm_medium=vimeo-cliptranscode-201504&utm_campaign=28749

In this project I have developed a solution to the common problem of being unaware whether your pet has been fed.
i.e. Many people often feed their dog one or two times per day. Some have more proven systems that make sure the dog has not been fed by more than one person but often large families have systems that are far less than perfect. When push comes to shove most people will simply feed the dog out of fear that he or she has not eaten. Or perhaps one will wrongly assume they have already eaten.

In my case our dog, Max, "should" get fed twice per day. But with a family of six, he inevitably gets fed more or sometimes less. 

Preliminary Concept:

   We will need:

    Raspberry Pi                                                 - I will be using a Raspberry Pi 1 model B 
   <br /> 3 LED Lights (each of a different color)        - I used 3 10mm gumdrop LEDs (Green, Red, and Orange) 
   <br /> Breadboard                                                   - to experiment with the circuit design
   <br /> 1 330ohm resistor                                         - I used 3 1000ohm in parallel 
   <br /> Tilt Sensor                                                     - I used a LinkSprite Tile Module 
   <br /> Jumper Lead Wires                                       - I used both female to male and male to male 
   <br /> Small ProtoBoard                                          - For final circuit design 
   <br /> Project Box                                                    - A medium sized project box to enclose components 
   <br /> Power Source                                                - Either a external battery pack or wall mount 
   
   The Raspberry Pi (in my case running Raspbian) will run a small python script that will cycle through each light cycle. Lets say the light is green because the dog 
   has just eaten; the light will eventually turn orange, indicating the dog has now gone 12 hours without being fed. After another 12 hours (indicating 24 hours has 
   now passed without being fed) the light will turn red. A callback function will be employed so that when ever the lid of the food container is opened (As sensed my
   the Tilt Sensor) the light will be turned green, and thus a new 12 hour count down will begin. note - the light should never turn directly from green to red and the 
   callback function can turn the light to green in any light cycle, including green. A bouncetime parameter will be set to keep the sensor from being triggered more than
   once in a 30 second time frame.
  
   <br /> Green - Dog is happy - "Has just recently been fed"
   <br /> Orange - Dog is hungry - "Has not been fed for 12 hours"
   <br /> Red - Dog is Starving - " Has not been fed for 24 hours"

Possible Extra Features:
   <br /> Could attach a speaker to siren after light has been red for 12 hours
   <br /> Could attach WiFi dongle to send text alert for similar circumstance
   