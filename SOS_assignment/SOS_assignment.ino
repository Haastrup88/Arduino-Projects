//This code is to perform a blink operation for 3 LEDs
int redLED=1;
int blueLED=2;
int greenLED=3;
int redDIT=700;
int blueDIT=400;
int greenDIT=50;
int longW=2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
  pinMode(greenLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //RED LED
  digitalWrite(redLED,HIGH);
  delay(redDIT);
  digitalWrite(redLED,LOW);
  delay(redDIT);
  digitalWrite(redLED,HIGH);
  delay(redDIT);
  digitalWrite(redLED,LOW);
  delay(redDIT);
  digitalWrite(redLED,HIGH);
  delay(redDIT);
  digitalWrite(redLED,LOW);
  delay(longW);

  //BLUE LED
  digitalWrite(blueLED,HIGH);
  delay(blueDIT);
  digitalWrite(blueLED,LOW);
  delay(blueDIT);
  digitalWrite(blueLED,HIGH);
  delay(blueDIT);
  digitalWrite(blueLED,LOW);
  delay(blueDIT);
  digitalWrite(blueLED,HIGH);
  delay(blueDIT);
  digitalWrite(blueLED,LOW);
  delay(longW);

  //GREEN LED
  digitalWrite(greenLED,HIGH);
  delay(greenDIT);
  digitalWrite(greenLED,LOW);
  delay(greenDIT);
  digitalWrite(greenLED,HIGH);
  delay(greenDIT);
  digitalWrite(greenLED,LOW);
  delay(greenDIT);
  digitalWrite(greenLED,HIGH);
  delay(greenDIT);
  digitalWrite(greenLED,LOW);
  delay(longW);
  

}
