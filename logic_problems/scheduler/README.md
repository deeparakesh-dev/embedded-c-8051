## Priority scheduler Logic
# Priority Based Task Scheduler (8051)

## Overview

This project is a simple implementation of a **priority-based task scheduler** using the 8051 microcontroller. The idea is to simulate how an embedded system handles multiple tasks with different levels of importance.

Instead of executing tasks randomly or sequentially, the system always checks which task has the highest priority and runs that first.

---

## Why this project?

In real-world embedded systems, not all tasks are equal.
Some operations (like safety checks) are more critical than others (like updating a display).

This project tries to capture that behavior in a simple way:

* High-priority tasks get immediate attention
* Lower-priority tasks only run if higher ones are not active

This is similar to how basic scheduling works in operating systems, but implemented at a microcontroller level.

---

## Tasks Implemented

The system simulates three tasks:

* **Sensor Task (High Priority)**
  Represents critical operations like reading safety sensors

* **Communication Task (Medium Priority)**
  Represents sending or receiving data

* **LED Task (Low Priority)**
  Represents non-critical status updates

---

## How it Works

The scheduler continuously runs inside an infinite loop.
At every cycle, it checks which task is ready:

1. If the sensor task is ready → it runs immediately
2. Else if the communication task is ready → it runs
3. Else → the LED task runs

This ensures that **higher-priority tasks always get preference**.

---

## Output Representation

The currently executing task is indicated using Port 1:

* `0x01` → Sensor task
* `0x02` → Communication task
* `0x04` → LED task

---

## Key Concepts Demonstrated

* Priority-based scheduling
* Cooperative task execution
* Basic embedded system architecture
* Mapping OS concepts to microcontrollers

---

## Limitations

This is a **basic scheduler**, so:

* Tasks are not preemptive
* All tasks are assumed to be always ready
* No dynamic priority or task queue

---

## Future Improvements

This can be extended into a more advanced system by adding:

* Timer-based task triggering
* Task control blocks (TCB)
* Preemptive scheduling
* Dynamic task priorities

---
