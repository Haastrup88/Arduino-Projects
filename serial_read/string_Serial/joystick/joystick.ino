int Xpin=A0;
int Ypin=A1;
int Spin=2;
int Xval;
int Yval;
int Sval;
int dt=500;
void setup() {
  // put your setup code here, to run once:
  pinMode(Xpin,INPUT);
  pinMode(Ypin,INPUT);
  pinMode(Spin,INPUT);
  Serial.begin(9600);
  digitalWrite(Spin,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  Xval=analogRead(Xpin);
  Yval=analogRead(Ypin);
  Sval=digitalRead(Spin);
   delay(dt);
  Serial.print("X value= ");
  Serial.print(Xval);
  Serial.print(",");
  Serial.print("Y value= ");
  Serial.print(Yval);
  Serial.print(",");
  Serial.print("Switch value= ");
  Serial.println(Sval);
 
  

}
