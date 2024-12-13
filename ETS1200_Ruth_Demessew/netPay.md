# Problem Analysis
This program calculates the net salary of an employee based on their basic salary, worked hours, and applicable tax and pension deductions. It incorporates bonuses for extra hours worked and calculates the tax based on predefined salary brackets.
# Inputs
Basic Salary (basicSalary): The fixed salary for the employee.
Worked Hours (workedHours): Total hours worked by the employee in a week.
Bonus Rate (bonusRate): Payment per hour for regular hours worked.
Overtime Bonus Rate (overTimeBonusRate): Payment per hour for hours worked beyond 40.
# processing
Extra Hours:
extraHours= workedHours − 40
 if workedHours > 40
Bonus:
If worked hours exceed 40:
bonus = extraHours × overTimeBonusRate
Otherwise:
bonus = workedHours × bonusRate
Gross Salary:
grossSalary = basicSalary + bonus
Pension:
pension=basicSalary × 0.07
Tax:
Tax rate is determined by gross salary:
Gross salary ≤ 200: Tax rate = 0%
Gross salary ≤ 600: Tax rate = 10%
Gross salary ≤ 1200: Tax rate = 15%
Gross salary ≤ 2000: Tax rate = 20%
Gross salary ≤ 3500: Tax rate = 25%
Gross salary > 3500: Tax rate = 30%
tax
tax = grossSalary × taxRate
Net Salary:
netSalary = grossSalary − pension − tax
# Outputs
Net Salary (netSalary): The employee's take-home pay after deductions.
Intermediate Outputs:
Gross Salary (grossSalary): Sum of basic salary and bonuses.
Pension (pension): Deduction at a fixed rate of 7% of the basic salary.
Tax (tax): Deduction based on gross salary and tax brackets.

# Pseudo Code
step 1. Start
step 2. Input basicSalary
step 3. Input workedHours
step 4. Input bonusRate
step 5. Initialize extraHours = 0.0, bonus = 0.0
step 6. If workedHours > 40:
     step 6.1. extraHours = workedHours - 40
     step 6.2. Input overTimeBonusRate
     step 6.3. bonus = extraHours * overTimeBonusRate
   Else:
     step 6.4. bonus = workedHours * bonusRate
step 7. Calculate grossSalary = basicSalary + bonus
step 8. Calculate pension = basicSalary * 0.07
step 9. Determine taxRate based on grossSalary:
     step 9.1. If grossSalary ≤ 200: taxRate = 0.0
     step 9.2. Else If grossSalary ≤ 600: taxRate = 0.1
     step 9.3. Else If grossSalary ≤ 1200: taxRate = 0.15
     step 9.4. Else If grossSalary ≤ 2000: taxRate = 0.2
     step 9.5. Else If grossSalary ≤ 3500: taxRate = 0.25
     step 9.6. Else: taxRate = 0.3
step 10. Calculate tax = grossSalary * taxRate
step 11. Calculate netSalary = grossSalary - pension - tax
step 12. Output netSalary
step 13. End

