void setup() {
  // put your setup code here, to run once:
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(1,HIGH);
  delay(500);
  digitalWrite(1,LOW);
  delay(500);
  
  digitalWrite(2,HIGH);
  delay(300);
  digitalWrite(2,LOW);
  delay(300);

  digitalWrite(3,HIGH);
  delay(200);
  digitalWrite(3,LOW);
  delay(200);

}
