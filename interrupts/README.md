## External Interrupt LED Control

### Problem Statement
Write an Embedded C program to toggle an LED using External Interrupt 0 of the 8051 microcontroller.

### Working
The LED is connected to pin P1.0.  
When an external interrupt is triggered through pin INT0 (P3.2), the interrupt service routine executes and toggles the LED state.
