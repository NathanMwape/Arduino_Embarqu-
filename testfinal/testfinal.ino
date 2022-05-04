#include <Servo.h>  

Servo monServo;     // on crée l'objet monServo
const int led_green = 3, led_red = 4;

void setup()
{
    monServo.attach(9);   // on définit le Pin utilisé par le servomoteur
    pinMode(led_green,OUTPUT);  
    pinMode(led_red,OUTPUT);
}

void loop()
{
    monServo.write(0);      // on dit à l'objet de mettre le servo à 0°
    led_verte();           
    monServo.write(90);    // on dit à l'objet de mettre le servo à 180°
    led_rouge();              
}

void led_verte()  
{
    for (int t=0;t<15;t++){
        digitalWrite(led_green,HIGH);
        delay(100);
        digitalWrite(led_green,LOW);
        delay(100);
    }
}
void led_rouge()  
{
    for (int t=0;t<15;t++){
        digitalWrite(led_red,HIGH);
        delay(100);
        digitalWrite(led_red,LOW);
        delay(100);
    }
}
