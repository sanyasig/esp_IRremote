/*

 Udp NTP Client

 Get the time from a Network Time Protocol (NTP) time server
 Demonstrates use of UDP sendPacket and ReceivePacket
 For more on NTP time servers and the messages needed to communicate with them,
 see http://en.wikipedia.org/wiki/Network_Time_Protocol

 created 4 Sep 2010
 by Michael Margolis
 modified 9 Apr 2012
 by Tom Igoe
 updated for the ESP8266 12 Apr 2015
 by Ivan Grokhotkov

 This code is in the public domain.

 */

#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include "Arduino.h"


// char ssid[] = "CV-Guest";  //  your network SSID (name)
// char pass[] = "Chalcr0ft";
// int localPort = 2390;        // your network password

// void setup()
// {
//   Serial.begin(115200);
//   Serial.println();
//   Serial.println();
//
//   // We start by connecting to a WiFi network
//   Serial.print("Connecting to ");
//   Serial.println(ssid);
//   WiFi.begin(ssid, pass);
//
//   while (WiFi.status() != WL_CONNECTED) {
//     delay(500);
//     Serial.print(".");
//   }
//   Serial.println("");
//
//   Serial.println("WiFi connected");
//   Serial.println("IP address: ");
//   Serial.println(WiFi.localIP());
//
// }
//
// void loop()
// {
//
// }
