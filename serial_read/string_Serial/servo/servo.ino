#include <Servo.h>
int ServoPin=8;
float ServoPos;
Servo myservo;
int lightPin=A5;
int lightRead;
int dt=500;
void setup(){
  pinMode(lightPin,INPUT);
  pinMode(ServoPin,OUTPUT);
  myservo.attach(ServoPin);
  Serial.begin(9600);
    
}
void loop(){
  lightRead=analogRead(lightPin);
  ServoPos=(-180./790.)*lightRead+(180.*800./790.);
  if(ServoPos<0){
    ServoPos=0;
    Serial.println("LOW!!!! Servo value is below limit");
  }
  if(ServoPos>180){
    ServoPos=180;
    Serial.println("HIGH!!!!! Servo value is above limit");
  }
  myservo.write(ServoPos);
  Serial.print("Photoresistor value= ");
  Serial.print(lightRead);
  Serial.print(",");
  Serial.print("Servo value= ");
  Serial.println(ServoPos);
  delay(dt);
  
 
  
   
}
