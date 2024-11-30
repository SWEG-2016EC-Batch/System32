# Problem Analysis
**Goal**: To create a program that calculates the Body Mass Index (BMI) of multiple people and classifies their weight status.
## **Inputs**:
The number of people that there BMI will be calculated.
For each person:
Weight (in kilograms)
Height (in meters)
## **Processing**:
Calculate BMI using the formula:
BMI = weight / (height * height)
Compare the calculated BMI against predefined ranges to determine the weight category:
BMI < 18.5: Underweight
18.5 ≤ BMI ≤ 24.9: Healthy weight
25 ≤ BMI < 29.9: Overweight
BMI ≥ 30: Obese
## **Outputs**:
Display the BMI and weight category for each individual.
# Algorithm
Step1:Start the program.
Step2:Initialize a loop to process multiple persons.
Step3:For each person:
	    Prompt the user to enter weight (in kg).
	   Prompt the user to enter height (in meters).
Step4:Calculate the BMI using the formula: BMI=weight/(height×height)
Step5:Determine weight status:
	   If BMI < 18.5, classify as "Underweight".
	   If 18.5 ≤ BMI < 24.9, classify as "Normal weight".
	   If BMI ≥ 25, classify as "Overweight".
	   If BMI ≥ 30, display: "You are obese!"
Step6:Display the BMI and the weight status.
Step7:End.
# Pseudocode
Start
    PROMPT "Enter the number of people for BMI calculation:"
    READ num

    FOR i FROM 1 TO num DO
        PROMPT "Person ", i, ":"
        
        PROMPT "Enter your weight (kg):"
        READ weight
        
        PROMPT "Enter your height (m):"
        READ height
        
        bmi = weight / (height * height)
        PRINT "Your BMI is:", bmi
        
        IF bmi < 18.5 THEN
            PRINT "You are Underweight!"
        ELSE IF bmi >= 18.5 AND bmi < 24.9 THEN
            PRINT "You have a Normal weight!"
        ELSE IF bmi >= 25 AND bmi < 29.9 THEN
            PRINT "You are Overweight!"
        ELSE
            PRINT "You are Obese!"
        ENDIF
    ENDFOR

    RETURN 0
END
# Flowchart
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












