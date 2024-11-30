# Problem Analysis
## Inputs
1. `Employee name`.
2. `Base salary`.
3. `Weekly hours worked`.
4. `Bonus rate per hour`.
## Outputs
1. `Net salary`.
2. `Gross salary`.
3. `Bonus payment`.
4. `Employee name`.
## Operations
1. Initialize the `tax rete` and `pension rate`.
2. Check whether or not the enterd values are valid.
3. Calculate the `bonus payment` by using the formula:
    ### Bonus payment = Weekly hours worked * Bonus rate per hour
4. Calculate the `gross salary` by using the formula:
    ### Gross salary = Base salary + Bonus payment
5. Calcualte the `tax` amnount by using the formula:
    ### Tax = Gross salary * 0.15
6. Calcualte the `pension` amnount by using the formula:
    ### Pension = Gross salary * 0.05
7. Calcualte the `net salary` by using the formula:
    ### Net salary = Gross salary - (Pension + Tax)  

# Pseudocode
Step 1 : Start.

Step 2 : Initialize: `Tax rate = 0.15`,`Pension rate = 0.05`.

Step 3 : Pompt the user to enter their `name`. 

Step 4 : Pompt the user to enter the `base salary`.

Step 5 : Pompt the user to enter the `weekly hour worked`.

Step 6 : Pompt the user to enter the `bonus rate`.

Step 7 : If `Base salary<0` or `Weekly hours worked <0` or `Bonus rate per hour<0` or the imputs are invalid, output error message and goto 13.

Step 8 : `Bonus payment = Weekly hours worked * Bonus rate`.

Step 9 : `Gross salary = Base salary + Bonus payment`.

Step 10 : `Tax = Gross salary * Tax rate`.

Step 11 : `Pension = Gross salary * Pension rate`.
 
Step 12 : `Net salary = Gross salary - (Pension + Tax)`.

Step 13 : Output `Employee name`.

Step 14 : Output `Gross salary`.

Step 15 : Output `Bonus payment`.

Step 16 : Output `Net salary`.

Step 17 : End


# Flowchart
``` mermaid
flowchart 
id1([Start])-->id2[Tax rate = 0.15        Pension rate = 0.05.]
id2-->id3[/Employee Name/]
id3-->id4[/Base salary/]
id4-->id5[/Weekly hours worked/]
id5-->id6[/Bonus rate/]
id6-->id7{Base salary <0 or      Weekly hours worked <0 or   Bonus rate per hour <0 or The imputs are invalid}
id7--False-->id8[Bonus payment = Weekly hours worked * Bonus rate.]
id8-->id9[Gross salary = Base salary + Bonus payment ]
id9-->id10[Tax = Gross salary * Tax rate]
id10-->id11[Pension = Gross salary * Pension rate]
id11-->id12["Net salary = Gross salary - (Pension + Tax)"]
id12-->id13[/Employee Name /]
id13-->id14[/Gross salary /]
id14-->id15[/Bonus payment /]
id15-->id16[/Net salary /]
id16-->id17([End])
id7--True-->id18[/Error message/]
id18-->id17

```
