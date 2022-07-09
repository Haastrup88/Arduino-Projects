#include <Servo.h>
Servo Blueservo;
float duration=0, distance=0;
const int triggerPin=3,echoPin=2,ult=4,servosig=8,ult5v=4;

void setup()
{
  Blueservo.attach(servosig,500,2500);
  Serial.begin(9600);
  pinMode(triggerPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(ult5v,OUTPUT);
  digitalWrite(ult5v,HIGH);
  }

  void loop(){
    digitalWrite(triggerPin,LOW);
    delayMicroseconds(2);
    digitalWrite(triggerPin,HIGH);
    delayMicroseconds(10);
    duration=pulseIn(echoPin,HIGH);
    distance=(duration*0.0343)/2;
    Serial.println(distance);

    if(distance<35){
      Blueservo.write(90);
      delay(2000);
      }
      else{
        Blueservo.write(0);
        delay(2000);
        }
    
    }
