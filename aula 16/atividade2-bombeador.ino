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
  bool H = digitalRead(botao1);
  bool L = digitalRead(botao2);

  if ((H == 0) && (L == 0)) {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
    }
  if ((H == 0) && (L == 1)) {
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
    }
  if ((H == 1) && (L == 0)) {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
    }
  if ((H == 1) && (L == 1)) {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
    }
}