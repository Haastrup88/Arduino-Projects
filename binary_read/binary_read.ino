//Declaring variables
int r=2;
float pi=3.14;
float area;
int wait=1500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  area=pi*r*r;
  Serial.print("The Area of a circle of radius ");
  Serial.print(r);
  Serial.print(" is ");
  Serial.println(area);
  r=r+1;
  delay(wait);

}
