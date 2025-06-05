#define led1 8  // definindo o pino 8 como led 1
#define led2 9
#define led3 10
#define led4 11 

void setup() {
  Serial.begin(9600); // velocidade de comunicação
  pinMode(led1, OUTPUT); // estou dizendo que o led 1 irá ligar
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
 
  Serial.println("liga led"); // irá fazer o comando ate o proximo print
  digitalWrite(led1, HIGH); // estou programando o led 1 para ligar= HIGH
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(1000); // estou obrigando o programa a parar
  Serial.println("desliga led") ;
  digitalWrite(led1, LOW); // estou programando o led 1 para desligar = LOW
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(1000); 
}
