## Problem Analysis
The task is to generate various patterns based on user input in C++. The user specifies the number of rows and columns, as well as the choice of pattern from a predefined set. The available patterns include:

1. Rectangle of stars.
2. Square of stars.
3. Half pyramid of stars.
4. Half pyramid of numbers.
5. Inverted half pyramid of stars.
6. Half pyramid of alphabets.
7. Inverted half pyramid of alphabets.
8. Full pyramid of stars.
9. Inverted full pyramid of stars.
10. Hollow full pyramid of stars.
11. Inverted hollow full pyramid of stars.
12. A custom pattern (to be defined).
13. Pattern of numbers.
14. Pattern of alphabets.

## Algorithm
1. Start the program.
2. Prompt the user to enter the number of rows and columns.
3. Prompt the user to enter the choice of pattern (1-14).
4. Use a switch statement to generate the selected pattern:
   - For each case, use nested loops to generate the desired output.
5. Print the results for the chosen pattern.
6. End the program

### Flowchart

```mermaid
flowchart TD
    A[Start] --> B[Input rows]
    B --> C[Input columns]
    C --> D[Input choice of pattern (1-14)]
    D --> E{Choice}
    E -->|1| F[Print Rectangle of stars]
    E -->|2| G[Print Square of stars]
    E -->|3| H[Print Half pyramid of stars]
    E -->|4| I[Print Half pyramid of numbers]
    E -->|5| J[Print Inverted half pyramid of stars]
    E -->|6| K[Print Half pyramid of alphabets]
    E -->|7| L[Print Inverted half pyramid of alphabets]
    E -->|8| M[Print Full pyramid of stars]
    E -->|9| N[Print Inverted full pyramid of stars]
    E -->|10| O[Print Hollow full pyramid of stars]
    E -->|11| P[Print Inverted hollow full pyramid of stars]
    E -->|12| Q[Custom pattern logic]
    E -->|13| R[Print Pattern of numbers]
    E -->|14| S[Print Pattern of alphabets]
    E -->|default| T[Print Invalid choice!]
    S --> U["End"]

```

