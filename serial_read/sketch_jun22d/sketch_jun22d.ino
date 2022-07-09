float r;
float pi=3.142;
String msg1=("Enter the value of the radius:");
String msg2=("The area of the circle is ");
float Rnum;
float area;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg1);
  while(Serial.available()==0){
    
  }
  Rnum=Serial.parseInt();
  area=2*pi*Rnum*Rnum;
  Serial.print(msg2);
  Serial.println(area);
  
  
  

}
