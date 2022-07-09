int speedPin=5;
int dir1=2;
int dir2=4;
float Mspeed;
int Xpin=A0; 
int Ypin=A1;
int Spin=9;
int Xval;
int Yval;
int Sval;
int dt=500;
void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  pinMode(Spin,INPUT);
  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Sval=digitalRead(Spin);
  Yval=analogRead(Ypin);
  Serial.println(Yval);
  delay(dt);
  if(Yval>507){
    Mspeed=(255./516.)*Yval-(255./516)*507;
    digitalWrite(dir1,HIGH);
    digitalWrite(dir2,LOW);
    analogWrite(speedPin,Mspeed);
  }
  if(Yval<507){
    Mspeed=(-255./507.)*Yval+(255./507.)*507.;
    digitalWrite(dir1,LOW);
    digitalWrite(dir1,HIGH);
    analogWrite(speedPin,Mspeed);
  }
  if(Yval==507){
    analogWrite(speedPin,0);
  }



}
