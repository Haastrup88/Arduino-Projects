int pin=10;
int bright=5;
int analog_delay=2000;

void setup() {
  // put your setup code here, to run once:
pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pin,bright);
  delay(analog_delay);
  analogWrite(pin,0);
  delay(analog_delay);

}
