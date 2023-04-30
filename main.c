/*
 * File:   main.c
 * Author: anar_
 *
 * Created on February 18, 2023, 7:15 PM
 */

// CONFIG

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

// PIC16F877A Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = ON        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)


// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#include <pic16f877a.h>
//#include <pwm.h>
//#define _XTAL_FREQ 20000000
void main(void) {
   TRISD = 0x00;
   TRISB=0x00;
   TRISC=0x00;
   TRISA=0x00;
          
   // while(1)
    //{
        PORTD=0x00;
        PORTA=0x00;
        PORTB=0x00;
        PORTC=0x00;
    //}
  
    return;
}
