# Problem Analysis
## Inputs
1. Number of individuals whose BMI needs to be calculated`(num)`.
2. The weight of each indidvidual in `kilograms(w)` and their height in `meters(h)`.
## Output
1. The BMI of each individual
2. Their weight group. 
## Operations
1. Calculate the BMI.
2. Assign a weight group depending on the BMI. `Under weight (BMI <= 18.5)`, `healthy weight ( BMI >18.5 and <25)` and over `weight(BMI >=25)`.
# Pseudocode
Step 1 : Start.

Step 2 : Propmt the user to enter the number of individuals `(num)`.

Step 3 : For every individual from 1 to `num1`:
     
     Step 3.1 : Prompt the user to enter their `height(m)`.
     Step 3.2 : Prompt the user to enter their `weight(kg)`.
     Step 3.3 : Calculate the BMI using the formula `BMI = (weight/(height^2))`.
     Step 3.4 : Output the BMI.
     Step 3.5 : find the weight group base on the BMI.
         Step 3.5.1 : if `BMI <= 18.5`, weight group is `underweight`.
         Step 3.5.2 : if  `BMI >18.5 and <25`, weight group is `healthy weight`.
         Step 3.5.3 : if `BMI >=25`, weight group is `overweight`.
     Step 3.6 :Output the weight group
     
 Step 4 : Out put the BMI and the weight group.
 
 Step 5 : End.


# Flowchart



``` mermaid
flowchart 
id1([Start])-->id2[/input: Number of individuals/]
id2-->id3{Counter < num}

id3--True-->id4[/input: Weight/]
id4-->id5[/input: Height/]
id5-->id6["BMI=Weight/(Height*Height)"] 
id6-->id14[/Output: BMI/]
id14-->id7{BMI<=18.5}
id7--False--->id8{18.5 < BMI < 25}
id8--False-->id9[Weight group = Over weight]
id9--->id10[/Output: Weight group/]
id7--True--->id11[Weight group = Under weight]
id11--->id10
id8--True---->id12[Weight group = Healthy weight]
id12--->id10

id3--False---------->id13([End])
id10-->id14[Counter++]
id14-->id3
```
