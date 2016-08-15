void setup()
{
  //Serial.begin(9600);

  pinMode(4,OUTPUT);
  digitalWrite(4,LOW); 
  
  
  
}

int delay1 = 500;
int delay2 = 500;
int present = 0;

void loop()
{
    digitalWrite(4, HIGH);
    delay(delay2);
    digitalWrite(4, LOW);
    delay(delay1);
    
}
