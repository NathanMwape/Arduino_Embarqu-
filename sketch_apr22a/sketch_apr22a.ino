int ledrouge1 = 2;
int ledvert1 = 3;
int ledorange1 = 4;

int ledrouge2 = 8;
int ledvert2 = 9;
int ledorange2 = 10;

void setup() {
  // put your setup code here, to run once:
    pinMode(ledrouge1,OUTPUT);
  pinMode(ledvert1,OUTPUT);
  pinMode(ledorange1,OUTPUT);
  pinMode(ledrouge2,OUTPUT);
  pinMode(ledvert2,OUTPUT);
  pinMode(ledorange2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledorange2,HIGH);
        digitalWrite(ledrouge1,HIGH);
        digitalWrite(ledvert1,HIGH);
        digitalWrite(ledvert2,HIGH);
        digitalWrite(ledorange1,HIGH);
        digitalWrite(ledrouge2,HIGH);

}
