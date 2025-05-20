#define pin_led1 8  // definindo o pino 8 como led 1
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11 

void setup() {
  Serial.begin(9600); // velocidade de comunicação
  pinMode(pin_led1, OUTPUT); // estou dizendo que o led 1 iré ligar
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
}

void loop() {
  if (Serial. available() == 1) {
     char i = Serial.read();
     Serial.println(i); 

  if ( i = "1");
   digitalWrite(pin_led1, HIGH);

   }
  }
 

  /*Serial.println("liga led"); // irá fazer o comando ate o proximo print
  digitalWrite(pin_led1, HIGH); // estou programando o led 1 para ligar= HIGH
  digitalWrite(pin_led2, HIGH);
  digitalWrite(pin_led3, HIGH);
  digitalWrite(pin_led4, HIGH);
  delay(1000); // estou obrigando o programa a parar
  Serial.println("desliga led") ;
  digitalWrite(pin_led1, LOW); // estou programando o led 1 para desligar= LOW
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
  delay(1000); 
}
*/