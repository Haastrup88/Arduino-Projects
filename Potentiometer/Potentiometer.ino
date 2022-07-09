int voltpin=A1;
int redPin=6;
int greenPin=7;
int yellowPin=8;
int readvolt;
float V1;
int delayT=500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(V1,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(yellowPin,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  readvolt=analogRead(voltpin);
  V1=(5./1023.)*readvolt;
  Serial.println(V1);
  if(V1<3){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(yellowPin,LOW);
  }
  if(V1>3 && V1<4){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(yellowPin,HIGH);
  }
  if(V1>4){
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(yellowPin,LOW);
  }
  delay(delayT);

}
