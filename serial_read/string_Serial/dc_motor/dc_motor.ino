int speedPin=5;
int dir1=2;
int dir2=4;
int Mspeed=200;
int tiltPin=8;
int tiltVal;
int redPin=9;
int greenPin=10;
int dt=500;


void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  pinMode(tiltPin,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  Serial.begin(9600);
  digitalWrite(tiltPin,HIGH);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  tiltVal=digitalRead(tiltPin);
  Serial.println(tiltVal);
  delay(dt);
  if(tiltVal==0){
    digitalWrite(greenPin,HIGH);
    digitalWrite(redPin,LOW);
    digitalWrite(dir1,LOW);
    digitalWrite(dir2,HIGH);
    analogWrite(speedPin,255);
    delay(100);
    analogWrite(speedPin,Mspeed);
    delay(5000);
  }
  if(tiltVal==1){
    digitalWrite(greenPin,LOW);
    digitalWrite(redPin,HIGH);
    analogWrite(speedPin,0);
    
  }

}
