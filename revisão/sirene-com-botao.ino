#define led1 8
#define led2 12
#define botao1 2


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(botao1, INPUT);
}

void loop() {
  //(digitalRead(botao1 == 0))
  // bool estado = digitalRead(botao1) -> forma maior(não tao direta)
  bool botao = digitalRead(botao1);
  if (botao == 1) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(100);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(100);
  }
}