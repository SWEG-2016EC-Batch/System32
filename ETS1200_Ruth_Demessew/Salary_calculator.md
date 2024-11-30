# Problem Analysis

The task is to calculate the gross salary, net salary, and bonus payment for an employee based on their input data.

1. **Inputs**:
   - `employee_name`: The name of the employee (a string).
   - `base_salary`: The base salary in birr (a positive double).
   - `weekly_working_hours`: The number of hours worked weekly (a positive double).
   - `bonus_rate_per_hour`: The bonus rate per hour in birr (a positive double).

2. **Processing**:
   - Validate inputs: Ensure `base_salary`, `weekly_working_hours`, and `bonus_rate_per_hour` are greater than zero.
   - Compute:
     - **Bonus Payment**: `bonus_payment = weekly_working_hours × bonus_rate_per_hour`
     - **Gross Salary**: `gross_salary = base_salary + bonus_payment`
     - **Deductions**:
       - Pension Deduction: `pension_deduction = gross_salary × 0.05`
       - Tax Deduction: `tax_deduction = gross_salary × 0.15`
     - **Net Salary**: `net_salary = gross_salary − (pension_deduction + tax_deduction)`

3. **Outputs**:
   - The employee's gross salary in birr.
   - The employee's net salary in birr.
   - The employee's bonus payment in birr.

---

# Algorithm

1. **Start.**
2. Prompt the user for:
   - `employee_name`
   - `base_salary`
     - If `base_salary <= 0`, display an error and terminate the program.
   - `weekly_working_hours`
     - If `weekly_working_hours <= 0`, display an error and terminate the program.
   - `bonus_rate_per_hour`
     - If `bonus_rate_per_hour <= 0`, display an error and terminate the program.
3. Compute:
   - `bonus_payment = weekly_working_hours × bonus_rate_per_hour`
   - `gross_salary = base_salary + bonus_payment`
   - `pension_deduction = gross_salary × 0.05`
   - `tax_deduction = gross_salary × 0.15`
   - `net_salary = gross_salary − (pension_deduction + tax_deduction)`
4. Display:
   - `employee_name`
   - `gross_salary`
   - `net_salary`
   - `bonus_payment`
5. **End.**

---

# Flowchart

```mermaid
flowchart TD
    id1([Start]) --> id2["Input: Employee name"]
    id2 --> id3["Input: Base salary in birr"]
    id3 --> id4{"Base salary <= 0"}
    id4 --True--> id5["Output: Error - Base salary must be greater than zero"]
    id5 --> id6([End])
    id4 --False--> id7["Input: Weekly working hours"]
    id7 --> id8{"Weekly working hours <= 0"}
    id8 --True--> id9["Output: Error - Weekly working hours must be greater than zero"]
    id9 --> id6
    id8 --False--> id10["Input: Bonus rate per hour in birr"]
    id10 --> id11{"Bonus rate <= 0"}
    id11 --True--> id12["Output: Error - Bonus rate must be greater than zero"]
    id12 --> id6
    id11 --False--> id13["Calculate bonus payment = weekly working hours × bonus rate"]
    id13 --> id14["Calculate gross salary = base salary + bonus payment"]
    id14 --> id15["Calculate pension deduction = gross salary × 0.05"]
    id15 --> id16["Calculate tax deduction = gross salary × 0.15"]
    id16 --> id17["Calculate net salary = gross salary − (pension deduction + tax deduction)"]
    id17 --> id18["Output: Gross salary, net salary, and bonus payment"]
    id18 --> id19([End])
```
