#define ON_OFF_LED 12
#define FIRST_LED 8
#define SECOND_LED 7
#define THIRD_LED 4
#define FOURTH_LED 2

double potentiometerValue = 0;
double mappedValue = 0;

void turnAllLedsOn(){
  digitalWrite(FIRST_LED, HIGH);
  digitalWrite(SECOND_LED, HIGH);
  digitalWrite(THIRD_LED, HIGH);
  digitalWrite(FOURTH_LED, HIGH);
}

void turnAllLedsOff(){
  digitalWrite(FIRST_LED, LOW);
  digitalWrite(SECOND_LED, LOW);
  digitalWrite(THIRD_LED, LOW);
  digitalWrite(FOURTH_LED, LOW);
}

void turnOneLedOn(){
  digitalWrite(FIRST_LED, HIGH);
  digitalWrite(SECOND_LED, LOW);
  digitalWrite(THIRD_LED, LOW);
  digitalWrite(FOURTH_LED, LOW);
}

void turnTwoLedsOn(){
  digitalWrite(FIRST_LED, HIGH);
  digitalWrite(SECOND_LED, HIGH);
  digitalWrite(THIRD_LED, LOW);
  digitalWrite(FOURTH_LED, LOW);
}

void turnThreeLedsOn(){
  digitalWrite(FIRST_LED, HIGH);
  digitalWrite(SECOND_LED, HIGH);
  digitalWrite(THIRD_LED, HIGH);
  digitalWrite(FOURTH_LED, LOW);
}

void setup(){
  Serial.begin(115200);
  pinMode(ON_OFF_LED, OUTPUT);
  pinMode(FIRST_LED, OUTPUT);
  pinMode(SECOND_LED, OUTPUT);
  pinMode(THIRD_LED, OUTPUT);
  pinMode(FOURTH_LED, OUTPUT);
  pinMode(A0, INPUT);
}

void loop(){
  potentiometerValue = analogRead(A0);
  mappedValue = map(potentiometerValue, 0, 1023, 0, 100);
  Serial.println(mappedValue);
  if(mappedValue >= 20){
    digitalWrite(ON_OFF_LED, HIGH);
    if(mappedValue >= 90){
      turnAllLedsOn();
    } 
    else if(mappedValue >= 66){
      turnThreeLedsOn();
    }
    else if(mappedValue >= 43)
      turnTwoLedsOn();
  }
  else{
    turnOneLedOn();
  }
else{
  digitalWrite(ON_OFF_LED, LOW);
  turnAllLedsOff();
}
delay(20);
}


