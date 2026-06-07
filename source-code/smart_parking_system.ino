// Smart Parking System
// Codtech Internship
// Intern: Harisri C M

const int trigPin = 5;
const int echoPin = 18;
const int ledPin = 2;

long duration;
float distance;

void setup() {
  Serial.begin(115200);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.println("Smart Parking System Started");
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 50) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Parking Occupied");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Parking Available");
  }

  Serial.println("-------------------");
  delay(2000);
}
