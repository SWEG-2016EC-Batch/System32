# Net-Pay Calculation

## Problem Analysis

# Objective: 
Create an application that calculates the Net-Pay of an employee after all pension and tax deductions as pertained for the employee. Taxes are remitted at a specific rate provided to the program. The application requires basic salary, worked hours and bonus rate. In the case where an employee has worked more than the standard 40 hours a week, the program also asks for the overtime hourly bonus rate. 

## Inputs:

Basic salary (basicSalary)

Worked hours (workedHours)

Bonus rate (bonusRate)

Bonus rate per overtime hours (overtimeBonusRate) in case worked hours > 40

Tax rate (taxRate)

## Processing:

First read the basic salary, worked hours and bonus rate of the client.

In case worked hours go above 40, request the client to provide the overtime bonus rate on the hour. 

Now read the tax rate.

Then determine the gross pay as followed:

Gross pay= Basic Salary + (Worked Hours * Bonus Rate)

In case Worked Hours > 40:

Gross Pay = Gross Pay + (Worked Hours – 40) * Overtime Bonus Rate 

In conclusion, Calculate pension (7% of Gross Pay).

Based on the data provided, provide a deduction based on the following tax rate ranges:

- What level of revenue or income taxpayer earns up to 200, the deduction allowable is 0%
- If 200 to 600 is earned by an income earner, then the allowable deduction is 10%
- For 600 to 1200 allowance is 15%
- Where the income is earned between 1200 to 2000, the Tax Deduction Rate would be 20%
- If an income earner earns between 2000 and 3500, the deduction will be 25%
- For a revenue or income above 3500, the deductible percentage allowance is 30%

Net Compensation is given by the formulas: 

Net Compensation = Gross salary – Pension contribution – Tax deduction

Then put in the output the Net Compensation

grossPay = basicSalary + (workedHours * bonusRate)

## Outputs:

Net-Pay (netPay)

# Flowchart
``` mermaid
graph TD
    A[Start] --> B[Input basic salary, worked hours, bonus rate]
    B --> C{Worked hours > 40?}
    C -->|Yes| D[Input overtime bonus rate per hour]
    C -->|No| E[Input tax rate]
    D --> E
    E --> F[Calculate gross pay]
    F --> G{Worked hours > 40?}
    G -->|Yes| H[Add overtime bonus to gross pay]
    G -->|No| I[Calculate pension deduction]
    H --> I
    I --> J[Calculate tax deduction]
    J --> K[Calculate net pay]
    K --> L[Output net pay]
    L --> M[End]

```
