int pb1=8;
int pb2=9;
int pb1Val;
int pb2Val;
int speedPin=5;
int dir1=2;
int dir2=4;
int Mspeed=10;
int oldB1=1;
int oldB2=1;
int dt=500;
void setup() {
  // put your setup code here, to run once:
  pinMode(pb1,INPUT);
  pinMode(pb2,INPUT);
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  Serial.begin(9600);
  digitalWrite(pb1,HIGH);
  digitalWrite(pb2,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  pb1Val=digitalRead(pb1);
  pb2Val=digitalRead(pb2);
  Serial.print("pb1Val= ");
  Serial.print(pb1Val);
  Serial.print("pb2Val = ");
  Serial.print(pb2Val);
  Serial.print("Mspeed = ");
  Serial.print(",");
  Serial.println(Mspeed);
  delay(dt);
  
  if(oldB1==0 && pb1Val==1 && oldB2==1){
    Mspeed=Mspeed+5;
    digitalWrite(dir1,HIGH);
    digitalWrite(dir2,LOW);
    analogWrite(speedPin,Mspeed);
    
  }
  else{
    oldB1=pb1Val;
    }
  if(oldB2==0 && pb2Val==1 && oldB1==1){
    Mspeed=Mspeed-5;
    digitalWrite(dir1,LOW);
    digitalWrite(dir2,HIGH);
    analogWrite(speedPin,Mspeed);
    
  }
  else{
    oldB2=pb2Val;
  }
  if(Mspeed>255){
    Serial.println("Maximum speed attained");
    Mspeed=255;
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  analogWrite(speedPin,Mspeed);
  }
  if(Mspeed<0){
    Serial.println("Minimum speed attained");
    Mspeed=0;
  }
  

  
  
}
  
