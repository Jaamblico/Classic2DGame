int xPin = A0;
int yPin = A1;
int buttonPin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int xVal = analogRead(xPin);   // 0-1023
  int yVal = analogRead(yPin);   // 0-1023
  int button = digitalRead(buttonPin); // 0 = presionado, 1 = suelto

  Serial.print(xVal);
  Serial.print(",");
  Serial.print(yVal);
  Serial.print(",");
  Serial.println(button);

  delay(20);
}
