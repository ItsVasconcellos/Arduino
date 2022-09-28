// C++ code
//
int a = 13;
int b = 12;
int c = 11;
int d = 10;
int e = 9;
int f = 8;
int g = 7;
int NumeroAtual = -1;
int leitura;

void setup()
{
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  if(analogRead(A1)){
    leitura = analogRead(A1);
    NumeroAtual = map(leitura,0,1023,0,9);
    show(NumeroAtual);
    delay(20);
}
}

void show(int number){
  switch(number){
    case 0: 
      zero();
    break;
  case 1:
    um();
    break;
  case 2:
    dois();
    break;
  case 3:
    tres();
    break;
  case 4:
    quatro();
    break;
  case 5:
    cinco();
    break;
  case 6:
    seis();
    break;
  case 7:
    sete();
    break;
  case 8:
    oito();
    break;
  case 9:
    nove();
    break;  
  case -1:
    desliga();
}
}  

void liga(){
	digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void zero() {
  liga();
  digitalWrite(g, LOW);
      delay(1000);
}
void um() {
  liga();
  digitalWrite(a, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
      delay(1000);
}
void dois() {
  liga();
  digitalWrite(c, LOW);
  digitalWrite(f, LOW);
      delay(1000);
}
void tres() {
  liga();
  digitalWrite(e,LOW);
  digitalWrite(f, LOW);
      delay(1000);
}
void quatro() {
  liga();
  digitalWrite(a, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
      delay(1000);
}
void cinco() {
  liga();
  digitalWrite(b, LOW);
  digitalWrite(e, LOW);
      delay(1000);
}
void seis() {
  liga();
  digitalWrite(b, LOW);
      delay(1000);
}
void sete() {
  liga();
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
      delay(1000);
}
void oito() {
  liga();
      delay(1000);
}

void nove() {
  liga();
  digitalWrite(e, LOW);
      delay(1000);
}

void desliga(){
	digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
