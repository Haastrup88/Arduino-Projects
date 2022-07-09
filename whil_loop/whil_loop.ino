int j;
int delayTime=500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  j=1;
  while(j<=10){
    Serial.println("It is less");
    delay(delayTime);
    j=j+1;
  }
  Serial.println("It is higher");

}
