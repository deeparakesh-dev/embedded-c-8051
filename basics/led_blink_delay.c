/*
Program: LED Blinking using Software Delay
Microcontroller: 8051
Description:This program toggles an LED connected to pin P1.0 of the 8051 microcontroller using a simple delay loop.
*/
#include <reg51.h>
// Define LED connected to Port 1 pin 0
sbit LED = P1^0;

// Delay function
void delay(){
    unsigned int i, j;
    for(i = 0; i < 500; i++)
    {
        for(j = 0; j < 300; j++);
    }
}

// Main function
void main(){
    while(1)
    {
        LED = 1;    // Turns LED ON
        delay();
        LED = 0;    // Turns LED OFF
        delay();
    }
}
