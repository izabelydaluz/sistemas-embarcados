# define led1 8
# define led2 12
# define botao1 9


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(botao1, INPUT);

}

void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay (100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(100);

}
