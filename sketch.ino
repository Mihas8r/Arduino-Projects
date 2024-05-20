int pirPin= 4;
int buzzerPin= 2;
int ledPin= 7;

void setup() {
 pinMode(pirPin, INPUT);
 pinMode(buzzerPin, OUTPUT);
 pinMode(ledPin, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  int pirState = digitalRead(pirPin);

  if(pirState == HIGH){
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion detected!");
  } else  {
    Serial.println("No Motion detected!");
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}
