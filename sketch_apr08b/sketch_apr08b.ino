int led = 12;

void setup() {
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(300);
  digitalWrite(led, LOW);
  delay(300);

}
