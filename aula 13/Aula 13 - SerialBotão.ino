#define pin_led1 8  // definindo o pino 8 como led 1
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11 
#define pin_botao 2

void setup() {
  pinMode(pin_led1, OUTPUT); // estou dizendo que o led 1 iré ligar
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botao, INPUT);  //entrada de dados
}

void loop() {
  bool estado = digitalRead(pin_botao);
  if (estado == 1) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led3, HIGH);
    digitalWrite(pin_led2, LOW);
    digitalWrite(pin_led4, LOW);
  }
  else {
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led3, LOW);
    digitalWrite(pin_led2, HIGH);
    digitalWrite(pin_led4, HIGH);
  }
}
