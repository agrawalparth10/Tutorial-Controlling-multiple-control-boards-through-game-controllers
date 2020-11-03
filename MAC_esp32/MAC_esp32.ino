// Complete Instructions to Get and Change ESP MAC Address: https://RandomNerdTutorials.com/get-change-esp32-esp8266-mac-address-arduino/
/*
#ifdef ESP32
  
#else
  #include <ESP8266WiFi.h>
#endif
*/
#include <WiFi.h>
void setup(){
  Serial.begin(115200);
  Serial.println();
  Serial.print("ESP Board MAC Address:  ");
  Serial.println(WiFi.macAddress());
}
 
void loop(){
  Serial.print("ESP Board MAC Address:  ");
  Serial.println(WiFi.macAddress());
  delay(3000);
}
