/*
Program: Square Wave Generation using Timer0
Microcontroller: 8051
Description:
This program generates a square wave on pin P1.0
using Timer0 in Mode 1.
*/
#include <reg51.h>
sbit WAVE = P1^0;
void timer_delay()
{
    TMOD = 0x01;   // Timer0 Mode1 (16-bit)
    TH0 = 0xFC;    // Load timer values
    TL0 = 0x66;
    TR0 = 1;       // Start timer
    while(TF0 == 0);  // Wait for overflow
    TR0 = 0;       // Stop timer
    TF0 = 0;       // Clear overflow flag
}
void main()
{
    while(1)
    {
        WAVE = ~WAVE;   // Toggle output pin
        timer_delay();
    }
}
