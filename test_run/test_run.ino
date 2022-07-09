int bluePin=A5;
int delayB=500;
void setup() {
  // put your setup code here, to run once:
  pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.begin(9600);
  digitalWrite(bluePin,HIGH);
  Serial.print("The digital value is ");
  Serial.println(bluePin);
  delay(delayB);
  digitalWrite(bluePin,LOW);
  Serial.print("The digital value is ");
  Serial.println(bluePin);
  delay(delayB);
  

}
