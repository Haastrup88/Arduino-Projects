int lightPin=A0;
int redpin=8;
int greenpin=9;
int lightVal;
int dt=250;
void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin,INPUT);
  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal=analogRead(lightPin);
  Serial.println(lightVal);
  delay(dt);
  if(lightVal>=350){
    digitalWrite(redpin,HIGH);
    digitalWrite(greenpin,LOW);
  }
  if(lightVal<=350){
    digitalWrite(redpin,LOW);
    digitalWrite(greenpin,HIGH);
  }
  

}
