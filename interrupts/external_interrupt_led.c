/*
Program: LED Toggle using External Interrupt
Microcontroller: 8051

Description:
An LED connected to P1.0 toggles whenever an external
interrupt is triggered through pin INT0 (P3.2).
*/

#include <reg51.h>
sbit LED = P1^0;
void external0_ISR(void) interrupt 0
{
    LED = !LED;   // Toggle LED
}
void main()
{
    IE = 0x81;    // Enable external interrupt 0 and global interrupt
    IT0 = 1;      // Configure INT0 as edge triggered
    while(1)
    {
        // LED control handled by interrupt
    }
}
