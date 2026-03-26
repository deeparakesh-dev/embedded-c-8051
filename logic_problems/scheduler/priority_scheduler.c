/*
Program: Priority Based Task Scheduler
Microcontroller: 8051

Three tasks are simulated:
1. Sensor Task (Highest priority)
2. Communication Task
3. LED Status Task (Lowest priority)
*/

#include <reg51.h>
bit sensor_ready = 1;
bit comm_ready = 1;
bit led_ready = 1;


/* -------- TASK FUNCTIONS -------- */

void sensor_task(){
    // Highest priority task
    P1 = 0x01;   // indicate sensor task
}

void communication_task(){
    // Medium priority task
    P1 = 0x02;   // indicate communication task
}

void led_task(){
    // Lowest priority task
    P1 = 0x04;   // indicate LED task
}

void scheduler(){
    if(sensor_ready){
        sensor_task();
    }
    else if(comm_ready){
        communication_task();
    }
    else if(led_ready){
        led_task();
    }
}


void main(){
    while(1){
        scheduler();
    }
}
