#include <Servo.h> 

Servo myservo; 
int vcc = 2; //attach pin 2 to vcc
int trig = 3; // attach pin 3 to Trig
int echo = 4; //attach pin 4 to Echo
int gnd = 5; //attach pin 5 to GND
long duration, cm;
int pos = 1;
int st=0;

void setup() 
{ 
  Serial.begin(9600);
  myservo.attach(9); 
 } 
 
 
void loop() 
{ 

 if (pos == 1)
 	st = 0;
    
 if (pos == 180)
 	st = 1;
    
 if (st==0)
 	pos = pos+1;
    
 if (st==1)
    	pos = pos-1;
         
  myservo.write(pos);
  
  data();  
 
  Serial.print(pos); Serial.print( " ");  Serial.println(cm);  
  delay(30);
}



void data()
{
  pinMode (vcc,OUTPUT);
  pinMode (gnd,OUTPUT);
  
  digitalWrite(vcc, HIGH);
  
  
  pinMode(trig, OUTPUT);
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(5);
  digitalWrite(trig, LOW);
  
  
  pinMode(echo,INPUT);
  duration = pulseIn(echo, HIGH);
  
  // convert the time into a distance
  cm = microsecondsToCentimeters(duration);  
  if (cm>300)
  {
    cm = 300;
  }
}


long microsecondsToCentimeters(long microseconds)
{
  return microseconds / 29 / 2;
}


