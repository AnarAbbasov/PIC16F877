#ifndef MAIN_H
#define MAIN_H
//--------------------------------------------------------------
#define _XTAL_FREQ 4000000
#include <xc.h>
//--------------------------------------------------------------
// CONFIG
#pragma config FOSC = HS // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = ON // Power-up Timer Enable bit (PWRT enabled)
#pragma config BOREN = OFF // Brown-out Reset Enable bit (BOR disabled)
#pragma config LVP = OFF // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF // Flash Program Memory Code Protection bit (Code protection off)
//--------------------------------------------------------------
#include <stdio.h>
//--------------------------------------------------------------
#endif /* MAIN_H */
#include <xc.h>


void delay()
 {
   int i;
   for(i=0;i<19;i++);
 }
void main(void) {
 int adc_data_raw = 0;
  float adc_data = .0f;

  TRISC = 0x00;
  TRISB=0x00;
  TRISA=0x00;
  TRISD=0x00;
  PORTD=0x01;
  int a=0b00000000;;
  while(1)
  {
      //PORTC=0xFF;
       
      //PORTB=0xFF;
      //PORTA=0xFF;
       if (PORTD==0x80)
          PORTD=0x01;
      __delay_ms(500);
    
     
     
      PORTD=PORTD<<1;
  /*  __delay_ms(1000);
    PORTCbits.RC0=0;*/
  }
    return;
}
