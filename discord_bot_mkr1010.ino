/*
  Discord WebHook Example for Mkr Wifi 1010
*/
// You will need a arduino mkr wifi 1010 board and a 2.4ghz internet connection.  You will also need to use some sort of web editior.
// You have to put in your internet SSID and Password in a module and the link to your discord webhook(Take out the Discord.com and keep the /api to the end.).


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