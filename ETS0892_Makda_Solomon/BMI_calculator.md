# Problem Analysis
**Goal**: To create a program that calculates the Body Mass Index (BMI) of multiple people and classifies their weight status.
1.**Inputs**:
The number of people that there BMI will be calculated.
For each person:
Weight (in kilograms)
Height (in meters)
2.**Processing**:
Calculate BMI using the formula:
BMI = weight / (height * height)
Compare the calculated BMI against predefined ranges to determine the weight category:
BMI < 18.5: Underweight
18.5 ≤ BMI ≤ 24.9: Healthy weight
25 ≤ BMI < 29.9: Overweight
BMI ≥ 30: Obese
3.**Outputs**:
Display the BMI and weight category for each individual.
# Algorithm
	Start the program.
	Initialize a loop to process multiple persons.
	For each person:
	Prompt the user to enter weight (in kg).
	Prompt the user to enter height (in meters).
	Calculate the BMI using the formula: BMI=weight/(height×height)
	Determine weight status:
	If BMI < 18.5, classify as "Underweight".
	If 18.5 ≤ BMI < 24.9, classify as "Normal weight".
	If BMI ≥ 25, classify as "Overweight".
	If BMI ≥ 30, display: "You are obese!"
	Display the BMI and the weight status.
	End.
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





