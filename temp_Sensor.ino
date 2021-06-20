#include <DHT.h>
#define dht_pin A0
dht DHT;
int chk;
float hum;
float temp;


void setup() {
  Serial.begin(9600);
  dht.begin();
  

}

void loop() {

hum = dht.readHumidity();
temp = dht.readTemperature();

Serial.print("Humidity: ");
Serial.print(hum);
Serial.print(" %, Temperature: ");
Serial.print(temp);
Serial.print(" Celsius");
delay(2000);
  
 

}
