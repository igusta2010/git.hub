/*]
AUTOR: GUSTAVO GONÇALVES
DATA: 26/02/2025	
*/



void setup()
  
{
  Serial.begin(9600);
    
  float altura = 1.74;
  
  float peso= 85;
  
  float resultadoReal = 0;
  
  resultadoReal= pow (altura, 2);
  resultadoReal= peso / resultadoReal;
  Serial.print(" A divisao do peso pela altura é: ");
  Serial.println(resultadoReal); 
       
  if(resultadoReal<18.5){
   Serial.println(" Abaixo do peso ");
 
  }else if(resultadoReal<= 24.9){
   Serial.println(" Peso normal ");
   
  
  }else if(resultadoReal>= 25 && resultadoReal <= 29.9){
   Serial.println(" Sobre peso "); 
    
  }else if(resultadoReal>= 30 && resultadoReal <= 34.9){
   Serial.println(" Obesidade classe 1 ");
    
  }else if(resultadoReal>= 35 && resultadoReal <= 39.9){
   Serial.println(" Obesidade classe 2 ");
    
  }else if(resultadoReal>= 40){
   Serial.println(" Obesidade classe 3 ");
          
}
  
  
}


void loop()
  
{
  
}