# Problem Analysis

The goal of the program is to calculate the Body Mass Index (BMI) for multiple people, determine their weight category, and provide feedback based on their BMI.

1. **Inputs**:
   - The number of people whose BMI needs to be calculated (`num`).
   - For each person:
     - Weight in kilograms (`weight`).
     - Height in meters (`height`).

2. **Processing**:
   - Calculate BMI using the formula:  
     `BMI = weight / (height * height)`
   - Compare the calculated BMI against predefined ranges to determine the weight category:
     - `BMI < 18.5`: Underweight
     - `18.5 ≤ BMI ≤ 24.9`: Healthy weight
     - `25 ≤ BMI < 29.9`: Overweight
     - `BMI ≥ 30`: Obese

3. **Outputs**:
   - Display the BMI for each individual.
   - Provide feedback on their weight category.

---

# Algorithm

1. **Start.**
2. Prompt the user to input the number of people (`num`).
3. For each person from 1 to `num`:
   - Prompt the user to input their weight in kilograms (`weight`).
   - Prompt the user to input their height in meters (`height`).
   - Calculate BMI using the formula:  
     `BMI = weight / (height * height)`.
   - Display the calculated BMI.
   - Determine the weight category:
     - If `BMI < 18.5`, display: "You are underweight!"
     - If `18.5 ≤ BMI ≤ 24.9`, display: "You have a healthy weight!"
     - If `25 ≤ BMI < 29.9`, display: "You are overweight!"
     - If `BMI ≥ 30`, display: "You are obese!"
4. **End.**

---

# Flowchart

```mermaid
flowchart TD
    id1([Start]) --> id2[/Input: Number of people for BMI calculation/]
    id2 --> id3{Counter <= num}
    id3 --True--> id4["Initialize Person: Counter"]
    id4 --> id5[/Input: Weight in kilograms/]
    id5 --> id6[/Input: Height in meters/]
    id6 --> id7["BMI = Weight / (Height * Height)"]
    id7 --> id8[/Output: BMI/]
    id8 --> id9{BMI < 18.5}
    id9 --True--> id10["Output: Underweight"]
    id9 --False--> id11{BMI >= 18.5 && BMI <= 24.9}
    id11 --True--> id12["Output: Healthy weight"]
    id11 --False--> id13{BMI >= 25 && BMI < 29.9}
    id13 --True--> id14["Output: Overweight"]
    id13 --False--> id15{BMI >= 30}
    id15 --True--> id16["Output: Obese"]
    id10 --> id17["Increment Counter"]
    id12 --> id17
    id14 --> id17
    id16 --> id17
    id17 --> id3
    id3 --False--> id18([End])

```
