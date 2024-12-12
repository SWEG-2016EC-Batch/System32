# Problem Analysis and Solution

## Problem Analysis

**Objective**:  
Calculate the **net salary** of an employee by taking into account the following factors:  
- **Basic salary**  
- **Worked hours**  
- Bonuses for regular and overtime work  
- Deductions for pension and tax  

**Key Steps**:  
1. **Input values**: Basic salary, worked hours, bonus rates (regular and overtime).  
2. **Determine bonuses**:  
   - Calculate overtime if worked hours exceed 40.  
3. **Deductions**:  
   - Compute pension (7% of the basic salary).  
   - Apply a tax rate based on the gross salary.  
4. **Calculate the net salary**:  
   - Net Salary = Gross Salary - Pension - Tax  

**Output**: Display the **net salary** after applying bonuses and deductions.  

---

## Pseudocode

```plaintext
1. Start.

2. Declare variables:
   - basicSalary, workedHours, bonusRate, overTimeBonusRate as DOUBLE
   - extraHours = 0.0, bonus = 0.0, grossSalary, pension, taxRate = 0.0, tax, netSalary as DOUBLE

3. Prompt the user to enter the basic salary.
   Input basicSalary.

4. Prompt the user to enter the number of worked hours.
   Input workedHours.

5. Prompt the user to enter the bonus rate per hour.
   Input bonusRate.

6. Check if the worked hours exceed 40:
   - If TRUE:
     - Calculate extraHours = workedHours - 40.
     - Prompt the user to enter the overtime bonus rate per hour.
     - Input overTimeBonusRate.
     - Calculate bonus = extraHours * overTimeBonusRate.
   - Else:
     - Calculate bonus = workedHours * bonusRate.

7. Calculate grossSalary = basicSalary + bonus.

8. Calculate pension = basicSalary * 0.07.

9. Determine the tax rate based on grossSalary:
   - grossSalary ≤ 200: taxRate = 0.0
   - grossSalary ≤ 600: taxRate = 0.1
   - grossSalary ≤ 1200: taxRate = 0.15
   - grossSalary ≤ 2000: taxRate = 0.2
   - grossSalary ≤ 3500: taxRate = 0.25
   - grossSalary > 3500: taxRate = 0.3

10. Calculate tax = grossSalary * taxRate.

11. Calculate netSalary = grossSalary - pension - tax.

12. Print "Your Net Salary is: ", netSalary.

13. End.
