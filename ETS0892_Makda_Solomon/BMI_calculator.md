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
flowchart 
id1([Start])-->id2[/input: Number of individuals/]
id2-->id3{Counter < num}

id3-->id4[/input: Weight/]
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
id10-->id13([End])












