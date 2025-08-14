int botao = 5;
int led = 8;

bool ledLigado = false;  
bool botaoAnterior = HIGH; 
void setup() {
  pinMode(botao, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  bool botaoAtual = digitalRead(botao);

  if (botaoAnterior == HIGH && botaoAtual == LOW) {
    ledLigado = !ledLigado; 
    digitalWrite(led, ledLigado ? HIGH : LOW);
    delay(90); 
  }

  botaoAnterior = botaoAtual;
}

 
