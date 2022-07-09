//This code is about SOS 
//Variables definition
int pinN=5;
float pi=3.14;
int dit=250;
int dah=700;
int longW=2000;
void setup() {
  // put your setup code here, to run once:
  pinMode(pinN,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //S
  digitalWrite(pinN,HIGH);
  delay(dit);
  digitalWrite(pinN,LOW);
  delay(dit);
  digitalWrite(pinN,HIGH);
  delay(dit);
  digitalWrite(pinN,LOW);
  delay(dit);
  digitalWrite(pinN,HIGH);
  delay(dit);
  digitalWrite(pinN,LOW);
  delay(dit);

  //O
  digitalWrite(pinN,HIGH);
  delay(dah);
  digitalWrite(pinN,LOW);
  delay(dah);
  digitalWrite(pinN,HIGH);
  delay(dah);
  digitalWrite(pinN,LOW);
  delay(dah);
  digitalWrite(pinN,HIGH);
  delay(dah);
  digitalWrite(pinN,LOW);
  delay(dah);

  //S

  digitalWrite(pinN,HIGH);
  delay(dit);
  digitalWrite(pinN,LOW);
  delay(dit);
  digitalWrite(pinN,HIGH);
  delay(dit);
  digitalWrite(pinN,LOW);
  delay(dit);
  digitalWrite(pinN,HIGH);
  delay(dit);
  digitalWrite(pinN,LOW);
  delay(dit);

  delay(longW);

}
