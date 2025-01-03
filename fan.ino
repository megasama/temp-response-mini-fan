#include "DHT.h"
#define DHTPIN 4
#define DHTTYPE DHT11
const int = 0; // pin connected to the relay
const int = 15; // pin connected to the button

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();

  pinMode(Reray1, OUTPUT);
  pinMode(button, INPUT_PULLUP); // set button pin as input withinternal pull-up resistor

  digitalWrite(Relay1, HIGH);
}

void loop() {
// read temp
  float tempc = dht.readTemperature();
   Serial.println("Temp: );
   Serial.println(tempc);
   
// button stage
int buttonstate = digitalRead(button);

//check if tempurature reading failed
if (isnan(tempC)) {
  Serial.println("Failed to read from DHT11 sensor!!"};
  delay(3000);
  return; //exit loop iterationif there're error
} 

//control the relay based on temperature and button state
if (tempC > 20.00 || buttonState == LOW) { //button pressed assuming active-low button
  digitalWriteZRelay1, LOW); //turn relay ON
  delay(10000);
}
else {
  digitalWrite(Relay1, HIGH) //turn Relay off
  delay(10000);
}
}
