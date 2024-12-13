# Problem Analysis
This program calculates a student's total mark based on scores from different assessments (test, quiz, project, assignment, and final exam) and assigns a grade based on the total mark.

### Inputs
- **Test Score (test)**: Score out of 15%.
- **Quiz Score (quiz)**: Score out of 5%.
- **Project Score (project)**: Score out of 20%.
- **Assignment Score (assignment)**: Score out of 10%.
- **Final Exam Score (final_exam)**: Score out of 50%.

### Processing
- **Total Mark**:
  `total_mark = test + quiz + project + assignment + final_exam`
- **Grade Determination**:
  Compare `total_mark` against predefined grade ranges.

### Outputs
- **Total Mark (total_mark)**: Sum of all input scores.
- **Grade**: Letter grade based on the total mark.

# Pseudocode
1. Start
2. Input test score (out of 15%).
3. Input quiz score (out of 5%).
4. Input project score (out of 20%).
5. Input assignment score (out of 10%).
6. Input final exam score (out of 50%).
7. Calculate `total_mark = test + quiz + project + assignment + final_exam`.
8. Determine the grade range:
   - If `total_mark` is between 90 and 100: Output grade = **A+**.
   - Else if `total_mark` is between 80 and 89: Output grade = **A**.
   - Else if `total_mark` is between 70 and 79: Output grade = **B+**.
   - Else if `total_mark` is between 60 and 69: Output grade = **B**.
   - Else if `total_mark` is between 55 and 59: Output grade = **C+**.
   - Else if `total_mark` is between 45 and 54: Output grade = **C**.
   - Else if `total_mark` is between 30 and 44: Output grade = **D**.
   - Else if `total_mark` is between 0 and 29: Output grade = **F**.
9. Output `total_mark` and corresponding grade.
10. End.
