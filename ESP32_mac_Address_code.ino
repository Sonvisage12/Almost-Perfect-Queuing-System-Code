#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);   // Set WiFi to Station mode
  delay(100);            // Give WiFi hardware time to initialize

  String macAddress = WiFi.macAddress();
  Serial.println("ESP32 MAC Address:");
  Serial.println(macAddress);
}

void loop() {
  // Nothing here
}
