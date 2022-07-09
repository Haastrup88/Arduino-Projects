int tiltPin=8;
int redPin=9;
int greenPin=10;
int tiltVal;
int dt=500;
void setup() {
  // put your setup code here, to run once:
  pinMode(tiltPin,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  digitalWrite(tiltPin,HIGH);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  tiltVal=digitalRead(tiltPin);
  Serial.print("Tilt switch is: ");
  Serial.println(tiltVal);
  delay(dt);
  if(tiltVal==1){
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    
  }
  if(tiltVal==0){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
  }

}
