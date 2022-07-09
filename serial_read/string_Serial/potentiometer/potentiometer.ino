int potPin=A5;
int readVal;
float V1;
int dt=500;
void setup() {
  // put your setup code here, to run once:
  pinMode(potPin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(potPin);
  V1=(5./1023.)*readVal;
  Serial.print("Potentiometer value= ");
  Serial.print(readVal);
  Serial.print(",");
  Serial.print("Voltage value=");
  Serial.println(V1);
  delay(dt);

}
