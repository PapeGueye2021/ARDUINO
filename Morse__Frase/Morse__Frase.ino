
/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
const int pin = 8;   // pin for speaker

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
   //E
  punt();
  espaiL();
  espaiP();
   //Espai entre lletres
  espaiL();
  //M   
  ratlla();
  ratlla();
   //Espai entre lletres
  espaiL();
  espaiP();
    //D   
  ratlla();
  punt();
  punt();
   //Espai entre lletres
  espaiL();
  //I   
  punt();
  punt();
   //Espai entre lletres
  espaiL();
  //C
  ratlla();   
  punt();
  ratlla();
  punt();
   //Espai entre lletres
  espaiL();
  espaiP();
  //P   ** Exemple NOM **
  punt();
  ratlla();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //A
  punt();
  ratlla();
  //Espai entre lletres
  espaiL();
  //P
  punt();
  ratlla();
  ratlla();
  punt();
  espaiL();
  //E
  punt();
  espaiL();
  espaiP();
  
}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}
