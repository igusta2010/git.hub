#include <Arduino.h>

#define pinLed 2
#define pinBotao 19

void setup() 
{
 pinMode(pinLed, OUTPUT);
 pinMode(pinBotao, INPUT_PULLUP);
 Serial.begin(9600);

unsigned long contagem=1;
int estadoAnteriorBotao=1;
int estadoAtualBotao =0;
}

void loop() 
{
bool estadoAtualBotao = digitalRead(2);
static bool estadoAnteriorBotao = 1;
static bool ultimaAcao =1;

static unsigned long tempoUltimaAlteracao =0;
unsigned long tempoAtual = millis();
const unsigned long tempoFiltro =50;

static int contagem =0;

//! INICIA O TRATAMENTO DE RUIDO DO BOTAO

if (estadoAtualBotao != estadoAnteriorBotao)
{
 tempoUltimaAlteracao = tempoAtual; //* atualiza o tempo da ultima mudanca
}
  
  //* verifica se o novo estado se manteve estavel por tempo suficiente
if ((tempoAtual - tempoUltimaAlteracao) > tempoFiltro)
{
  //* verifica se ainda nao processamos essa nova ação
if (estadoAtualBotao != ultimaAcao)
{
 ultimaAcao = estadoAtualBotao; //* atualiza o estado ja procesado para evitar acoes reptidas

//* se o botao for pressionado (nivel logico LOW)
 if (!estadoAtualBotao)
 {
  contagem++;
 }
  //* se o botao for solto (nivel logico HIGH), nenhuma acao por enquanto
  else
  {
  }
 }
}
//* atualiza o estado Anterior para a proxima iteracao
estadoAnteriorBotao =  estadoAtualBotao;
//! FINAL DO TRATAMENTO DO BOTAO
}