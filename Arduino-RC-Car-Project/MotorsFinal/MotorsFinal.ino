int pwm_a = 3;  //PWM control for motor outputs 1 and 2 
int pwm_b = 9;  //PWM control for motor outputs 3 and 4
int dir_a = 2;  //direction control for motor outputs 1 and 2 
int dir_b = 8;  //direction control for motor outputs 3 and 4 
int myData = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(pwm_a, OUTPUT);  //Set control pins to be outputs
  pinMode(dir_a, OUTPUT);
  pinMode(pwm_b, OUTPUT);  //Set control pins to be outputs
  pinMode(dir_b, OUTPUT);
  analogWrite(pwm_a, 255);  
  analogWrite(pwm_a, 0);
  analogWrite(pwm_b, 255);  
  analogWrite(pwm_b, 0);
}
int lastData = 9;
void loop()
{ 

  if(Serial.available() > 0) {
      // read serial byte and convert from ascii
      myData = Serial.read() - '0';

      Serial.println("read data");
      Serial.println(myData);
      
      // if 0 was read turn motors off
      if(myData == 0 && myData != lastData){ 
         analogWrite(pwm_a, 0);
         analogWrite(pwm_b, 0);
      }

      // if 1 was just read from serial go forward
      if(myData == 1 && myData != lastData ){
         digitalWrite(dir_a, LOW); 
         analogWrite(pwm_a, 255);
       
      }
      // if 2 was just read from serial go backward
      if(myData == 2 && myData != lastData ){
         digitalWrite(dir_a, HIGH); 
         analogWrite(pwm_a, 255);
       
      }
      // if 3 was just read from serial go Right
      if(myData == 3 && myData != lastData ){
         digitalWrite(dir_b, LOW); 
         analogWrite(pwm_b, 250);
       
      }
      // if 4 was just read from serial go Left
      if(myData == 4 && myData != lastData ){
         digitalWrite(dir_b, HIGH); 
         analogWrite(pwm_b, 250);
       
      }

      //update which byte was most recently read
      lastData = myData;
      delay(100);
    
    
}
}
