  /*    sensores de impacto

          
                 sif 0001
                 ******

 0010 sief  **            **  sidf            1000

 0011 siet  **            ** sidt             1100
                  *******
                   sit
                   0100

  */

int sensores_impacto(char sensorl)
{
int estadosensor;
  // Verifica se o estado do botao foi alterado
  estadosensor = digitalRead(sensorl);
  //Se o botao foi apertado
  if (estadosensor == LOW) 
  {
   // Liga o LED    
    return 0;  
  } 
  else 
  {
    // Apaga o LED
    return 1; 
  }
}
