/*
 "analogWrite()" function
  
  Syntax:
    analogWrite(pinNumber,[0-255]);
 */

void setup() {
  pinMode(3,OUTPUT);
}

void loop() {
  analogWrite(3,255);
}
