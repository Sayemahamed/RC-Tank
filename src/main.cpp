#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}
void loop() {
  for(int i =0;i<2;i++){
    if(Serial.available()>0){
      Serial.println(Serial.read());
    }
  }
  delay(100);
}