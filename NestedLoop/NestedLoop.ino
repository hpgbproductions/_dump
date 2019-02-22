/*
 * Loops inside of another loop.
 * Nested Loops are useful to vary the inner loop conditions.
 *   for(VARIABLE; CONDITION; INCREMENT){
 *   }
 */

void setup() {
  Serial.begin(9600);
}

void loop() {
  for(int i=1; i<=4; i++){
    for(int j=1; j<=i; j++){
      Serial.print("*");
    }
    Serial.println();
  }
  Serial.println();
}
