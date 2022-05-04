int led_verte = 12;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led_verte, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(led_verte, LOW);
  delay(2500);             
  digitalWrite(led_verte, HIGH);
  digitalWrite(LED_BUILTIN, LOW); 
  delay(2500);                         // wait for a second
}
