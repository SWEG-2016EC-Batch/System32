## Problem Analysis
The task is to generate various patterns using nested loops in C++. The patterns include:

1. Printing numbers in rows.
2. Printing capital letters incrementally.
3. Printing numbers in an incremental triangle.
4. Printing decreasing numbers in a right-aligned triangle.
5. Printing letters in an incremental triangle.
6. Printing lowercase letters.
7. Printing a hollow rectangle.
8. Printing an inverted triangle of stars.
9. Printing a hollow inverted triangle.
10. Printing a left-aligned triangle of stars.
11. Printing a right-aligned triangle of stars.
12. Printing a hollow left-aligned triangle.

## Algorithm
1. Start the program.
2. Initialize necessary variables (`n`, `rows`, `columns`).
3. For each pattern:
   - Use nested loops to generate the desired output.
   - Print the results for each pattern.
4. End the program.


### Flowchart
```mermaid
flowchart TD
    A[Start] --> B[Initialize n, rows, columns]
    B --> C[Pattern 1: Print numbers in rows]
    C --> D[Pattern 2: Print capital letters]
    D --> E[Pattern 3: Print incremental triangle of numbers]
    E --> F[Pattern 4: Print right-aligned triangle of numbers]
    F --> G[Pattern 5: Print incremental triangle of letters]
    G --> H[Pattern 6: Print lowercase letters]
    H --> I[Pattern 7: Print hollow rectangle]
    I --> J[Pattern 8: Print inverted triangle of stars]
    J --> K[Pattern 9: Print hollow inverted triangle]
    K --> L[Pattern 10: Print left-aligned triangle of stars]
    L --> M[Pattern 11: Print right-aligned triangle of stars]
    M --> N[Pattern 12: Print hollow left-aligned triangle]
    N --> O[End]
