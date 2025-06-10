#define led1 8
#define led2 9

#define botao1 2
#define botao2 3

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
}

void loop() {
  bool A = digitalRead(botao1);
  bool B = digitalRead(botao2);

  if ((A == 0) && (B == 0)) {
      digitalWrite(led1, HIGH);
    }
  if ((A == 0) && (B == 1)) {
      digitalWrite(led1, LOW);
    }
  if ((A == 1) && (B == 0)) {
      digitalWrite(led1, LOW);
    }
  if ((A == 1) && (B == 1)) {
      digitalWrite(led1, LOW);
    }
}