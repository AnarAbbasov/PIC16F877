/*
 * File:   newmain.c
 * Author: anar_
 *
 * Created on February 18, 2023, 9:39 PM
 */
// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator: High-speed crystal/resonator on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN)
#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = ON      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RA5/MCLR/VPP Pin Function Select bit (RA5/MCLR/VPP pin function is MCLR)
#pragma config BOREN = ON       // Brown-out Detect Enable bit (BOD enabled)
#pragma config LVP = ON         // Low-Voltage Programming Enable bit (RB4/PGM pin has PGM function, low-voltage programming enabled)
#pragma config CPD = OFF        // Data EE Memory Code Protection bit (Data memory code protection off)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.




#define _XTAL_FREQ 4000000

#include <xc.h>

void main(void) {
 TRISB = 0x00;

  PORTB = 0x00;

  TRISA &= ~0x03;

  PORTA &= ~0x03;
  
    PORTBbits.RB0 = 1;
       PORTBbits.RB3 = 1;
        PORTBbits.RB5 = 1;
//  while(1)

//{
 
 // }
    return;
}
