# Employee Salary Calculation Program

## Problem Analysis
The goal of this program is to calculate an employee's gross salary, net salary, and bonus payment based on their base salary, weekly hours worked, and bonus rate. The program should include input validation to ensure that all numerical inputs are positive and valid. 

1. **Input**:
   - Employee's name (single character).
   - Base salary (must be a non-negative number).
   - Weekly hours worked (must be a non-negative number).
   - Bonus rate (must be a non-negative number).
  
2. **Calculations**:
   - Bonus Payment = Weekly Hours Worked * Bonus Rate
   - Gross Salary = Base Salary + Bonus Payment
   - Tax = Gross Salary * Tax Rate (15%)
   - Pension = Gross Salary * Pension Rate (5%)
   - Net Salary = Gross Salary - (Tax + Pension)

3. **Output**:
   - Display the gross salary, bonus payment, and net salary.

## Algorithm
1. Define constants for tax rate (15%) and pension rate (5%).
2. Prompt the user to enter the employee's name.
3. Prompt for base salary and validate input.
   - If invalid, ask again until a valid input is received.
4. Prompt for weekly hours worked and validate input.
   - If invalid, ask again until a valid input is received.
5. Prompt for bonus rate and validate input.
   - If invalid, ask again until a valid input is received.
6. Calculate the bonus payment.
7. Calculate the gross salary.
8. Calculate the tax.
9. Calculate the pension.
10. Calculate the net salary.
11. Display the results (gross salary, bonus payment, net salary).

## Pseudocode

START

DEFINE tax_rate = 0.15
DEFINE pension_rate = 0.05

OUTPUT "Enter the employee's name (single character only):"
INPUT employeeName

REPEAT
OUTPUT "Enter the base salary:"
INPUT base_salary
IF base_salary < 0 THEN
OUTPUT "Error: Please enter a valid positive number for base salary:"
ENDIF
UNTIL base_salary >= 0

REPEAT
OUTPUT "Enter the weekly hours worked:"
INPUT weekly_hours_worked
IF weekly_hours_worked < 0 THEN
OUTPUT "Error: Please enter a valid positive number for weekly hours worked:"
ENDIF
UNTIL weekly_hours_worked >= 0

REPEAT
OUTPUT "Enter the bonus rate:"
INPUT bonus_rate
IF bonus_rate < 0 THEN
OUTPUT "Error: Please enter a valid positive number for bonus rate:"
ENDIF
UNTIL bonus_rate >= 0

bonus_payment = weekly_hours_worked * bonus_rate
gross_salary = base_salary + bonus_payment
tax = gross_salary * tax_rate
pension = gross_salary * pension_rate
net_salary = gross_salary - (pension + tax)

OUTPUT employeeName + "'s gross salary is: $" + gross_salary
OUTPUT employeeName + "'s bonus payment is: $" + bonus_payment
OUTPUT employeeName + "'s net salary is: $" + net_salary

END
