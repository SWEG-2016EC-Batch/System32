# Problem Analysis
This program calculates a student's total mark based on scores from different assessments (test, quiz, project, assignment, and final exam) and assigns a grade based on the total mark.
Inputs
Test Score (test): Score out of 15%.
Quiz Score (quiz): Score out of 5%.
Project Score (project): Score out of 20%.
Assignment Score (assignment): Score out of 10%.
Final Exam Score (final_exam): Score out of 50%.
processing 
Total Mark:
total_mark = test + quiz + project + assignment + final_exam
Grade Determination:
Compare total_mark against predefined grade ranges.
Outputs
Total Mark (total_mark): Sum of all input scores.
Grade letter according to sum of input scores

# pseudo code
step 1. Start
step 2. Input test score (out of 15%).
step 3. Input quiz score (out of 5%).
step 4. Input project score (out of 20%).
step 5. Input assignment score (out of 10%).
step 6. Input final exam score (out of 50%).
step 7. Calculate total_mark = test + quiz + project + assignment + final_exam.
step 8. determine the range which the total mark falls
   step 8.1. If total_mark is between 90 and 100:
       Output grade = A+.
   step 8.2. Else if total_mark is between 80 and 89:
       Output grade = A.
   step 8.3. Else if total_mark is between 70 and 79:
       Output grade = B+.
   step 8.4. Else if total_mark is between 60 and 69:
       Output grade = B.
   step 8.5. Else if total_mark is between 55 and 59:
       Output grade = C+.
   step 8.6. Else if total_mark is between 45 and 54:
       Output grade = C.
   step 8.7. Else if total_mark is between 30 and 44:
       Output grade = D.
   step 8.8. Else if total_mark is between 0 and 29:
       Output grade = F.
step 9. Output total_mark and corresponding grade.
step 10. End
