#include "DHT.h"  
#define DHT11PIN 14

DHT dht(DHT11PIN, DHT11);

void setup()
{
  Serial.begin(115200);
  dht.begin();  //DHT物件啟動
  pinMode(12,OUTPUT);
}

void loop()
{
  float h = dht.readHumidity();  
  float t = dht.readTemperature(); 
  
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print("ºC ");
  Serial.print("Humidity: ");
  Serial.println(h);
  if(temp>=30)digitalWrite(12,HIGH);
  else digitalWrite(12,LOW);
  
}
