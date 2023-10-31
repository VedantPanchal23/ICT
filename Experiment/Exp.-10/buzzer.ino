int SensorPin=2,LedPin=15,SensorValue=0,suppl=23;

void setup() {
  // put your setup code here, to run once:
pinMode(LedPin, OUTPUT);
pinMode(suppl,OUTPUT);
Serial.begin(115200);
digitalWrite(suppl,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
SensorValue=analogRead(SensorPin);
Serial.println(SensorValue);
if(SensorValue<1500){
  digitalWrite(LedPin, HIGH);
}
else{
  digitalWrite(LedPin, LOW);
}
delay(1000);
}
