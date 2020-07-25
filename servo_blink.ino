#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

#define BLYNK_PRINT Serial

Servo servo;
char auth[] = "Kxh_-xoqWoXyxzd1Aou2xQ9CoiyIqC7z";
char ssid[] = "D5/16";
char pswd[] = "ab1107fok";


void setup() {
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pswd);
  servo.attach(5);

}

void loop(){
  Blynk.run();
}

BLYNK_WRITE(V1) {
  servo.write(param.asInt() ) ;

}
