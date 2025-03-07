#define pinLedVermelho 13
#define pinLedAmarelo 11
#define pinLedVerde 10

void setup()
{
  Serial.begin(9600);
pinMode(pinLedVermelho, OUTPUT);
pinMode(pinLedAmarelo, OUTPUT);
pinMode(pinLedVerde, OUTPUT);
  
int qualidade = 0;

  
switch (qualidade)
 
{
  
case 0:
digital.Write(pinLedVermelho, HIGH);
 Serial.println("pessimo");
break;
  
case 1:
digital.Write(pinLedVermelho, HIGH);
  Serial.println("ruim");
break;
  
case 2:
digital.Write(pinLedAmarelo, HIGH);
 Serial.println("normal");
break;
  
case 3:
digital.Write(pinLedVerde, HIGH);
  Serial.println("bom");
break;
  
case 4:
digital.Write(pinLedVerde, HIGH);
  Serial.println("perfeito");
break;
}
 
}

void loop()
{

}