/*
Program: Square Wave Generation
Microcontroller: 8051
Description:
This program generates a square wave on pin P1.0
by toggling the pin with a delay.
*/

#include <reg51.h>
sbit WAVE = P1^0;
void delay()
{
    unsigned int i,j;
    for(i=0;i<500;i++)
    {
        for(j=0;j<200;j++);
    }
}
void main()
{
    while(1)
    {
        WAVE = 1;
        delay();
        WAVE = 0;
        delay();
    }
}
