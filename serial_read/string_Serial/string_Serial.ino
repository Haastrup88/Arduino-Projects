int Rpin = 5;
int Ypin = 6;
int Bpin = 7;
String msg1 = "Which LED o you want to turn on?";
String mpin;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Rpin, OUTPUT);
  pinMode(Ypin, OUTPUT);
  pinMode(Bpin, OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg1);
  while (Serial.available() == 0) {
  }
  mpin = Serial.readString();
  if (mpin == "red" || mpin=="Red") {
    Serial.println(mpin);
    digitalWrite(Rpin, HIGH);
    digitalWrite(Ypin, LOW);
    digitalWrite(Bpin, LOW);
  }
  if (mpin == "yellow" || mpin=="Yellow") {
    Serial.println(mpin);
    digitalWrite(Rpin, LOW);
    digitalWrite(Ypin, HIGH);
    digitalWrite(Bpin, LOW);
  }
  if (mpin == "blue" || mpin=="Blue") {
    Serial.println(mpin);
    digitalWrite(Rpin, LOW);
    digitalWrite(Ypin, LOW);
    digitalWrite(Bpin, HIGH);
  }



}
