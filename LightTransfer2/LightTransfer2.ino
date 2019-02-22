/*
 hOI!
welcom to...
da PROGRAM!!!
 */

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(10, HIGH);     // Stage 1
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);

  delay(1000);

  digitalWrite(13, LOW);     // Stage 2

  delay(1000);

  digitalWrite(12, LOW);     // Stage 3

  delay(1000);

  digitalWrite(11, LOW);     // Stage 4

  delay(1000);

  digitalWrite(11, HIGH);     // Stage 3

  delay(1000);

  digitalWrite(12, HIGH);     // Stage 2

  delay(1000);

  /*
   the blink program resets to Stage 1
   */

}
