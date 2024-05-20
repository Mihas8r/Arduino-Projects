#include <Servo.h>

Servo myservo;
const int ldrPin = A0;
int servoPin = 9;

void setup() {
  myservo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(ldrPin);
  Serial.print("Light Level: ");
  Serial.println(lightLevel);

  if (lightLevel < 300) {
    myservo.write(0);  // Close blinds
  } else if (lightLevel > 700) {
    myservo.write(180);  // Open blinds
  } else {
    myservo.write(90);  // Partially open blinds
  }

  delay(1000);
}
