# Problem Analysis

The program calculates a student's total mark based on scores from various assessments and assigns a corresponding letter grade. The scores are weighted according to their contribution to the final grade. The program also includes input validation to ensure that the scores do not exceed their maximum allowable values.

## Algorithm

1. **Initialize** variables for scores and total mark.
2. **Input** the score for each assessment:
   - Test (15%)
   - Quiz (5%)
   - Project (20%)
   - Assignment (10%)
   - Final Exam (50%)
3. **Validate** each input to ensure it does not exceed the maximum allowed:
   - Test ≤ 20
   - Quiz ≤ 5
   - Project ≤ 20
   - Assignment ≤ 10
   - Final Exam ≤ 50
4. **Calculate** the total mark by summing all valid scores.
5. **Determine** the letter grade based on the total mark:
   - A+: 90+
   - A: 80-89
   - B+: 75-79
   - B: 60-74
   - C+: 55-59
   - C: 45-54
   - D: 30-44
   - F: Below 30
6. **Output** the total mark and letter grade.

#### Flowchart


``` mermaid
graph TD
    A[Start] --> B[Declare variables]
    B --> C[Input score for test]
    C --> D{Is input valid and <= 15?}
    D -->|No| E[Display 'invalid input' and exit]
    D -->|Yes| F[Input score for quiz]
    F --> G{Is input valid and <= 5?}
    G -->|No| H[Display 'invalid input' and exit]
    G -->|Yes| I[Input score for project]
    I --> J{Is input valid and <= 20?}
    J -->|No| K[Display 'invalid input' and exit]
    J -->|Yes| L[Input score for assignment]
    L --> M{Is input valid and <= 10?}
    M -->|No| N[Display 'invalid input' and exit]
    M -->|Yes| O[Input score for final exam]
    O --> P{Is input valid and <= 50?}
    P -->|No| Q[Display 'invalid input' and exit]
    P -->|Yes| R[Calculate total grade]
    R --> S[Output total grade]
    S --> T[Determine letter grade based on total grade]
    T --> U{Total >= 90?}
    U -->|Yes| V[Display 'A+']
    U -->|No| W{Total >= 80?}
    W -->|Yes| X[Display 'A']
    W -->|No| Y{Total >= 75?}
    Y -->|Yes| Z[Display 'B+']
    Y -->|No| AA{Total >= 60?}
    AA -->|Yes| AB[Display 'B']
    AA -->|No| AC{Total >= 55?}
    AC -->|Yes| AD[Display 'C+']
    AC -->|No| AE{Total >= 45?}
    AE -->|Yes| AF[Display 'C']
    AE -->|No| AG{Total >= 30?}
    AG -->|Yes| AH[Display 'D']
    AG -->|No| AI[Display 'F']
    V --> AJ[End]
    X --> AJ
    Z --> AJ
    AB --> AJ
    AD --> AJ
    AF --> AJ
    AH --> AJ
    AI --> AJ[End]


```
