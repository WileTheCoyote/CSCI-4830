import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
GPIO.setup(18,GPIO.OUT)
GPIO.setup(4,GPIO.OUT)
GPIO.setup(17,GPIO.OUT)
GPIO.setup(23,GPIO.IN,pull_up_down=GPIO.PUD_UP)

GPIO.output(18,GPIO.LOW)
GPIO.output(17,GPIO.LOW)
GPIO.output(4,GPIO.LOW)

GPIO.output(17,GPIO.HIGH) #Turn Red On

signal = 'off' 
def callback_func(input):
   GPIO.output(17,GPIO.LOW)
   GPIO.output(4,GPIO.LOW)
   GPIO.output(18,GPIO.HIGH) #Turn Green On
  
   global signal
   signal = 'on'
   print signal
GPIO.add_event_detect(23, GPIO.BOTH, callback=callback_func,bouncetime=4000)

while True:
   if GPIO.input(18):  #Green is On  
      I = 0
      while (I<43201):  
         print signal
         print I
         time.sleep(1)
         I = I+1
         if (signal == 'on'):
            print "sig 1a green"
            break
         if (I == 43200):
            GPIO.output(18,GPIO.LOW)  #Turn Green Off
            GPIO.output(17,GPIO.LOW)   #Turn Red Off
            GPIO.output(4,GPIO.HIGH)  #Turn Orange On
         if (signal == 'on'):
            print "sig 1b green"
            break   
   if GPIO.input(4): #Orange is On
      I2 = 0 
      while (I2<43201):
         time.sleep(1)
         I2 = I2+1
         if (signal == 'on'):
            print "sig 2a orange"
            break
         if (I2 == 43200):
            GPIO.output(18,GPIO.LOW)  #Turn Green Off
            GPIO.output(4,GPIO.LOW)   #Turn Orange Off
            GPIO.output(17,GPIO.HIGH) #Turn Red On
         if (signal == 'on'):
            print "sig 2b orange"
            break    
   signal = 'off'  
 

