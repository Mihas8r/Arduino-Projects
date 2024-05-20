const int redLED = 8;
const int yellowLED = 9;
const int greenLED = 7;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  digitalWrite(greenLED, HIGH); // Green LED on
  delay(5000);                  // Wait for 5 seconds
  digitalWrite(greenLED, LOW);  // Green LED off

  digitalWrite(yellowLED, HIGH); // Yellow LED on
  delay(2000);                   // Wait for 2 seconds
  digitalWrite(yellowLED, LOW);  // Yellow LED off

  digitalWrite(redLED, HIGH);   // Red LED on
  delay(5000);                  // Wait for 5 seconds
  digitalWrite(redLED, LOW);    // Red LED off
}
