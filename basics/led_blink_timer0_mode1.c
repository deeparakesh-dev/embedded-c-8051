/*
Program: LED Blinking using Timer0 Mode 1
Microcontroller: 8051
Description: This program toggles an LED connected to P1.0 using Timer0 in Mode 1 to generate delay.
*/
#include <reg51.h>
sbit LED = P1^0; //Sets P1^0=1

// Timer delay function
void timer_delay(){
    TMOD = 0x01;      // Timer0 Mode1 (16-bit)
    TH0 = 0xFC;       // Load high byte
    TL0 = 0x66;       // Load low byte
    TR0 = 1;          // Start Timer0
    while(TF0 == 0);  // Wait for overflow
    TR0 = 0;          // Stop timer
    TF0 = 0;          // Clear overflow flag
}

void main(){
    while(1)
    {
        LED = 1;      // LED ON
        timer_delay();
        LED = 0;      // LED OFF
        timer_delay();
    }
}
