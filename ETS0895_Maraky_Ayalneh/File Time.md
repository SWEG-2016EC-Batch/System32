## Problem Analysis

A serial transmission line can transmit 960 characters per second. Write a program to calculate how long it will take to send a file based on its size in bytes. The program should output the time in **days, hours, minutes, and seconds**.

### Inputs:
1. File size in bytes (`fileSize`).

### Process:
1. Divide the file size by the transmission speed to find the total time in seconds.
2. Convert seconds to:
   - Days: Divide total seconds by 86,400.
   - Hours: Use the remainder from the days calculation and divide by 3,600.
   - Minutes: Use the remainder from the hours calculation and divide by 60.
   - Seconds: Use the remainder from the minutes calculation.
3. Display the results.

### Output:
1. Days
2. Hours
3. Minutes
4. Seconds

## Pseudocode

1. Start
2. Declare constants:
   - transmissionSpeed = 960 (characters per second)
3. Input fileSize in bytes.
4. Calculate total transmission time in seconds:
   - totalSeconds = fileSize / transmissionSpeed
5. Convert totalSeconds to days, hours, minutes, and seconds:
   - days = totalSeconds / 86400
   - remainingSeconds = totalSeconds % 86400
   - hours = remainingSeconds / 3600
   - remainingSeconds = remainingSeconds % 3600
   - minutes = remainingSeconds / 60
   - seconds = remainingSeconds % 60
6. Output days, hours, minutes, and seconds.
7. End

## Flowchart

```mermaid
flowchart TD
    id1([Start]) --> id2[/Input file size in bytes/]
    id2 --> id3[Process "transmissionSpeed = 960"]
    id3 --> id4[Process "totalSeconds = fileSize / transmissionSpeed"]
    id4 --> id5[Process "days = totalSeconds / 86400"]
    id5 --> id6[Process "remainingSeconds = totalSeconds % 86400"]
    id6 --> id7[Process "hours = remainingSeconds / 3600"]
    id7 --> id8[Process "remainingSeconds = remainingSeconds % 3600"]
    id8 --> id9[Process "minutes = remainingSeconds / 60"]
    id9 --> id10[Process "seconds = remainingSeconds % 60"]
    id10 --> id11[/Output days, hours, minutes, and seconds/]
    id11 --> id12([End])
```
