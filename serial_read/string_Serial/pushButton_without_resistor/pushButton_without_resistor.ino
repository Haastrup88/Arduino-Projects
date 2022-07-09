int button=8;
int buttonValue;
int dt=200;
void setup() {
  // put your setup code here, to run once:
  pinMode(button,INPUT);
  digitalWrite(button,HIGH);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonValue=digitalRead(button);
  Serial.print("Button value= ");
  Serial.println(buttonValue);
  delay(dt);
  

}
