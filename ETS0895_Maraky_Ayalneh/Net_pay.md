# Salary Calculation

## Problem Analysis
The program calculates the gross and net salary of an employee based on their basic salary, hours worked, and applicable tax rates. It also includes calculations for overtime bonus and pension deductions.

### Inputs
1. basic_salary: The employee's basic salary.
2. worked_hours: The number of hours the employee worked.
3. bonus_rate: The overtime rate per hour (if applicable).

### Processes
1. Determine overtime hours worked (if any) and calculate the bonus.
2. Compute gross_salary as the sum of basic_salary and bonus.
3. Deduct 7% of the basic salary as pension.
4. Calculate tax based on the gross_salary using predefined tax rates.
5. Compute net_salary as gross_salary minus pension and tax.

### Outputs
1. gross_salary: Total salary before deductions.
2. pension: Deduction based on the basic salary.
3. tax: Deduction based on the gross salary.
4. net_salary: Final take-home salary after deductions.

---

## Pseudocode

START
1. Input basic_salary
2. Input worked_hours
3. IF worked_hours > 40 THEN
      Input bonus_rate
      Calculate extra_hours = worked_hours - 40
   ELSE
      extra_hours = 0
   END IF
4. Calculate bonus = extra_hours * bonus_rate
5. Calculate gross_salary = basic_salary + bonus
6. Calculate pension = basic_salary * 0.07
7. Determine tax_rate based on gross_salary:
   - IF gross_salary <= 200 THEN tax_rate = 0
   - ELSE IF gross_salary <= 600 THEN tax_rate = 0.1
   - ELSE IF gross_salary <= 1200 THEN tax_rate = 0.15
   - ELSE IF gross_salary <= 2000 THEN tax_rate = 0.2
   - ELSE IF gross_salary <= 3500 THEN tax_rate = 0.25
   - ELSE tax_rate = 0.3
8. Calculate tax = gross_salary * tax_rate
9. Calculate net_salary = gross_salary - pension - tax
10. Output gross_salary, pension, tax, and net_salary

END
## Flowchart 
```mermaid
flowchart TD
    A([Start])-->B[/Input basic_salary/]
    B-->C[/Input worked_hours/]
    C-->D{worked_hours > 40?}
    D--|Yes|-->E[/Input bonus_rate/]
    E-->F[Calculate extra_hours = worked_hours - 40]
    D--|No|-->G[Set extra_hours = 0]
    F-->H[Calculate bonus = extra_hours * bonus_rate]
    G-->H
    H-->I[Calculate gross_salary = basic_salary + bonus]
    I-->J[Calculate pension = basic_salary * 0.07]
    J-->K{gross_salary <= 200?}
    K--|Yes|-->L[Set tax_rate = 0]
    K--|No|-->M{gross_salary <= 600?}
    M--|Yes|-->N[Set tax_rate = 0.1]
    M--|No|-->O{gross_salary <= 1200?}
    O--|Yes|-->P[Set tax_rate = 0.15]
    O--|No|-->Q{gross_salary <= 2000?}
    Q--|Yes|-->R[Set tax_rate = 0.2]
    Q--|No|-->S{gross_salary <= 3500?}
    S--|Yes|-->T[Set tax_rate = 0.25]
    S--|No|-->U[Set tax_rate = 0.3]
    L-->V[Calculate tax = gross_salary * tax_rate]
    N-->V
    P-->V
    R-->V
    T-->V
    U-->V
    V-->W[Calculate net_salary = gross_salary - pension - tax]
    W-->X[/Output gross_salary, pension, tax, and net_salary/]
    X-->Y([End])
