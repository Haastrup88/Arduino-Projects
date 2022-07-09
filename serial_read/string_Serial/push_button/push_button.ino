int redPin=9;
int readPin1=7;
int readPin2=8;
int buzzerPin=10;
int LEDstate=0;
int buttonOld=1;
int buttonNew;
int j;
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(buzzerPin,OUTPUT);
  pinMode(readPin1,INPUT);
  pinMode(readPin2,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonNew=digitalRead(readPin1);
  Serial.println(buttonNew);
  delay(1500);
  if(buttonOld==0 && buttonNew==1){
    if(LEDstate==0){
      for (j=10;j=1;j++){
        //digitalWrite(redPin,HIGH);
      digitalWrite(buzzerPin,HIGH);
      delay(j);
      digitalWrite(buzzerPin,LOW);
      delay(j);
      LEDstate=1;
        
      }
      
    }
    else{
      //digitalWrite(redPin,LOW);
      buttonOld=buttonNew;
      for (j=10;j=1;j++){
      //digitalWrite(redPin,HIGH);
      digitalWrite(buzzerPin,HIGH);
      delay(j);
      digitalWrite(buzzerPin,LOW);
      delay(j);
      LEDstate=0;
    }
  }
   
}
