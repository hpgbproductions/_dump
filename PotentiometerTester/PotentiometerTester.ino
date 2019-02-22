/*
 * Potentiometers and analogRead()
 * 
 *   A program that uses a potentiometer to modify the strength of a current and reads the value with the analogRead() function.
 *   This value is then used to control the brightness of an LED using the analogWrite() function.
 *   
 *     Syntax:
 *       analogRead(pinNumber)             - read the strength of a current at the pin, returns a value from 0 to 255
 *       analogWrite(pinNumber,value)      - control the strength of a current at a pin, with a value from 0 to 255
 *   
 *   Using map(), the value can be transferred from the reading to the output easily and accurately.
 *   
 *     map(value,fromMin,fromMax,toMin,toMax)      - moves the number from a previous range to a new range, such that the result is the same % up the new range
 *     
 *   Alternatively, constrain() can be used:
 *   
 *     constrain(value,min,max)      - if the value is within the range, no change;
 *                                   - if the value < min, return min;
 *                                   - if the value > max, return max.
 */

int ledcontrol;

void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(9,OUTPUT);
  Serial.println("build 28-03-18\nLED control program commenced.\n");
  delay(1000);
}

void loop() {
  Serial.println(analogRead(A0));
  ledcontrol=map(analogRead(A0),0,1023,0,255);
  analogWrite(9,ledcontrol);
  delay(100);
}
