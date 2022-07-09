int redPin=9;
int buzzerPin=10;
int readPin1=7;
int readPin2=8;
int LEDstate=0;
int buttonOld1=0;
int buttonOld2=0;
int buttonNew1;
int buttonNew2;
int j;
int dt=500;
int buzzDelay=1;
int brightness=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin1,INPUT);
  pinMode(readPin2,INPUT);
  pinMode(buzzerPin,OUTPUT);
  pinMode(redPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonNew1=digitalRead(readPin1);
  buttonNew2=digitalRead(readPin2);
  Serial.print("Button 1= ");
  Serial.print(buttonNew1);
  Serial.print(",");
  Serial.print("Button 2= ");
  Serial.println(buttonNew2); 
  delay(dt);
  if(buttonNew1==0){
    brightness=brightness+10;
  }
  if(buttonNew2==0){
    brightness=brightness-10;
  }
  Serial.println(brightness);
  if(brightness>255){
    brightness=255;
    digitalWrite(buzzerPin,HIGH);
    delay(buzzDelay);
    digitalWrite(buzzerPin,LOW);
    Serial.println("Buzz High");
  }
  if(brightness<0){
    brightness=0;
    digitalWrite(buzzerPin,HIGH);
    delay(buzzDelay);
    digitalWrite(buzzerPin,LOW);
    Serial.println("Buzz Low");
  }
  analogWrite(redPin,brightness);
  

}
