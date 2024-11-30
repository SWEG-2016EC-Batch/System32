# Problem Analysis
The problem requires the conversion of second into different time forms using the following relation.
`#### 1 Day = 86400 Seconds`
`#### 1 Hour = 3600 Seconds`
`#### 1 Minute = 60 Seconds`
## Inputs
1. File size(in bytes).
## Output
1. The time requred to transfer the file. 
## Operations
1. Calculate the total time in seconds.
   #### Total seconds = File size in bytes/Transfer rate
2. Calculate the amount of days.
   #### Days = Total seconds/86400
3. Calculate the amount of hours.
   #### Hours = (Total seconds%86400)/3600
4. Calculate the amount of minutes.
   #### Minutes = ((Total seconds%86400)%3600)/60
5. Calculate the amount of seconds.
   #### Seconds = ((Total seconds%86400)%3600)%60

# Pseudocode
Step 1 : Start.

Step 2 : Propmt the user to enter the file size.

Step 3 : Initialize Transefer rate = 960.

Step 4 : Total seconds = File size/Transfer rate.

Step 5 : Days = Total seconds/86400.
     
Step 6 : Hours = (Total seconds%86400)/3600.
 
Step 7 : Minutes = ((Total seconds%86400)%3600)/60.

Step 8 : Seconds = ((Total seconds%86400)%3600)%60.

Step 9 : Out put the total time.

Step 10 : End.


# Flowchart
``` mermaid
flowchart 
id1([Start])-->id2[/File size/]
id2-->id3[Transfer rate = 960]
id3-->id4[Total seconds = File size/Transfer rate]
id4-->id5[Days = Total seconds/86400]
id5-->id6["Hours = (Total seconds%86400)/3600"]
id6-->id7["Minutes = ((Total seconds%86400)%3600)/60"]
id7-->id8["Seconds = ((Total seconds%86400)%3600)%60"]
id8-->id9[/Total time/]
id9-->id10([End])





```
