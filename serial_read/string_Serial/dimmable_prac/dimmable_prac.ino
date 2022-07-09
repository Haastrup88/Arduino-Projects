int redPin=10;
int button1=9;
int button2=8;
int buzzPin=11;
int buttonRead1;
int buttonRead2;
int dt=500;
int brightness=0;
int buzzerDelay=2;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(buzzPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRead1=digitalRead(button1);
  buttonRead2=digitalRead(button2);
  Serial.print("button 1= ");
  Serial.print(buttonRead1);
  Serial.print(",");
  Serial.print("button 2= ");
  Serial.println(buttonRead2);
  delay(500);
  Serial.println(brightness);
  if(buttonRead1==0){
    brightness=brightness+5;
  }
  if(buttonRead2==0){
    brightness=brightness-5;
  }
  if(brightness>255){
    brightness=255;
    Serial.println("buzzer is HIGH");
    digitalWrite(buzzPin,HIGH);
    delay(buzzerDelay);
    digitalWrite(buzzPin,LOW);
    delay(buzzerDelay);
    
  }
  if(brightness<0){
    brightness=0;
    Serial.println("buzzer is LOW");
    digitalWrite(buzzPin,HIGH);
    delay(buzzerDelay);
    digitalWrite(buzzPin,LOW);
    delay(buzzerDelay);
  }
  analogWrite(redPin,brightness);
  
  
  

}
