/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte led0 = 5;          // donar nom al pin 5 de l’Arduino
const byte led1 = 6;          // donar nom al pin 6 de l’Arduino
const byte led2 = 7;          // donar nom al pin 7 de l’Arduino
const byte led3 = 8;          // donar nom al pin 8 de l’Arduino
const byte led4 = 9;          // donar nom al pin 9 de l’Arduino
const byte led5 = 10;         // donar nom al pin 10 de l’Arduino
const byte led6 = 11;         // donar nom al pin 11 de l’Arduino
const byte led7 = 12;         // donar nom al pin 12 de l’Arduino
const byte pot0 = A0;         // donar nom al pin A0 de l’Arduino

unsigned long velocitat = 20;          // velocitat de l'acció en ms
int valPot0;                 // guardar valor del potenciometre

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
  Serial.begin(9600);
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);   // llegir valor del potenciòmetre
  Serial.println(valPot0);
  velocitat = 10 + valPot0;     // actualitzar velocitat amb el valor del potenciòmetre
                  // anira de 10 a 1034ms  
  analogWrite(led0, HIGH);    // posar a 5V el pin 5
  analogWrite(led1, LOW);     // posar a 0V el pin 6
  analogWrite(led2, LOW);    // posar a 5V el pin 7
  analogWrite(led3, LOW);     // posar a 0V el pin 8
  analogWrite(led4, LOW);    // posar a 5V el pin 9
  analogWrite(led5, LOW);     // posar a 0V el pin 10
  analogWrite(led6, LOW);    // posar a 5V el pin 11
  analogWrite(led7, HIGH);     // posar a 0V el pin 12
  
  delay(velocitat);            // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, HIGH);     // posar a 0V el pin 5
  analogWrite(led1, HIGH);    // posar a 5V el pin 6
  analogWrite(led2, LOW);     // posar a 0V el pin 7
  analogWrite(led3, LOW);    // posar a 5V el pin 8
  analogWrite(led4, LOW);     // posar a 0V el pin 9
  analogWrite(led5, LOW);    // posar a 5V el pin 10
  analogWrite(led6, HIGH);     // posar a 0V el pin 11
  analogWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(velocitat);            // es queden leds velocitat ms en aquest estat

  analogWrite(led0, LOW);     // posar a 0V el pin 5
  analogWrite(led1, HIGH);    // posar a 5V el pin 6
  analogWrite(led2, HIGH);     // posar a 0V el pin 7
  analogWrite(led3, LOW);    // posar a 5V el pin 8
  analogWrite(led4, LOW);     // posar a 0V el pin 9
  analogWrite(led5, HIGH);    // posar a 5V el pin 10
  analogWrite(led6, HIGH);     // posar a 0V el pin 11
  analogWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(velocitat);            // es queden leds velocitat ms en aquest estat

  analogWrite(led0, LOW);     // posar a 0V el pin 5
  analogWrite(led1, LOW);    // posar a 5V el pin 6
  analogWrite(led2, HIGH);     // posar a 0V el pin 7
  analogWrite(led3, HIGH);    // posar a 5V el pin 8
  analogWrite(led4, HIGH);     // posar a 0V el pin 9
  analogWrite(led5, HIGH);    // posar a 5V el pin 10
  analogWrite(led6, LOW);     // posar a 0V el pin 11
  analogWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(velocitat);            // es queden leds velocitat ms en aquest estat

  analogWrite(led0, LOW);     // posar a 0V el pin 5
  analogWrite(led1, LOW);    // posar a 5V el pin 6
  analogWrite(led2, LOW);     // posar a 0V el pin 7
  analogWrite(led3, HIGH);    // posar a 5V el pin 8
  analogWrite(led4, HIGH);     // posar a 0V el pin 9
  analogWrite(led5, LOW);    // posar a 5V el pin 10
  analogWrite(led6, LOW);     // posar a 0V el pin 11
  analogWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(velocitat);            // es queden leds velocitat ms en aquest estat

  analogWrite(led0, LOW);     // posar a 0V el pin 5
  analogWrite(led1, LOW);    // posar a 5V el pin 6
  analogWrite(led2, LOW);     // posar a 0V el pin 7
  analogWrite(led3, HIGH);    // posar a 5V el pin 8
  analogWrite(led4, HIGH);     // posar a 0V el pin 9
  analogWrite(led5, LOW);    // posar a 5V el pin 10
  analogWrite(led6, LOW);     // posar a 0V el pin 11
  analogWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(velocitat);            // es queden leds velocitat ms en aquest estat

  analogWrite(led0, LOW);     // posar a 0V el pin 5
  analogWrite(led1, LOW);    // posar a 5V el pin 6
  analogWrite(led2, HIGH);     // posar a 0V el pin 7
  analogWrite(led3, HIGH);    // posar a 5V el pin 8
  analogWrite(led4, HIGH);     // posar a 0V el pin 9
  analogWrite(led5, HIGH);    // posar a 5V el pin 10
  analogWrite(led6, LOW);     // posar a 0V el pin 11
  analogWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(velocitat);            // es queden leds velocitat ms en aquest estat

  analogWrite(led0, LOW);     // posar a 0V el pin 5
  analogWrite(led1, HIGH);    // posar a 5V el pin 6
  analogWrite(led2, HIGH);     // posar a 0V el pin 7
  analogWrite(led3, LOW);    // posar a 5V el pin 8
  analogWrite(led4, LOW);     // posar a 0V el pin 9
  analogWrite(led5, HIGH);    // posar a 5V el pin 10
  analogWrite(led6, HIGH);     // posar a 0V el pin 11
  analogWrite(led7, LOW);    // posar a 5V el pin 12
  
  delay(velocitat);            // es queden leds velocitat ms en aquest estat

  analogWrite(led0, HIGH);     // posar a 0V el pin 5
  analogWrite(led1, HIGH);    // posar a 5V el pin 6
  analogWrite(led2, LOW);     // posar a 0V el pin 7
  analogWrite(led3, LOW);    // posar a 5V el pin 8
  analogWrite(led4, LOW);     // posar a 0V el pin 9
  analogWrite(led5, LOW);    // posar a 5V el pin 10
  analogWrite(led6, HIGH);     // posar a 0V el pin 11
  analogWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(velocitat);            // es queden leds velocitat ms en aquest estat

  analogWrite(led0, HIGH);    // posar a 5V el pin 5
  analogWrite(led1, LOW);     // posar a 0V el pin 6
  analogWrite(led2, LOW);    // posar a 5V el pin 7
  analogWrite(led3, LOW);     // posar a 0V el pin 8
  analogWrite(led4, LOW);    // posar a 5V el pin 9
  analogWrite(led5, LOW);     // posar a 0V el pin 10
  analogWrite(led6, LOW);    // posar a 5V el pin 11
  analogWrite(led7, HIGH);     // posar a 0V el pin 12
  
  delay(velocitat);            // es queden leds velocitat ms en aquest estat

  analogWrite(led0, LOW);    // posar a 5V el pin 5
  analogWrite(led1, LOW);     // posar a 0V el pin 6
  analogWrite(led2, LOW);    // posar a 5V el pin 7
  analogWrite(led3, LOW);     // posar a 0V el pin 8
  analogWrite(led4, LOW);    // posar a 5V el pin 9
  analogWrite(led5, LOW);     // posar a 0V el pin 10
  analogWrite(led6, LOW);    // posar a 5V el pin 11
  analogWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(velocitat);            // es queden leds velocitat ms en aquest estat

  analogWrite(led0, LOW);    // posar a 5V el pin 5
  analogWrite(led1, LOW);     // posar a 0V el pin 6
  analogWrite(led2, LOW);    // posar a 5V el pin 7
  analogWrite(led3, LOW);     // posar a 0V el pin 8
  analogWrite(led4, LOW);    // posar a 5V el pin 9
  analogWrite(led5, LOW);     // posar a 0V el pin 10
  analogWrite(led6, LOW);    // posar a 5V el pin 11
  analogWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(velocitat);            // es queden leds velocitat ms en aquest estat
  
}
//********** Funcions *************************************************************
