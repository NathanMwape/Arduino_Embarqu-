#include <LiquidCrystal.h>
#include <Servo.h>  

Servo monServo;
Servo tmp;    

const byte TRIGER_PIN = 2;
const byte ECHO_PIN = 3; 
int vert = 4, rouge = 5, song = 6;
int M1;
int M2;

const unsigned long MEASURE_TIMEOUT = 25000UL;
const float SOUND_SPEED = 340.0/1000;

void setup() {
  
  Serial.begin(115200);
  monServo.attach(9); 
  monServo.write(0);
  
  pinMode(rouge, OUTPUT);
  pinMode(vert, OUTPUT); 
  pinMode(song, OUTPUT); 
  
  pinMode(TRIGER_PIN,OUTPUT );
  digitalWrite(TRIGER_PIN,LOW );
  pinMode(ECHO_PIN, INPUT);

}

void loop() {
  digitalWrite (TRIGER_PIN, HIGH);
 
  delayMicroseconds(1000000);
  
  digitalWrite(TRIGER_PIN, LOW);

  long measure = pulseIn(ECHO_PIN, HIGH, MEASURE_TIMEOUT);

  float distance_mm = measure / 2.0 * SOUND_SPEED;
  
    Serial.println("Distance :");
    Serial.println(distance_mm);
     
    
  if (distance_mm <= 60){
    monServo.write(100);
    
    digitalWrite(ECHO_PIN, HIGH);
    digitalWrite(vert,LOW);
    digitalWrite(song, LOW);
    digitalWrite(rouge, HIGH);
   
    
  }else{
    monServo.write(0);
    digitalWrite(ECHO_PIN, LOW);
    digitalWrite(vert,HIGH);
    digitalWrite(song, HIGH);
    digitalWrite(rouge, LOW);
  }
}
