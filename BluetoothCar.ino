//Code by Nikolaos Babetas
#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); 
// creates a "virtual" serial port/UART
// connect BT module TX to D10
// connect BT module RX to D11
// connect BT Vcc to 5V, GND to GND

//we define the pins that set the motors' direction
int motor1a = 2; 
int motor1b = 3;
int motor2a = 4;
int motor2b = 5;

void setup()  
{
    
  // we define the motor pins as outputs
  pinMode(motor1a, OUTPUT);
  pinMode(motor1b, OUTPUT);
  pinMode(motor2a, OUTPUT);
  pinMode(motor2b, OUTPUT);
  

  
  BT.begin(9600);// set the data rate for the SoftwareSerial port

 
}

char a; // stores incoming character from other device

void loop() 
{
  if (BT.available())
  // if text arrived in from BT serial
  {
    a=(BT.read());//it will be read and
    
    
    if (a=='1')//if a=1 (the signal from the 'up' button from the bluetooth app) it will move forward
    {
     digitalWrite(motor1a, LOW);
     digitalWrite(motor1b, HIGH);
     digitalWrite(motor2a, LOW);
     digitalWrite(motor2b, HIGH);
     
    
    }

    if (a=='2')//it will move backwards
    {
     digitalWrite(motor1a, HIGH);
     digitalWrite(motor1b, LOW);
     digitalWrite(motor2a, HIGH);
     digitalWrite(motor2b, LOW);
     
     
     
     
    }


    
    if (a=='3')// it will move left
    {
     digitalWrite(motor1a, HIGH);
     digitalWrite(motor1b, LOW);
     digitalWrite(motor2a, LOW);
     digitalWrite(motor2b, HIGH);
     
   
    }

    
    if (a=='4')//it will move right
    {
     digitalWrite(motor1a, LOW);
     digitalWrite(motor1b, HIGH);
     digitalWrite(motor2a, HIGH);
     digitalWrite(motor2b, LOW);
     
     
    }
    
    
    if (a=='0')//it will not move
    {
     digitalWrite(motor1a, LOW);
     digitalWrite(motor1b, LOW);
     digitalWrite(motor2a, LOW);
     digitalWrite(motor2b, LOW);


     //You might need to change the numbers 1,2,3,4 if you connect your motors differently to the driver!
     //Have fun!
     
     
    }
    
    
    
  }
}
