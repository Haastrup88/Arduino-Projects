String msg=("Enter the number of blink you want:");
int redP=2;
int bt=500;
int Bnum;
int j;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redP,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available()==0){
    
  }
  Bnum=Serial.parseInt();
  for(j=1;j<=Bnum;j=j+1){
    digitalWrite(redP,HIGH);
    delay(bt);
    digitalWrite(redP,LOW);
    delay(bt);
  }

}
