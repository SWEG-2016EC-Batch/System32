# Problem Analysis
## Inputs
1. The base number(x).
2. The exponent(y).
## Output
1. The base number raised to its exponent
# Operations
1. Calculate the result when the base number is raised to the exponent using a for loop.where the base number is multiplied by its self and where the exponent decides the number of loops.
### Number of miles =(Fuel capacity of the automobile/Number of miles per gallon)

# Psudocode
Step 1 : Start.

Step 2 : Initialize result = 1.

Step 3 : Propmt the user to enter the the base number(x).

Step 4 : Propmt the user to enter the exponent(y).

Step 5 : if y<0, out put an error message.

Step 6 : if y>=0, for each value of the from 1 to y: result*=x.
 
Step 7 : Output result.

Step 8 : End.


# Flowchart
``` mermaid
flowchart 
id1([Start])-->id2[Result=1]
id2-->id3[/"Base number(x)"/]
id3-->id4[/"Exponent(y)"/]
id4-->id5{Exponent >= 0}
id5--True--->id6{Counter< Exponent}
id6--True--->id7["Result*=Base number(x)"]
id7--->id12[counter++]
id12-->id6
id6--False----->id10[/Result/]
id5--False-->id9[/Error message/]
id9-->id11([End])
id10-->id11
```
