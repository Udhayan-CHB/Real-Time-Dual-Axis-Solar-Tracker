#include <Servo.h>

Servo servoH; 
int servoh = 0; 
int servohLimitHigh = 180; 
int servohLimitLow = 10;   

Servo servoV; // Top Servo 
int servov = 0; 
int servovLimitHigh = 180;
int servovLimitLow = 10;

int ldrtopl = 2; //top left 
int ldrtopr = 1; //top right 

int ldrbotl = 3; // bottom left 
int ldrbotr = 0; // bottom right 

 void setup () 
 {
  servoH.attach(10); //horizontal servo connected to arduino pin 10
  servoH.write(0);
  
  servoV.attach(9); //vertical servo connected to arduino pin 9
  servoV.write(0);
  delay(500); //delay
 }

void loop()
{
  servoh = servoH.read();
  servov = servoV.read();
  
  
  int topl = analogRead(ldrtopl); 
  int topr = analogRead(ldrtopr); 
  int botl = analogRead(ldrbotl); 
  int botr = analogRead(ldrbotr); 
  
  
  int avgtop = (topl + topr) / 2; 
  int avgbot = (botl + botr) / 2; 
  int avgleft = (topl + botl) / 2; 
  int avgright = (topr + botr) / 2; 

  if (avgtop < avgbot)
  {
    servoV.write(servov -1);
    if (servov > servovLimitHigh) 
     { 
      servov = servovLimitHigh;
     }
    delay(8);
  }
  else if (avgbot < avgtop)
  {
    servoV.write(servov +1);
    if (servov < servovLimitLow)
  {
    servov = servovLimitLow;
  }
    delay(8);
  }
  else 
  {
    servoV.write(servov);
  }
  
  if (avgleft > avgright)
  {
    servoH.write(servoh -1);
    if (servoh > servohLimitHigh)
    {
    servoH = servohLimitHigh;
    }
    delay(8);
  }
  else if (avgright > avgleft)
  {
    servoH.write(servoh +1);
    if (servoh < servohLimitLow)
     {
     servoh = servohLimitLow;
     }
    delay(8);
  }
  else 
  {
    servoH.write(servoh); 
  }
  delay(50);
}
