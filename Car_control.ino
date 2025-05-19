#include <Servo.h>
Servo myServo;

const int servoPin = 9;
char bluetoothData;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
  myServo.write(0); // Initial position
}

void loop() {
  if (Serial.available()) {
    bluetoothData = Serial.read();

    switch (bluetoothData) {
      case 'F':
        // Move forward
        break;
      case 'D':
        // Move backward
        break;
      case 'L':
        // Turn left
        break;
      case 'R':
        // Turn right
        break;
      case 'S':  // Servo to 90 degrees
        myServo.write(90);
        break;
      case 'B':  // Servo back to 0 degrees
        myServo.write(0);
        break;
    }
  }
}
