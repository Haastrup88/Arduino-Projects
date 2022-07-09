byte myByte=0x0;
int dt=500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Decimal =");
  Serial.print(myByte,DEC);
  Serial.print(",");
  Serial.print("Binary =");
  Serial.print(myByte,BIN);
  Serial.print(",");
  Serial.print("Hexadecimal =");
  Serial.println(myByte,HEX);
  myByte=myByte+1;
  delay(dt);

}
