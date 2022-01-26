/*
 * ESP32 AJAX Demo
 * Updates and Gets data from webpage without page refresh
 * https://circuits4you.com
 */
#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>
#include <ESP32Servo.h>
#include <time.h>
#include <SPI.h>
#include <Wire.h>
#include "index.h"  //Web page header file

#define SERVO_PIN 4
#define SERVO_PIN1 16

Servo servoMotor;
Servo servoMotor1;
WebServer server(80);

//Enter your SSID and PASSWORD
const char* ssid = " Wi-Fi Error 404!";
const char* password = "gotohell";


int car1 = 13;
int car2 = 14;             
int car3 = 33;
int car4  = 27; 
int car5 = 26;
int car6  = 25; 
int gate1 = 15;
int gate2 = 2;
//===============================================================
// This routine is executed when you open its IP in browser
//===============================================================
void handleRoot() {
 String s = MAIN_page; //Read HTML contents
 server.send(200, "text/html", s); //Send web page
}
 
void handleADC1() {
 int a1 = digitalRead(car1);
 String adcValue = String(a1);

 if (a1 == HIGH ) {
   server.send(200, "text/plane","SLOT IS EMPTY");
 }
   else { server.send(200, "text/plane","SLOT IS FULL");
    }
  //Send ADC value only to client ajax request



}


void handleADC2() {
 int a2 = digitalRead(car2);
 String adcValue = String(a2);

 if (a2 == HIGH ) {
   server.send(200, "text/plane","SLOT IS EMPTY");
 }
   else { server.send(200, "text/plane","SLOT IS FULL");
    }
  //Send ADC value only to client ajax request

}


void handleADC3() {
 int a3 = digitalRead(car3);
 String adcValue = String(a3);

 if (a3 == HIGH ) {
   server.send(200, "text/plane","SLOT IS EMPTY");
 }
   else { server.send(200, "text/plane","SLOT IS FULL");
    }
  //Send ADC value only to client ajax request

}

void handleADC4() {
 int a4= digitalRead(car4);
 String adcValue = String(a4);

 if (a4 == HIGH ) {
   server.send(200, "text/plane","SLOT IS EMPTY");
 }
   else { server.send(200, "text/plane","SLOT IS FULL");
    }
  //Send ADC value only to client ajax request

}

void handleADC5() {
 int a5 = digitalRead(car5);
 String adcValue = String(a5);

 if (a5 == HIGH ) {
   server.send(200, "text/plane","SLOT IS EMPTY");
 }
   else { server.send(200, "text/plane","SLOT IS FULL");
    }
  //Send ADC value only to client ajax request

}

void handleADC6() {
 int a6 = digitalRead(car6);
 String adcValue = String(a6);

 if (a6 == HIGH ) {
   server.send(200, "text/plane","SLOT IS EMPTY");
 }
   else { server.send(200, "text/plane","SLOT IS FULL");
    }
  //Send ADC value only to client ajax request

}


void setup(void){
 
  Serial.begin(115200);
  pinMode(car1, OUTPUT);  // sets the digital pin 13 as output
  pinMode(car1, INPUT); 
  
  pinMode(car2, OUTPUT);  // sets the digital pin 13 as output
  pinMode(car2, INPUT); 

  pinMode(car3, OUTPUT);  // sets the digital pin 13 as output
  pinMode(car3, INPUT); 

  pinMode(car4, OUTPUT);  // sets the digital pin 13 as output
  pinMode(car4, INPUT); 

  pinMode(car5, OUTPUT);  // sets the digital pin 13 as output
  pinMode(car5, INPUT); 

  pinMode(car6, OUTPUT);  // sets the digital pin 13 as output
  pinMode(car6, INPUT);

  pinMode(gate1, OUTPUT);  // sets the digital pin 13 as output
  pinMode(gate1, INPUT);
  
  pinMode(gate2, OUTPUT);  // sets the digital pin 13 as output
  pinMode(gate2, INPUT);
  
  servoMotor.attach(SERVO_PIN);
  servoMotor1.attach(SERVO_PIN1);

/*
//ESP32 As access point
  WiFi.mode(WIFI_AP); //Access Point mode
  WiFi.softAP(ssid, password);
*/
//ESP32 connects to your wifi -----------------------------------
  WiFi.mode(WIFI_STA); //Connectto your wifi
  WiFi.begin(ssid, password);

  Serial.println("Connecting to ");
  Serial.print(ssid);

  //Wait for WiFi to connect
  while(WiFi.waitForConnectResult() != WL_CONNECTED){      
      Serial.print(".");
    }
    
  //If connection successful show IP address in serial monitor
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());  //IP address assigned to your ESP
//----------------------------------------------------------------
 
  server.on("/", handleRoot);      //This is display page 
  server.on("/readADC1", handleADC1);//To get update of ADC Value only
  server.on("/readADC2", handleADC2);
  server.on("/readADC3", handleADC3);
  server.on("/readADC4", handleADC4);
  server.on("/readADC5", handleADC5);
  server.on("/readADC6", handleADC6);
  server.begin();                  //Start server
  Serial.println("HTTP server started");
}

//===============================================================
// This routine is executed when you open its IP in browser
//===============================================================
void loop(void){
 
int sensorValue1 = digitalRead(gate1);
int sensorValue2 = digitalRead(gate2);
  
  if(digitalRead(15)) {
servoMotor.write(95);
}
 else {
servoMotor.write(180);
delay(3 * 1000);

}

  if(digitalRead(gate2)) {
servoMotor1.write(95);
}
 else {
servoMotor1.write(180);
delay(3 * 1000);

}


 server.handleClient();
  delay(1);
}
