#include<Wire.h>

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Wire.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
Wire.beginTransmission(5);
Wire.write('H');
Wire.endTransmission();
delay(1000);
Wire.beginTransmission(5);
Wire.write('L');
Wire.endTransmission();
delay(1000);


Wire.beginTransmission(10);
Wire.write('X');
Wire.endTransmission();
delay(3000);
Wire.beginTransmission(10);
Wire.write('Y');
Wire.endTransmission();
delay(3000);
}

