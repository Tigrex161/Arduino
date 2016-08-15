int vcc = 2; //attach pin 2 to vcc
int trig = 3; // attach pin 3 to Trig
int echo = 4; //attach pin 4 to Echo
int gnd = 5; //attach pin 5 to GND
long duration, cm;
void setup() {
  // initialize serial communication:
  Serial.begin(9600);
}

void loop()
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

  // convert the time into a distance in centimeters:

  cm = duration/(29*2);   // The speed of sound is 340 m/s or 29 microseconds per centimeter.
                          // The ping travels out and back, so to find the distance of the
                          // object we take half of the distance travelled.
    
 
  
  Serial.println(cm);  // in cm
  
  
  delay(50);
}


