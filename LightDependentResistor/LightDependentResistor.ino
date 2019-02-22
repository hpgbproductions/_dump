/*
 * Light-Dependent Resistor (LDR)
 * 
 *   A variable resistor controlled by light intensity of the surroundings.
 *   The higher the surrounding light intensity, the lower the resistance (the higher the read voltage by the analog pin).
 *   
 *   Input read by analog pins, requires a Voltage Divider Circuit. Use 10k Ohm resistor as the constant resistor.
 */


int reading;
int brightness;

void setup() {
  pinMode(A0,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
  Serial.println("build 18-04-04\nLDR program commenced.\n\nFrequency:4");
  delay(1000);
}

void loop() {
  reading=analogRead(A0);
  Serial.print("\nReading:");
  Serial.print(reading);
  reading=constrain(reading,350,800);
  analogWrite(9,map(reading,350,800,255,0));
  brightness=map(reading,350,800,255,0);
  Serial.print(" (Brightness:");
  Serial.print(brightness);
  Serial.print(")");
  delay(250);
}
