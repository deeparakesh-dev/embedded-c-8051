## Square Wave Generation using 8051

### Problem Statement
Write an Embedded C program to generate a square wave on a port pin of the 8051 microcontroller.

### Working
The pin P1.0 is toggled repeatedly with a delay between transitions.  
This produces a square waveform that can be observed using an oscilloscope.

## Square Wave Generation using Timer0

### Problem Statement
Write an Embedded C program to generate a square wave using Timer0 of the 8051 microcontroller.

### Working
Timer0 is configured in Mode 1. The timer counts until overflow occurs.  
Each time the timer overflows, the output pin P1.0 is toggled, generating a square waveform.
