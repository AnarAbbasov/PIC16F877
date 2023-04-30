#include "termometer.h"
#include "string.h"
#include <stdio.h>
//------------------------------------------------
char str01[7]={'\13'};


void main(void) {

  initialiseUART();
 /* sendUART((char*)'A');
   __delay_ms(1005);
  sendUART((char*)'n');
  */

initTermoDatchik();   
int index_of_string=0;
sprintf(str01,"%.2f V",measure ());
__delay_ms(5000);
while(index_of_string<=7)
{
sendUART((char)str01[index_of_string]);
index_of_string++;
}

  TXEN = 0;
 /* while(1)
  {
    for(i=0;i<256;i++)
    {
        sendUART(i);
      __delay_ms(105);
    }
  }  */ 
  
    return ;
}
