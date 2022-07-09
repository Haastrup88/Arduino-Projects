int rPin=9;
int yPin=6;
int rDelay=500;
int yDelay=500;
int pDelay=1000;
int rblink=5;
int yblink=3;
int j;//counter
void setup() {
  // put your setup code here, to run once:
  pinMode(rPin,OUTPUT);
  pinMode(yPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(j=1;j<=rblink;j=j+1){
  digitalWrite(rPin,HIGH);
  delay(rDelay);
  digitalWrite(rPin,LOW);
  Serial.println(j);
  delay(rDelay); 
  }
  for(j=1;j<=yblink;j=j+1){
  digitalWrite(yPin,HIGH);
  delay(yDelay);
  digitalWrite(yPin,LOW);
  Serial.println(j);
  delay(yDelay);
  }

}
