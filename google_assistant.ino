#define BLYNK_PRINT Serial

//Copy the Device Infromation from Blynk
#define BLYNK_TEMPLATE_ID "TMPLlNpabUbU"
#define BLYNK_DEVICE_NAME "Google Assitant"
#define BLYNK_AUTH_TOKEN ""

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>  //Don't forget to install Blynk libary from "Library Manager" in Arduino IDE

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "WiFi name";
char pass[] = "WiFi password";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
