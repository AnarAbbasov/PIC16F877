#include "termometer.h"

void initialiseUART()
{

  TRISC6 = 1; //USART (TX);
  TRISC7 = 1; //USART (RX);
  TRISC7 = 1; //USART (RX);
  SPBRG=12; //19200
  TX9  = 0;
  TXEN = 1;
  SYNC = 0;
  BRGH = 1;
  TX9D = 0;
  SPEN = 1;
}


void sendUART(char  ch)
{
  
     while(!TRMT) ;
     TXREG=(char)ch;
   
}