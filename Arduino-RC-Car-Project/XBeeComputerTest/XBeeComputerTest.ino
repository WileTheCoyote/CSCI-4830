int pwm_a = 3;  //PWM control for motor outputs 1 and 2 
int dir_a = 2;  //direction control for motor outputs 1 and 2 
int myData = 0; //varaible for data read form serial terminal 


void setup()
{
  Serial.begin(9600); // This Baud rate must me consistent with the baud rate set in each XBee

  pinMode(pwm_a, OUTPUT);  //Set control pins to be outputs, PWM
  pinMode(dir_a, OUTPUT);  //Set control pins to be outputs, Direction
  
  analogWrite(pwm_a, 255);  //PWM from 0 to 255, set at 255
  analogWrite(pwm_a, 0);    //PWM from 0 to 255, set at 0; off
}

void loop()
{ 
  int myData = 0;
  
  if(Serial.available() > 0){   // if serial data is available
      
      myData = Serial.read(); // Read 1 byte of serial data
      
      // Turn throttle forward; "f" is read from Serial Terminal
      if(myData == 'f'){
         digitalWrite(dir_a, LOW); 
         analogWrite(pwm_a, 255);
          
      } 
      // Turn throttle backward; "b" is read from Serial Terminal
      if(myData == 'b'){ 
         digitalWrite(dir_a, HIGH); 
         analogWrite(pwm_a, 255);
      } 
      // Turn off; "o" is read from Serial Terminal
      if (myData == 'o' ){
        analogWrite(pwm_a,0);
      }
      
      delay(500);
      

  } else {
   
      delay(500);
  }
}


