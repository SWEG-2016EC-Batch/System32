# Problem Analysis

# Objective: 
Create an application that calculates the Net-Pay of an employee after all pension and tax deductions as pertained for the employee. Taxes are remitted at a specific rate provided to the program. The application requires basic salary, worked hours and bonus rate. In the case where an employee has worked more than the standard 40 hours a week, the program also asks for the overtime hourly bonus rate. 

## Inputs:

Basic salary (basicSalary)

Worked hours (workedHours)

Bonus rate (bonusRate)

Bonus rate per overtime hours (overtimeBonusRate) in case worked hours > 40

Tax rate (taxRate)

## Outputs:

Net-Pay (netPay)

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
# psuedocode
1.start

2.Declare variables: basicSalary, workedHours, bonusRate, overtimeBonusRate, taxRate, grossPay, netPay, pensionDeduction, taxDeduction

3.Input basic salary

4.Input worked hours

5.Input bonus rate

6.If worked hours > 40 Then
 *Input overtime bonus rate per hour

7.Input tax rate

8.Calculate gross pay:

grossPay = basicSalary + (workedHours * bonusRate)

9.If worked hours > 40 Then
   grossPay = grossPay + ((workedHours - 40) * overtimeBonusRate)
   Calculate pension deduction:
   pensionDeduction = grossPay * 0.07

10.Calculate tax deduction based on tax rate ranges:

11.If gross pay <= 200 Then

taxDeduction = 0

 Else If gross pay <= 600 Then
 taxDeduction = (grossPay - 200) * 0.10

 Else If gross pay <= 1200 Then
 taxDeduction = (400 * 0.10) + (grossPay - 600) * 0.15

 Else If gross pay <= 2000 Then
 taxDeduction = (400 * 0.10) + (600 * 0.15) + (grossPay - 1200) * 0.20

 Else If gross pay <= 3500 Then
 taxDeduction = (400 * 0.10) + (600 * 0.15) + (800 * 0.20) + (grossPay - 2000) * 0.25

 Else
 taxDeduction = (400 * 0.10) + (600 * 0.15) + (800 * 0.20) + (1500 * 0.25) + (grossPay - 3500) * 0.30

12.Calculate net pay:
 *netPay = grossPay - pensionDeduction - taxDeduction

13.Output net pay

14.End




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
