# Problem Analysis

## Objective: 
Develop a software that acquires different scores for different assessments and computes the total score for a student’s grade. Through the use of the program, the user shall be able to enter scores for tests, quizzes, projects, assignments, and a final exam, each cover with a weight. An input given must be checked if it is within the specified range before adding and determining a total grade and its equivalence with a letter grade. 

## Inputs: 

Score for test (out of 15%) 

Score for quiz (out of 5%) 

Score for project (out of 20%) 

Score for assignment (out of 10%) 

Score for final exam (out of 50%) 

## Outputs: 

Total grade (percentage) 

Letter grade based on total grade

## Processing: 

Ask the user the score obtained for the test as input.

Always check that the numeric input entered is in the range of 0 to 15

Ask the user the score obtained for the quiz as input. 

Always check that the numeric input is in the range of 0 to 5. 

Ask the user the score obtained for the project as input. 

Always check that the numeric input is in the range of 0 to 20. 

Next, ask the user what score was obtained for the assignment.

Indicate the score for this evaluation. 

Check whether the input contains a number and is between the ranges 0 and 10. 

Indicate the score for the final exam. 

Check whether the input contains a number and is between the ranges 0 and 50. 

Obtain the total grade by adding the two grade points that have been verified. 

Show the entire grade. 

Based on the total grade that was give above, determine the letter grade equivalent.
# pseudocode
1.Start

2.Let’s have the variables defined as: test, quiz, project, assignment, final, total

3.The score for test must be entered with a maximum of 15 
   *If the answer is invalid or stated above 15
   *Say “invalid input”
   *Eliminate input and take out the remaining input
   *End program

5.The score for quiz must be entered with a maximum of 5 
 *If the answer is invalid or stated above 5
 *Say “invalid input”
 *Eliminate input and take out the remaining input
 *End program

6.The score for the project must be entered with a maximum of 20 
 *If the answer is invalid or stated above 20
 *Say “invalid input”
 *Eliminate input and take out the remaining input
 *End program

7.The score for the task must be entered with a maximum of 10
 *If the answer is invalid or stated above 10
 *Say “invalid input”
 *Eliminate input and take out the remaining input
 *End program

The score of final exam must be entered with a maximum of 50
 *If the answer is invalid or stated above 50
 *Say “invalid input”
 *Eliminate input and take out the remaining input
 *End program

8.Update and find the total score:
 *total = test + quiz + project + assignment + final

9.The total grade must be displayed

10.Then a letter grade would be assigned based on the total grade calculated:

If total grade percentage is more than or equal to 90

Say “A+”

If in case the total grade is lower than A then and only then

If in case total grade is more than 80 but less than 90

Say “A”

If in case total grade is more than 75 but less than 80

Say “B+”

If in case total grade is more than 75 and less than 60

Say “B”

If total is between 55 and 60 display output as “C+”. 

If total is between 45 and 55 display output as “C”. 

If total is between 30 and 45 display output as “D”. 

If total is below 30 display output as “F”. 

11.End.

# Flowchart

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

    



