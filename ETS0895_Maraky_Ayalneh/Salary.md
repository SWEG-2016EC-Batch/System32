## Problem Analysis
The program calculates an employee's gross salary, net salary, and bonus payment based on their weekly working hours, bonus rate per hour, and base salary. The deductions include a pension rate of 5% and a tax rate of 15%.

#### 1. **Input:**
   - **name**: The employee's name (input by the user).
   - **weeklyHours**: The number of hours the employee worked in a week.
   - **bonusRate**: The bonus rate per hour.
   - **baseSalary**: The employee's base salary.

#### 2. **Process:**
   - **Calculate Bonus Payment**
   - **Calculate Gross Salary**
   - **Calculate Deductions**
   - **Calculate Net Salary**
 
#### 3. **Output:**
   - **Employee Name**: The name of the employee.
   - **Gross Salary**: The total salary including the base salary and bonus payment.
   - **Bonus Payment**: The calculated bonus based on weekly hours and bonus rate.
   - **Net Salary**: The employee's salary after deductions for pension and tax.

## Pseudocode
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

## Flowchart

```mermaid
flowchart TD
    id1([Start])-->id2[/Input employee's name/]
    id2-->id3[/Input weekly working hours/]
    id3-->id4[/Input bonus rate per hour/]
    id4-->id5[/Input base salary/]
    id5-->id6[Process bonusPayment = weeklyHours * bonusRate]
    id6-->id7[Process grossSalary = baseSalary + bonusPayment]
    id7-->id8[Process pensionAmount = grossSalary * 0.05]
    id8-->id9[Process taxAmount = grossSalary * 0.15]
    id9-->id10[Process netSalary = grossSalary - pensionAmount + taxAmount]
    id10-->id11[/Output employee's name/]
    id11-->id12[/Output grossSalary/]
    id12-->id13[/Output bonusPayment/]
    id13-->id14[/Output netSalary/]
    id14-->id15([End])


