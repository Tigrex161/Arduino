void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print ("LDR1: ");
  Serial.print(analogRead(A1));
}
