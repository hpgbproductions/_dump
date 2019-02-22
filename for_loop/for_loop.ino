/*
 * "for" Loops
 *   Used for running a block of code for a fixed or calculated number of times.
 *   Follows the syntax of:
 *     for(int i=a;i<=b;i++) {
 *       <code>
 *     }
 *   Where
 *     i is a variable,
 *     a can be any integer; is the value the counter starts from,,
 *     b can be any integer.
 *   The first part in the round brackets defines a variable and a start value for the counter,
 *   The second part defines a condition to end the for loop,
 *   The third part is a calculation to change the variable used for counting (need not be increment).
 */

int printednumber=0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for(int i=1;i<=10;i++) {
    Serial.println(i);
    delay(100);
  }
}
