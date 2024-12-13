
# Problem Analysis
## Inputs
1. `Bonus rate per hour`.
2. `Base salary`.
3. `Weekly hours worked`.
## Outputs
1. `Net salary`.
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

Step 2 : Initialize: `Pension rate = 0.07`.

Step 3 : Prompt the user to enter the `base salary`.

Step 4 : Prompt the user to enter the `weekly hour worked`.

Step 5 : If `Weekly hours worked`>40, Prompt the user to enter the `bonus rate`.

Step 6 : If `Base salary<0` or `Weekly hours worked <0` or `Bonus rate per hour<0` or the imputs are invalid, output error message and goto 13.

Step 7 : compute `Tax rate`.

    Step 7.1 : If Gross salary <=200, Tax rate = 0.
    Step 7.2 : If 200< Gross salary <=600, Tax rate = 0.1.
    Step 7.3 : If 600< Gross salary <=1200, Tax rate = 0.15.
    Step 7.4 : If 1200< Gross salary <=2000, Tax rate = 0.2.
    Step 7.5 : If 2000< Gross salary <=3500, Tax rate = 0.25.
    Step 7.6 : If Gross salary >3500, Tax rate = 0.3.

Step 8 : `Bonus payment = Extra worked * Bonus rate`.

Step 9 : `Gross salary = Base salary + Bonus payment`.

Step 10 : `Tax = Gross salary * Tax rate`.

Step 11 : `Pension = Gross salary * Pension rate`.
 
Step 12 : `Net salary = Gross salary - (Pension + Tax)`.

Step 13 : Output `Net salary`.

Step 14 : End


# Flowchart
``` mermaid
flowchart 
id1([Start])-->id2[ Pension rate = 0.05.]
id2-->id4[/Base salary/]
id4-->id5[/Weekly hours worked/]
id5-->id19{Weely hours worked>40?}
id19--True-->id6[/Bonus rate/]
id19--Flase-->id20[Bonus rate = 0]

id6-->id7{Base salary <0? or      Weekly hours worked <0? or   Bonus rate per hour <0? or The imputs are invalid?}
id20-->id7
id7--False-->id8[Bonus payment = Weekly hours worked * Bonus rate.]
id8-->id9[Gross salary = Base salary + Bonus payment ]
id21{Gross salary<=200?}--True-->id22[Tax rate = 0]
id21--False-->id23{200< Gross salary <=600?}--True-->id24[Tax rate = 0.1]
id23--False-->id25{600< Gross salary <=1200?}--True-->id26[Tax rate = 0.15]
id25--False-->id27{1200< Gross salary <=2000?}--True-->id28[Tax rate = 0.2]
id27--False-->id29{2000< Gross salary <=3500?}--True-->id30[Tax rate = 0.25]
id29--False-->id31[Tax rate = 0.3]

id10-->id11[Pension = Gross salary * Pension rate]
id11-->id12["Net salary = Gross salary - (Pension + Tax)"]
id12-->id14[/Gross salary /]
id9-->id21

id16-->id17([End])
id7--True-->id18[/Error message/]
id18-->id17
id31-->id10[Tax = Gross salary * Tax rate]
id30-->id10
id28-->id10
id26-->id10
id24-->id10
id22-->id10
id14-->id15[/Bonus payment/]
id15-->id33[/Tax rate/]
id33-->id34[/Tax amount/]

id34--> id16[/Net salary /]
```
