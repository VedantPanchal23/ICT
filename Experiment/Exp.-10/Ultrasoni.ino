#include "Ultrasonic.h"

Ultrasonic ultrasonic(2);
void setup() {
  Serial.begin(9600);

}

void loop() {
  long RangeInInches;
  long RangeInCentimeters;

  Serial.println("The distance to obstacles in front is:");
  RangeInInches= ultrasonic.MeasureInInches();
  Serial.print(RangeInInches);
  Serial.println("inch");
  delay(2000);

  RangeInCentimeters=ultrasonic.MeasureInCentimeters();
  Serial.println(RangeInCentimeters);
  Serial.println("cm");
  delay(2000);

}
