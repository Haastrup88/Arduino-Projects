int BNum;
int j;
int redPin=3;
String msg1=("Enter the number of blinks you want: ");
int bt=500;
void setup() {
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg1);
  while(Serial.available()==0){  
  }
  BNum=Serial.parseInt();
  for(j=1;j<=BNum;j=j+1){
    digitalWrite(redPin,HIGH);
    delay(bt);
    digitalWrite(redPin,LOW);
    delay(bt);
  }
  
  

}
