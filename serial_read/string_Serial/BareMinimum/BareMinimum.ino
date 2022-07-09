int readPin=8;
int redPin=9;
int readVal;
int buttonOld=1;
int ledState=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  pinMode(redPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=digitalRead(readPin);
  Serial.println(readVal);
  delay(1000);
  if(buttonOld==0 && readVal==1){
    if(ledState==0){
      digitalWrite(redPin,HIGH);
      ledState=1;
    }
    else{
      digitalWrite(redPin,LOW);
      ledState=0;
    }
  }
  buttonOld=readVal;

}
