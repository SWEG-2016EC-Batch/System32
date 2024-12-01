### Problem Analysis

The program calculates an employee's gross salary, net salary, and bonus payment based on their weekly working hours, bonus rate per hour, and base salary. The deductions include a pension rate of 5% and a tax rate of 15%.

#### 1. **Input:**
   - **name**: The employee's name (input by the user).
   - **weeklyHours**: The number of hours the employee worked in a week.
   - **bonusRate**: The bonus rate per hour.
   - **baseSalary**: The employee's base salary.

#### 2. **Process:**
   - **Calculate Bonus Payment:**
     ```
     bonusPayment = weeklyHours * bonusRate
     ```
   - **Calculate Gross Salary:**
     ```
     grossSalary = baseSalary + bonusPayment
     ```
   - **Calculate Deductions:**
     - Pension:
       ```
       pensionAmount = grossSalary * 0.05
       ```
     - Tax:
       ```
       taxAmount = grossSalary * 0.15
       ```
   - **Calculate Net Salary:**
     ```
     netSalary = grossSalary - (pensionAmount + taxAmount)
     ```

#### 3. **Output:**
   - **Employee Name**: The name of the employee.
   - **Gross Salary**: The total salary including the base salary and bonus payment.
   - **Bonus Payment**: The calculated bonus based on weekly hours and bonus rate.
   - **Net Salary**: The employee's salary after deductions for pension and tax.

### Pseudocode
1. Start the program.
2. Prompt the user to input the employee's name.
3. Prompt the user to input the weekly working hours.
4. Prompt the user to input the bonus rate per hour.
5. Prompt the user to input the base salary.
6. Calculate the **bonus payment** using the formula:
   ```
   bonusPayment = weeklyHours * bonusRate
   ```
7. Calculate the **gross salary** using the formula:
   ```
   grossSalary = baseSalary + bonusPayment
   ```
8. Calculate the **pension amount** as 5% of the gross salary:
   ```
   pensionAmount = grossSalary * 0.05
   ```
9. Calculate the **tax amount** as 15% of the gross salary:
   ```
   taxAmount = grossSalary * 0.15
   ```
10. Calculate the **net salary** after deductions:
    ```
    netSalary = grossSalary - (pensionAmount + taxAmount)
    ```
11. Display the employee's name.
12. Display the gross salary.
13. Display the bonus payment.
14. Display the net salary.
15. End the program.
```

