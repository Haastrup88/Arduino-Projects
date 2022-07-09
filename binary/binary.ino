int redLed=2;
int greenLed=3;
int blueLed=4;
int yellowLed=5;
int ledDelay=700;
int longDelay=4000;
void setup() {
  // put your setup code here, to run once:
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
  pinMode(blueLed,OUTPUT);
  pinMode(yellowLed,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //binary 0
  digitalWrite(redLed,LOW);
  digitalWrite(greenLed,LOW);
  digitalWrite(blueLed,LOW);
  digitalWrite(yellowLed,LOW);
  delay(longDelay);

  //binary 1

  digitalWrite(redLed,LOW);
  digitalWrite(greenLed,LOW);
  digitalWrite(blueLed,LOW);
  digitalWrite(yellowLed,HIGH);
  delay(longDelay);

  //binary 2
  digitalWrite(redLed,LOW);
  digitalWrite(greenLed,LOW);
  digitalWrite(blueLed,HIGH);
  digitalWrite(yellowLed,LOW);
  delay(longDelay);

  //binary 3
  digitalWrite(redLed,LOW);
  digitalWrite(greenLed,LOW);
  digitalWrite(blueLed,HIGH);
  digitalWrite(yellowLed,HIGH);
  delay(longDelay);

  //binary 4
  digitalWrite(redLed,LOW);
  digitalWrite(greenLed,HIGH);
  digitalWrite(blueLed,LOW);
  digitalWrite(yellowLed,LOW);
  delay(longDelay);

  //binary 5

  digitalWrite(redLed,LOW);
  digitalWrite(greenLed,LOW);
  digitalWrite(blueLed,LOW);
  digitalWrite(yellowLed,HIGH);
  delay(longDelay);
  //binary 8

  digitalWrite(redLed,HIGH);
  digitalWrite(greenLed,LOW);
  digitalWrite(blueLed,LOW);
  digitalWrite(yellowLed,LOW);
  delay(longDelay);

  //binary 9
  digitalWrite(redLed,HIGH);
  digitalWrite(greenLed,LOW);
  digitalWrite(blueLed,LOW);
  digitalWrite(yellowLed,HIGH);
  delay(longDelay);

}
