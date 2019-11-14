/*
  Discord WebHook Example for Mkr Wifi 1010
*/

#include "discord.h"
#include <ArduinoIoTCloud.h>

void setup() {
  Serial.begin(9600);
  connect_to_wifi();
  discord_send("Yar Har, let's sail the Sea Of Thieves!");
  discord_send("https://www.youtube.com/watch?v=27mB8verLK8");
  delay(3600000);
  discord_send("Fire The Cannons!");
}

void loop() {
  Serial.begin(9600);
  connect_to_wifi();
   delay(3600000);
  discord_send("Yar Har, let's sail the Sea Of Thieves!");
  discord_send("https://www.youtube.com/watch?v=27mB8verLK8");
  delay(3600000);
  discord_send("Fire The Cannons!");
}
