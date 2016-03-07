/*
Arduino Servo Test sketch
*/
#include <AFMotor.h>

  AF_DCMotor motor4(4); // Set Up M4 Motor Pins
  AF_DCMotor motor1(1); // Set up M1 Motor Pins


void setup()
{
  motor4.setSpeed(255); // Set Speed of Direction Motor - Voltage
  motor1.setSpeed(255); // Set Speed of Throttle Motor
   
}

void loop()
{
  // Steering Check 
  motor4.run(FORWARD); // Turn Right
  delay(2000);         // wait 2 sec
  motor4.run(RELEASE); // Straight
  delay(2000);         // wait 2 sec
  motor4.run(BACKWARD);// Turn Left
  delay(2000);         // wait 2 sec
  motor4.run(RELEASE); // Straight
  delay(4000);         // wait 4 sec

  // Throttle check 
  motor1.run(FORWARD);
  delay(3000);
  motor1.run(RELEASE);
  delay(1000);
  motor1.run(BACKWARD);
  delay(3000);
  motor1.run(RELEASE);
  delay(6000);

  // Throttle and Steering check
  motor1.run(FORWARD);
  delay(1000);
  motor4.run(FORWARD);
  delay(1000);
  motor4.run(RELEASE);
  delay(1000);
  motor4.run(BACKWARD);
  delay(1000);
  motor1.run(RELEASE);
  delay(1000);
  motor1.run(BACKWARD);
  delay(1000);
  motor4.run(FORWARD);
  delay(1000);
  motor4.run(RELEASE);
  delay(1000);
  motor4.run(BACKWARD);
  delay(1000);
  motor1.run(RELEASE);  // Throttle Off
  motor4.run(RELEASE);  // Turn Wheels Straight
 
  delay(3000);
  

  
  
  
}
