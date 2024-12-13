
# Problem Analysis
## Inputs
1. `Test score`.
2. `Quiz score`.
3. `Project score`.
4. `Assignment score`.
5. `Final score`.
## Outputs
1. `Grade`.
## Operations
1. Prompt user to enter their `Test score`.
    
    1.1.If `Test score`>15 or `Test score`<0, output error message and terminate program.
    
    1.2.Else goto 2
2. Prompt user to enter their `Quiz score`.
    
    2.1.If `Quiz score`>5 or `Quiz score`<0, output error message and terminate program.
    
    2.2.Else goto 3
3. Prompt user to enter their `Project score`.
    
    3.1.If `Project score`>20 or `Project score`<0, output error message and terminate program.
    
    3.2.Else goto 4
4. Prompt user to enter their `Assignment score`.
    
    4.1.If `Assignment score`>10 or `Assignment score`<0, output error message and terminate program.
    
    4.2.Else goto 5
5. Prompt user to enter their `Final score`.
    
    5.1.If `Fianl score`>50 or `Final score`<0, output error message and terminate program.
    
    5.2.Else goto 6
6. Calcualte the `Total score`

    ### Total score = Test score + Quiz score + Project score + Assignment score + Final score 
    
7. Calcualte the `Grade`

    7.1. If `Total score` >= 90,  `Grade` = A+

    7.2. if `Total score` < 90 and `Test score`>= 80 ,`Grade` = A
    
    7.3. if `Total score` < 80 and `Test score`>= 75,`Grade` = B+

    7.4. if `Total score` < 75 and `Test score`>= 60 ,`Grade` = B

    7.5. if `Total score` < 60 and `Test score`>= 55 ,`Grade` = C+

    7.6. if `Total score` < 55 and `Test score`>= 45 ,`Grade` = C

    7.7. if `Total score` < 45 and `Test score`>= 30 ,`Grade` = D

    7.8. if `Total score` < 30 ,`Grade` = F
    
# Pseudocode
Step 1 : Start.

Step 2 : Prompt the user to enter their `Test score`

Step 3 : Prompt the user to enter their `Quiz score`

Step 4 : Prompt the user to enter their `Project score`

Step 5 : Prompt the user to enter their `Assignment score`

Step 6 : Prompt the user to enter their `Fianl score`

Step 7 : `Total score`=`Test score` + `Quiz score` + `Project score` + `Assignment score` + `Final score` 

Step 8 : Compute `Grade`    

    Step 7.1 : If Total score  >=90, Grade = A+.
    Step 7.2 : If 80=< Test score <90, Grade = A.
    Step 7.3 : If 75=< Test score <80, Grade = B+.
    Step 7.4 : If 60=< Test score <75, Grade = B.
    Step 7.5 : If 55=< Test score <60, Grade = C+.
    Step 7.6 : If 45=< Test score <55, Grade = C.
    Step 7.7 : If 30=< Test score <45, Grade = D.
    Step 7.8 : If Total score <30, Grade = F.
Step 8 :  Output `Total score` and `Grade`.

Step 9 : End


# Flowchart
``` mermaid
flowchart
id1([Start])-->id2[/Test score/]
id2-->id3{Test score>15 or Test score<0?}
id3--True-->id31[/Error message/]
id3--False-->id4[/Quiz score/]
id4-->id5{Qest score>5 or Quiz score<0?}
id5--True-->id31
id5--False-->id6[/Project score/]
id6-->id7{Project score>20 or Project score<0?}
id7--True-->id31
id7--False-->id8[/Assignment score/]
id8-->id9{Assignment score>10 or Assignment score<0?}
id9--True-->id31
id9--False-->id10[/Final exam score/]
id10-->id11{Final exam score>50 or Final score<0?}
id11--True-->id31
id11--False-->id12[Total score = Test score + Quiz score + Project score + Assignment score + Final score]
id12-->id13{Total score>=90?}
id13--True-->id27[Grade = A+]
id13--False-->id14{80=< Test score <90?}
id14--True-->id26[Grade = A]
id14--False-->id15{75=< Test score <80?}
id15--True-->id25[Grade = B+]
id15--False-->id16{60=< Test score <75?}
id16--True-->id24[Grade = B]
id16--False-->id17{55=< Test score <60?}
id17--True-->id23[Grade = C+]
id17--False-->id18{45=< Test score <55?}
id18--True-->id22[Grade = C]
id18--False-->id19{30=< Test score <45?}
id19--True-->id21[Grade = D]
id19--False-->id28[Grade = F]
id28-->id29[/Total score and
Grade/]
id21-->id29
id22-->id29
id23-->id29
id24-->id29
id25-->id29
id26-->id29
id27-->id29
id29-->id30([End])
id31-->id30
```