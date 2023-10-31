//041,027,042,036
#include<Ultrasonic.h>
Ultrasonic ultrasonic(2);
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long rangeininches;
  long rangeincentimeters;
  Serial.println("DISTANCE TO IMPACT");
  rangeininches=ultrasonic.MeasureInInches ();
    Serial.println(rangeininches);
    Serial.println("INCH");
  delay(100);
   rangeincentimeters=ultrasonic.MeasureInCentimeters ();
   Serial.println(rangeincentimeters);
  Serial.println("CENTIMETER");
delay(100 );

}
