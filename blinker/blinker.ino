/*
 * Diagram
 * Digital 13 to +
 * Resister - to 60
 * Led leg 60 to 61
 * 61 to +
 * 
 * Alternate diagram
 * Digital 13 to 60
 * Led leg 60 to 59
 * Resister 59 to 48
 * 48 to ground
 */

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
