

int array[3][7] =     {   { 0,0,0,1,1,1,0 },   // L
                          { 1,0,1,1,1,1,0 },   // G
                          { 1,0,0,1,1,1,1 }};  // E
                                       
void printLGE(int);

void setup() 
{ 
  // set pin modes
  pinMode(2, OUTPUT);   //a
  pinMode(3, OUTPUT);   //b
  pinMode(4, OUTPUT);   //c
  pinMode(5, OUTPUT);   //d
  pinMode(6, OUTPUT);   //e
  pinMode(7, OUTPUT);   //f
  pinMode(8, OUTPUT);   //g
  
 
}

void loop() 
{

  for (int i = 0; i<3;++i)
  {
      printLGE(i);
      delay(150);
  }
}



void printLGE(int a)
{
 int pin = 2;
for (int j =0; j < 7;++j)  
  {
    digitalWrite(pin,!array[a][j]);
    delay(150);
   
    ++pin;
  }




}
  

