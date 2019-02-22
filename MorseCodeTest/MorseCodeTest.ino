/*
 * Morse Code regulations:
 * The length of a dot is 1 unit
 * The length of a dash is 3 units
 * The length between dots and dashes is 1 unit
 * The length between letters is 3 units
 * The length between words is 7 units
 * 
 * Using 1 unit equals to 0.2 second,
 */

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  morse_S();
  morse_O();
  morse_S();
  delay(1400);
}

void dot(){
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
}

void dash(){
  digitalWrite(13, HIGH);
  delay(600);
  digitalWrite(13, LOW);
  delay(200);
}

void morse_O(){
  dash();
  dash();
  dash();
  delay(600);
}

void morse_S(){
  dot();
  dot();
  dot();
  delay(600);
}
