#include <Servo.h>
Servo Xservo;
int mPin=9;
int buzzPin=8;
int Xpin=A0;
int Ypin=A1;
int Spin=4;
int Sval;
int Xval;
int Yval;
int mAngle;
int dt=500;

void setup() {
  // put your setup code here, to run once:
  pinMode(mPin,OUTPUT);
  pinMode(buzzPin,OUTPUT);
  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);
  pinMode(Spin,INPUT);
  Serial.begin(9600);
  digitalWrite(Spin,HIGH);
  Xservo.attach(mPin);

}

void loop() {
  // put your main code here, to run repeatedly:
  Xval=analogRead(Xpin);
  //Yval=analogRead(Ypin);
  mAngle=(180./1023)*Xval;
  Sval=digitalRead(Spin);
  Serial.print("X value= ");
  Serial.print(Xval);
  Serial.print(",");
  Serial.print(" Motor angle= ");
  Serial.println(mAngle);
  Xservo.write(mAngle);
  delay(dt);
  if(mAngle==180){
    
    Serial.println("Maximum angle");
    digitalWrite(buzzPin,HIGH);
    delayMicroseconds(2);
    digitalWrite(buzzPin,LOW);
    delayMicroseconds(2);
    
  }
  if(mAngle==0){
    Serial.println("Minimum Angle");
    digitalWrite(buzzPin,HIGH);
  }
  else{
    digitalWrite(buzzPin,LOW);
  }
  
  //Serial.print(",");
  //Serial.print("Switch value= ");
  //Serial.println(Sval);
  
 
  
  

}
