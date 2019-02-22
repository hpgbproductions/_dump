/*
 * A wild button appeared!
 */

int signal1;                     //creating a variable here results in a global variable, all functions can use it

void setup(){
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);      //INPUT_PULLUP helps to ignore 'noise' caused by open electrical circuits, but 1 = OFF and 0 = ON
}

void loop(){
  signal1 = digitalRead(2);      //receive the signal from PIN 2
  if(signal1 == 1){                //if button is not pressed
    Serial.println("press me");
  }
  else{                            //if button is pressed
    Serial.println("STOP PRESSING ME!");
  }
  delay(100);
}

