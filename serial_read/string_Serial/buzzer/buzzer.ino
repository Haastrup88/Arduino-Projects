int buzzpin=7;
int buzztime=1000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzpin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzpin,HIGH);
  delayMicroseconds(buzztime);
  digitalWrite(buzzpin,LOW);
  delayMicroseconds(buzztime);
 

}
