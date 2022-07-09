int RGB=8;
int bt=500;
float V1;
String msg=("Switch: on or off");
String command;

void setup() {
  // put your setup code here, to run once:
  pinMode(RGB,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0){
  }
  command=Serial.readString();
  if(command=="on" || command=="On"){
    digitalWrite(RGB,HIGH);
  }
  if(command=="off" || command=="Off"){
    digitalWrite(RGB,LOW);
  }
  
}
