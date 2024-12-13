## Problem Analysis
The task is to generate various patterns using nested loops in C++. The patterns include:


### Input
- The user specifies:
  1. The number of rows (`n`).
  2. The number of columns (if applicable).
  3. The choice of pattern (1-12).

### Processing
1. Start the program.
2. Prompt the user for input values (`n`, `rows`, `columns`, and `choice`).
3. Based on the user's choice, use nested loops to generate the desired pattern.
   - Implement specific logic for each pattern.
4. Print the generated pattern to the console.
5. End the program.
     

### Output
- The program generates and displays all of patterns:
  1. Numbers printed in rows.
  2. Capital letters printed incrementally.
  3. An incremental triangle of numbers.
  4. A right-aligned triangle of decreasing numbers.
  5. An incremental triangle of letters.
  6. Lowercase letters printed in rows.
  7. A hollow rectangle made of stars.
  8. An inverted triangle of stars.
  9. A hollow inverted triangle of stars.
  10. A left-aligned triangle of stars.
  11. A right-aligned triangle of stars.
  12. A hollow left-aligned triangle of stars.


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
