int ledpin=26;  //the pwm pin the led is attached(inc dac converter)
int brightness=0; // how bright the led is
int fadeamount=5;//how many points ot fade the led by
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(ledpin, brightness);
brightness = brightness + fadeamount;
if (brightness <= 0  || brightness >= 255) {
fadeamount = -fadeamount;
}
delay(30);
}
