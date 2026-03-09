/*
Program: LED Pattern Generation (Running LEDs)
Microcontroller: 8051
Concepts Used: GPIO, Port Output, Delay Loop

Description:
This program generates a running LED pattern on Port 1.
LEDs connected to Port 1 will turn ON one by one,
creating a running light effect.
*/

#include <reg51.h>
void delay()
{
    unsigned int i,j;
    for(i=0;i<500;i++)
    {
        for(j=0;j<300;j++);
    }
}
void main()
{
    while(1)
    {
        P1 = 0x01;   // LED1 ON
        delay();
        P1 = 0x02;   // LED2 ON
        delay();
        P1 = 0x04;   // LED3 ON
        delay();
        P1 = 0x08;   // LED4 ON
        delay();
        P1 = 0x10;   // LED5 ON
        delay();
        P1 = 0x20;   // LED6 ON
        delay();
        P1 = 0x40;   // LED7 ON
        delay();
        P1 = 0x80;   // LED8 ON
        delay();
    }
}
