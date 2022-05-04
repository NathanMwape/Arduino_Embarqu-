int led rouge1=2;
int led vert1=3;
int led orange1=4;
int led rouge2=5;
int led vert2=6;
int led orange2=7;
int C1=15;
int C2=17;
int C3=18;
int C4=19;

void setup() {
  // put your setup code here, to run once:
pinMode(led rouge1,OUTPUT);
pinMode(led vert1,OUTPUT);
pinMode(led orange1,OUTPUT);
pinMode(led rouge2,OUTPUT);
pinMode(led vert2,OUTPUT);
pinMode(led orange2,OUTPUT);

}

void loop() {
  if(C1>C2){
    digitalWrite(led vert1,HIGH);
    digitalWrite(led rouge1,LOW);
    digitalWrite(led orange1,LOW);
    digitalWrite(led rouge2,HIGH);
    digitalWrite(led orange2,LOW);
    digitalWrite(led vert2,LOW);
    delay (5000);
    digitalWrite(led orange1,HIGH);
    digitalWrite(led rouge2,HIGH);
    digitalWrite(led vert1,LOW);
    digitalWrite(led vert2,LOW);
    digitalWrite(led orange2,LOW);
    digitalWrite(led rouge1,LOW);
    delay (2000);
    }else{
      digitalWrite(led vert1,LOW);
      digitalWrite(led rouge1,HIGH);
      digitalWrite(led orange1,LOW);
      digitalWrite(led rouge2,LOW);
      digitalWrite(led orange2,LOW);
      digitalWrite(led vert2,HIGH);
      delay (5000);
      digitalWrite(led orange1,LOW);
      digitalWrite(led rouge2,LOW);
      digitalWrite(led vert1,LOW);
      digitalWrite(led vert2,LOW);
      digitalWrite(led orange2,HIGH);
      digitalWrite(led rouge1,HIGH);
      delay (2000);
      }   
}
