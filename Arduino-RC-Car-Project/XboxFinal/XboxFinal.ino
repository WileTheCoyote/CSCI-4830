#include <XBOXRECV.h>

// Satisfy the IDE, which needs to see the include statment in the ino too.
#ifdef dobogusinclude
#include <spi4teensy3.h>
#include <SPI.h>
#endif

USB Usb;
XBOXRECV Xbox(&Usb);

void setup() {
  Serial.begin(9600);
#if !defined(__MIPSEL__)
  while (!Serial); // Wait for serial port to connect - used on Leonardo, Teensy and other boards with built-in USB CDC serial connection
#endif
  if (Usb.Init() == -1) {
    
    while (1); //halt
  }
  Serial.print(F("\r\nXbox Wireless Receiver Library Started"));
}
int buttonStateR2 = 0;
int lastButtonStateR2 = 9;
int buttonStateL2 = 0;
int lastButtonStateL2 = 9;
int buttonStateRStick = 0;
int lastButtonStateRStick = 9;
int lastRStick = 9;
int RStickVal = 0;
int twoBVal = 0;
int lastTwoB = 9;
 
void loop() {
  Usb.Task();
  
  if (Xbox.XboxReceiverConnected) {

    buttonStateR2 = Xbox.getButtonPress(R2);
    buttonStateL2 = Xbox.getButtonPress(L2);
    buttonStateRStick = Xbox.getAnalogHat(LeftHatX);

        // if R2 was just pressed print 1 to serial
        if (buttonStateR2 == 255 && buttonStateR2 != lastButtonStateR2) {
          Serial.println(1);
        }

        // if R2 was just released print 0
        if (buttonStateR2 == 0 && buttonStateR2 != lastButtonStateR2) {
          Serial.println(0);
        }
        
        // if L2 was just pressed print 2 to serial
        if (buttonStateL2 == 255 && buttonStateL2 != lastButtonStateL2) {
          Serial.println(2);
        }
        
        // if L2 was just released print 0
        if (buttonStateL2 == 0 && buttonStateL2 != lastButtonStateL2) {
          Serial.println(0);
        }
        
        // if left stick was just pushed to the right, print 3
        if (buttonStateRStick > 30000 &&  buttonStateRStick != lastButtonStateRStick) {
          RStickVal = 3;
          if (RStickVal != lastRStick) {
          
             Serial.println(3);
          }
          
        }

        // if left stick was just pushed to the left, print 4
        if (buttonStateRStick < -30000 && buttonStateRStick != lastButtonStateRStick) {
          RStickVal = 4;
          if (RStickVal != lastRStick) {
          
             Serial.println(4);
          }
          
        }
        

        // if left stick was just released print 0 
        if (buttonStateRStick > -10500 && buttonStateRStick < 10500  && buttonStateRStick != lastButtonStateRStick) {
          RStickVal = 0;
          twoBVal = 0;
          if (RStickVal != lastRStick) {
          
             Serial.println(0);
          }
          
        }

        // update button and joystick states
        lastButtonStateR2 = buttonStateR2; 
        lastButtonStateL2 = buttonStateL2;  
        lastButtonStateRStick = buttonStateRStick;
        lastRStick = RStickVal;
        lastTwoB = twoBVal;
       
  }
}
