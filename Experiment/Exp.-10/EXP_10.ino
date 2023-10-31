#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
#if defined(ARDUINO_ARCH_AVR)
#define SERIAL Serial
#elif defined(ARDUINO_ARCH_SAMD) || defined(ARDUINO_ARCH_SAMD)
#define SERIAL SerialUSB
#else
#define SERIAL Serial
#endif
void setup() {
  SERIAL.begin(115200);
  SERIAL.println("DHTxx test!");
  dht.begin();
  Wire.begin();

}

void loop() {
  float temp_hum_val[2] = {0};
  if(!dht.readHumidity(temp_hum_val)){
    Serial.println("Humidity: ");
    Serial.println(temp_hum_val[0]);
    Serial.println("%\t");



    
    Serial.println("Temprature: ");
    Serial.println(temp_hum_val[1]);
    Serial.println("*C");


  }
  else{
    Serial.println("Falied to get the tempture and humidity value");
  }
delay(1500);
}
