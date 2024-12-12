# Total mark and Grade

## Problem analysis 
Create a program to calculate the total marks for a student based on input for test, quiz, project, assignment, and final exam marks. The program also determines the corresponding grade based on the total marks.

## Inputs
- Marks for the following:
  - Test (out of 15)
  - Quiz (out of 5)
  - Project (out of 20)
  - Assignment (out of 10)
  - Final Exam (out of 50)

 ## Process
1. Accept marks for all components.
2. Calculate the total mark by summing up the input marks.
3. Determine the grade using conditional statements based on the total mark.
4. Output the total mark and the corresponding grade.

## Outputs
- Total mark (sum of all input marks).
- Grade based on total marks:
  - A: 90 or above
  - B: 80–89
  - C: 75–79
  - D: 60–74
  - F: Below 45

```mermaid
flowchart TD
    aA([Start])-->InputMarks[/Input marks for test, quiz, project, assignment, and final exam/]
    InputMarks-->CalculateTotal[Calculate total mark: total_mark = test + quiz + project + assignment + final_exam]
    CalculateTotal-->CheckGrade{Is total_mark >= 90?}    
    CheckGrade--Yes-->GradeA[Assign Grade: A]-->OutputResult
    CheckGrade--No-->CheckGradeB{Is total_mark >= 80?}    
    CheckGradeB--Yes-->GradeB[Assign Grade: B]-->OutputResult
    CheckGradeB--No-->CheckGradeC{Is total_mark >= 75?}
    CheckGradeC--Yes-->GradeC[Assign Grade: C]-->OutputResult
    CheckGradeC--No-->CheckGradeD{Is total_mark >= 60?} 
    CheckGradeD--Yes-->GradeD[Assign Grade: D]-->OutputResult
    CheckGradeD--No-->GradeF[Assign Grade: F]-->OutputResult    
    OutputResult[/Output total_mark and grade/]-->End([End])
