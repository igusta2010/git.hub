/*
NOME DO ARQUIVO:QUESTOES DE MATEMATICA
AUTOR: GUSTAVO GONÇALVES
DATA: 24/02/2025
*/	
int numero=600;
int resultado=0;

void setup()
{
//****EXERCICO NUMERO 1******
  
Serial.begin(9600);

resultado = map(numero,0, 1023, 0, 100);
  Serial.println(resultado);
  resultado= constrain(resultado, 20, 80);
  Serial.println(resultado);
  
  
//***EXERCICIO NUMERO 2*****
  
 int contador=0;
  
 contador++;
 Serial.println(contador);
  
  contador++;
 Serial.println(contador);
  
  contador++;
 Serial.println(contador);
  
  contador++;
 Serial.println(contador);
  
  contador++;
 Serial.println(contador);
  
 contador++;
 Serial.println(contador); 
  
 contador++;
 Serial.println(contador);
  
 contador++;
 Serial.println(contador);
  
 contador++;
 Serial.println(contador);
  
 contador++;
 Serial.println(contador);
  
  
  
  

   contador--;
 Serial.println(contador);
  
  contador--;
 Serial.println(contador);
  
  contador--;
 Serial.println(contador);
  
  contador--;
 Serial.println(contador);
  
  contador--;
 Serial.println(contador);
  
 contador--;
 Serial.println(contador); 
  
 contador--;
 Serial.println(contador);
  
 contador--;
 Serial.println(contador);
  
 contador--;
 Serial.println(contador);
  
 contador--;
 Serial.println(contador);
  
//*****EXERCICIO NUMERO 3****
  
 float valor1 = 10;
 float valor2 = 7;
  
 float resultadoMedia = 0;
  
  resultadoMedia = (valor1 + valor2) / 2.0;
  
  Serial.println(resultadoMedia);
  
  
}


void loop ()
{
  
}