/*
Program: Switch Controlled LED
Microcontroller: 8051
Description:
A switch is connected to pin P2.0 and an LED is connected to pin P1.0
When the switch is pressed, the LED turns ON.
When the switch is released, the LED turns OFF.
*/

#include <reg51.h>
sbit LED = P1^0;     // LED connected to Port 1 Pin 0
sbit SWITCH = P2^0;  // Switch connected to Port 2 Pin 0
void main()
{
    while(1)
    {
        if(SWITCH == 0)   // Switch pressed 
        {
            LED = 1;      // Turn LED ON
        }
        else
        {
            LED = 0;      // Turn LED OFF
        }
    }
}
