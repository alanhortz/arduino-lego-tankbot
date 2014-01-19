#define MOTOR   10 // the pin for the MOTOR
int i = 0;
// We’ll use this to count up and down
void setup() {
  pinMode(MOTOR, OUTPUT); // tell Arduino MOTOR is an output
}
void loop(){
  for (i = 0; i < 255; i++) { // loop from 0 to 254 (fade in)
    analogWrite(MOTOR, i);      // set the MOTOR brightness
    delay(10); // Wait 10ms because analogWrite
               // is instantaneous and we would
               // not see any change
  }
  for (i = 255; i > 0; i--) { // loop from 255 to 1 (fade out)
    analogWrite(MOTOR, i); // set the MOTOR brightness
    delay(10);           // Wait 10ms
  }
}
