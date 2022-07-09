int redP=5;
int yellowP=6;
int blueP=7;
String msg=("Which LED do you want to power?");
String readP;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redP,OUTPUT);
  pinMode(yellowP,OUTPUT);
  pinMode(blueP,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available()==0){
    
  }
  readP=Serial.readString();
  if(readP=="red"){
    digitalWrite(redP,HIGH);
    digitalWrite(yellowP,LOW);
    digitalWrite(blueP,LOW);
  }
  

}
