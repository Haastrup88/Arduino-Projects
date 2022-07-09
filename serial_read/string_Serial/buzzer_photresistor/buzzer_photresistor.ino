int lightpin=A5;
int lightVal;
int dt=5;
int buzzpin=8;
int buzzer_above=10;
float Bdelay;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightpin,INPUT);
  pinMode(buzzpin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal=analogRead(lightpin);
  Bdelay=((9./550.)*lightVal-(9.*200./550.)+1.);
  digitalWrite(buzzpin,HIGH);
  Serial.println(Bdelay);
  delayMicroseconds(Bdelay);
  digitalWrite(buzzpin,LOW);
  delayMicroseconds(Bdelay);
    
  }
 
  
  
