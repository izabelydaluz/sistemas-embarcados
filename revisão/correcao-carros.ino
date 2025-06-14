#define pin_botaoA 3
#define pin_botaoB 4
#define pin_botaoC 5
#define pin_led1 8    
#define pin_led2 9    
#define pin_led3 11   
// declaramos os pinos em suas respetivas posiçõe no arduino
int conta = 0;
int tic1 = 0;
int tic2 = 0;
int tic3 = 0;

// declaraos algumas variaveis universair para auxiliar  desenvlvimento da questão.

void setup() {

 Serial.begin(9600);          
  pinMode (pin_led1, OUTPUT);  // definindo como saida.
  pinMode (pin_led2, OUTPUT);  
  pinMode (pin_led3, OUTPUT);  
  pinMode (pin_botaoA, INPUT); // definindo como entrada.
  pinMode (pin_botaoB, INPUT);
  pinMode (pin_botaoC, INPUT);

// declara os pinos sendo, entrada e saida.

}

void loop() {
bool botaoA = digitalRead(pin_botaoA);
bool botaoB = digitalRead(pin_botaoB);
bool botaoC = digitalRead(pin_botaoC);
Serial.println(conta);

// declara as variaveis dos btões como bool, (podendo ser 1 para verdadeiro e 0 para falso) e mostrando no terminal o valor da variavel conta.

if (botaoA == 1 && tic1 == 0) { // se o BotãoA e o tic1 forem respectivamente 1 e 0 a conta adicionara 1 e o valor do tic tambem.
conta ++; // adiciona 1
tic1 += 1; // adiciona 1
}
if (botaoA == 0) { // caso  botaoA não seja mais pressionado o tic ira resetar e vltar para seu estado de origem.
  tic1 = 0; // reseta o valor do tic.
  }
if (botaoB == 1 && tic2 == 0) { // se o BotãoB e o tic2 forem respectivamente 1 e 0 a conta diminuira 1 e o valor do tic aumentara 1.
  conta -- ; // remove 1
  tic2 += 1; // adiciona 1
}
if (botaoB  == 0) { // caso botaoB não seja mais pressionado o tic2 sera resetado.
  tic2 = 0; // reseta o valor do tic.
}
if (conta > 10) {  // se a conta for maior que 10 retornara para o estado de 10, impedindo o avanço.
  conta = 10;
}
if (conta < 0) {  // se a conta for menor que 0 voltara tambem pro estado de origem.
  conta= 0;
}
if (conta == 10) {  // se a conta atinger e ser = a 10 o led1 ira ascender, caso cotrario ira desligar.
  digitalWrite(pin_led1, HIGH); // liga.
} else{
  digitalWrite(pin_led1, LOW); // desliga.
}
if (conta >= 0 && conta < 10) {  // se a contagem fr maior ou = a 0 e menor que 10 o led2 ira ligar, caso contrario ira desigar.
  digitalWrite(pin_led2, HIGH); // liga.
}else {
  digitalWrite(pin_led2, LOW); // desliga.
}
if (conta == 0) {  // se a conta for exatamente = a 0 o led3 ira ligar, caso contrario ira desligar.
  digitalWrite(pin_led3, HIGH); // liga.
} else {
  digitalWrite(pin_led3, LOW);  // desliga.
}
if (botaoC == 1 ) {  // se o botaoC for precionado a contagem reseta e o led3 apaga. (apenas enquanto precionado).
  conta = 0; // transforma a conta em 0.
  digitalWrite(pin_led3, LOW); // desliga.
}
}
