#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);
const int AnIn = 15; // moisutre sensor
const int OutBuzzer = 12; // or diode
int moisture = 0;

void setup() {
  Serial.begin(115200);
  pinMode(OutBuzzer, OUTPUT);
  digitalWrite(OutBuzzer, LOW);
  
}


void loop() {
  // put your main code here, to run repeatedly:
  moisture = analogRead(AnIn);
  Serial.println(moisture);
  if(moisture > 2000){
    digitalWrite(OutBuzzer, HIGH);
  }
  else{
    digitalWrite(OutBuzzer, LOW);
  }
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}