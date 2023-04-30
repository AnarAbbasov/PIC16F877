#include "termometer.h"

void initTermoDatchik()
{
    TRISA=0x01;
  PORTA = 0x01;
  ADFM = 1; //right justified
  //AN7:AN1 digital, AN0 analog, Vref+ = Vdd, Vref- = Vss
  PCFG3 = 1;
  PCFG2 = 1;
  PCFG1 = 1;
  PCFG0 = 0;
  ADCS0 = 1;//Fosc/8
}


void delay()
 {
   int i;
   for(i=0;i<19;i++);
 }


float measure ()
{
    int adc_data_raw = 0;
    float adc_data = .0f;
    ADON = 1;//ADC On
    delay();
    GO = 1;
    while(GO);
    
         __delay_us(10);
        adc_data_raw = (unsigned int)ADRESH << 8;
        adc_data_raw |= ADRESL;
        
    
    adc_data = (float)adc_data_raw * 5.0 / 1024;
    return adc_data;
}
