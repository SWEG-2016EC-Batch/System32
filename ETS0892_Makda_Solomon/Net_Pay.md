# Net-Pay Calculation

## Problem Analysis
**Goal**: To create a program that calculates the net pay of an employee after deductions for pension and taxes, while accounting for any bonuses and overtime.

### Inputs
- **Basic Salary**: The employee's salary before deductions.
- **Worked Hours**: Total hours worked by the employee.
- **Bonus Rate**: Any additional bonus the employee earns.
- **Overtime Bonus Rate**: Applicable only if worked hours exceed 40.

### Processing
1. Calculate the pension deduction as 7% of the basic salary.
2. Calculate the tax based on the provided tax rate.
3. If the employee worked more than 40 hours, calculate the overtime pay.
4. Compute the net pay using the formula:
   \[
   \text{Net Pay} = \text{Basic Salary} - \text{Pension} - \text{Tax} + \text{Bonus} + \text{Overtime}
   \]

### Outputs
- Display the calculated net pay to the user.

## Algorithm
1. Start the program.
2. Prompt the user to enter the basic salary.
3. Prompt the user to enter the worked hours.
4. Prompt the user to enter the bonus rate.
5. Calculate the pension deduction as 7% of the basic salary.
6. Prompt the user to enter the tax rate (as a percentage).
7. Calculate the tax based on the taxable income.
8. Check if the worked hours exceed 40:
   - If yes, prompt for the overtime bonus rate and calculate the overtime pay.
   - If no, set the overtime pay to 0.
9. Calculate the net pay using the formula.
10. Display the net pay.
11. End the program.

     ### Flowchart


```mermaid
flowchart TD 
    A[Start] --> B[Input Basic Salary]
    B --> C[Input Worked Hours]
    C --> D[Input Bonus Rate]
    D --> E[Calculate Pension (7% of Basic Salary)]
    E --> F[Input Tax Rate]
    F --> G[Calculate Tax]
    G --> H{Worked Hours > 40?}
    H -- Yes --> I[Input Overtime Rate]
    I --> J[Calculate Overtime]
    H -- No --> K[Set Overtime to 0]
    J --> L[Calculate Net Pay]
    K --> L
    L --> M[Output Net Pay]
    M --> N[End]

```
