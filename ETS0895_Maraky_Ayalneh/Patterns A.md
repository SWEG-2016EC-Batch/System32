#  Printing Patterns 

 This program generates a variety of patterns using nested loops. The patterns include numeric grids, alphabet sequences, triangular structures, and star-based designs. Each pattern is displayed in a formatted manner using nested `for` loops, with careful attention to spacing, alignment, and conditions.

### Input
- No external input is required; all values and conditions are hardcoded into the program.

### Process
1. **Numeric Grid**: 
   - Use two nested `for` loops. The outer loop controls rows, while the inner loop prints numbers `1` to `5` repeatedly.

2. **Alphabet Rectangle**:
   - Use a `char` variable starting from `'A'`. Increment the character inside nested loops to print sequential alphabets in a rectangular format.

3. **Right-Angled Triangle of Numbers**:
   - Use nested loops, with the inner loop printing numbers incrementally up to the current row number.

4. **Inverted Pyramid of Numbers**:
   - Use nested loops with a decreasing sequence of numbers and leading spaces for alignment.

5. **Alphabet Triangle**:
   - Use nested loops to print alphabets incrementally in each row, starting from `'A'`.

6. **Lowercase Alphabet Grid**:
   - Use nested loops to print a grid of lowercase letters (`'a'` to `'e'`).

7. **Hollow Square of Stars**:
   - Use nested loops and conditional statements to print `*` only on the borders of the square.

8. **Inverted Right-Angled Triangle of Stars**:
   - Use nested loops with the number of stars decreasing in each subsequent row.

9. **Hollow Inverted Triangle**:
   - Use nested loops with conditions to print stars `*` only at specific positions in each row.

10. **Pyramid of Stars**:
    - Use nested loops to print an increasing number of stars `*` in a pyramid shape, with appropriate spacing for alignment.

11. **Inverted Pyramid of Stars**:
    - Use nested loops to print a decreasing number of stars `*` in a reverse pyramid, with leading spaces for alignment.

12. **Hollow Pyramid of Stars**:
    - Use nested loops and conditions to print stars only at the edges of the pyramid, with spaces in between.

### Output
- **Numeric Patterns**: Displayed as grids, triangles, and pyramids of numbers.
- **Alphabet Patterns**: Displayed as grids or triangular formations of uppercase or lowercase letters.
- **Star Patterns**: Displayed in various shapes like squares, triangles, pyramids (filled and hollow).

----
## Pseudocode
### Start
1. **Numeric Grid**
   1.1 Initialize a loop `i` from 1 to 5 for rows.  
   1.2 Inside this loop, initialize another loop `j` from 1 to 5 for columns.  
   1.3 Print the value of `j` followed by a space.  
   1.4 After the inner loop ends, print a newline to move to the next row.  

2. **Alphabet Rectangle**
   2.1 Initialize a variable `char` to `'A'`.  
   2.2 Initialize a loop `i` from 1 to 4 for rows.  
   2.3 Inside this loop, initialize another loop `j` from 1 to 6 for columns.  
   2.4 Print the value of `char` followed by a space.  
   2.5 Increment `char` after each print.  
   2.6 After the inner loop ends, print a newline to move to the next row.  

3. **Right-Angled Triangle of Numbers**
   3.1 Initialize a loop `i` from 1 to 5 for rows.  
   3.2 Set a variable `number` to 1 at the start of each row.  
   3.3 Inside this loop, initialize another loop `j` from 1 to `i` for columns.  
   3.4 Print the value of `number` followed by a space.  
   3.5 Increment `number` after each print.  
   3.6 After the inner loop ends, print a newline to move to the next row.  

4. **Inverted Pyramid of Numbers**
   4.1 Initialize a loop `i` from 1 to 5 for rows.  
   4.2 Print leading spaces equal to `(5 - i)` for alignment.  
   4.3 Set a variable `number` to `i`.  
   4.4 Inside this loop, initialize another loop `j` from 1 to `i` for columns.  
   4.5 Print the value of `number` followed by a space.  
   4.6 Decrement `number` after each print.  
   4.7 After the inner loop ends, print a newline to move to the next row.  

5. **Alphabet Triangle**
   5.1 Initialize a loop `i` from 1 to 5 for rows.  
   5.2 Set a variable `letter` to `'A'`.  
   5.3 Inside this loop, initialize another loop `j` from 1 to `i` for columns.  
   5.4 Print the value of `letter` followed by a space.  
   5.5 Increment `letter` after each print.  
   5.6 After the inner loop ends, print a newline to move to the next row.  

6. **Lowercase Alphabet Grid**
   6.1 Initialize a loop `i` from 1 to 5 for rows.  
   6.2 Inside this loop, initialize another loop `letter` from `'a'` to `'e'` for columns.  
   6.3 Print the value of `letter` followed by a space.  
   6.4 After the inner loop ends, print a newline to move to the next row.  

7. **Hollow Square of Stars**
   7.1 Initialize a loop `i` from 1 to 5 for rows.  
   7.2 Inside this loop, initialize another loop `j` from 1 to 5 for columns.  
   7.3 Check if `i` is 1 or 5, or if `j` is 1 or 5.  
   7.4 If the condition is true, print `*`; otherwise, print a space.  
   7.5 After the inner loop ends, print a newline to move to the next row.  

8. **Inverted Right-Angled Triangle of Stars**
   8.1 Initialize a loop `i` from 5 down to 1 for rows.  
   8.2 Inside this loop, initialize another loop `j` from 1 to `i` for columns.  
   8.3 Print `*` followed by a space.  
   8.4 After the inner loop ends, print a newline to move to the next row.  

9. **Hollow Inverted Triangle**
   9.1 Initialize a loop `i` from 6 down to 1 for rows.  
   9.2 Inside this loop, initialize another loop `j` from 1 to `i` for columns.  
   9.3 Check if `i` is 6, or `j` is 1, or `j` is `i`.  
   9.4 If the condition is true, print `*`; otherwise, print a space.  
   9.5 After the inner loop ends, print a newline to move to the next row.  

10. **Pyramid of Stars**
    10.1 Initialize a loop `i` from 1 to 5 for rows.  
    10.2 Print leading spaces equal to `(5 - i)` for alignment.  
    10.3 Inside this loop, initialize another loop `j` from 1 to `i`.  
    10.4 Print `*` followed by a space.  
    10.5 After the inner loop ends, print a newline to move to the next row.  

11. **Inverted Pyramid of Stars**
    11.1 Initialize a loop `i` from 5 down to 1 for rows.  
    11.2 Print leading spaces equal to `(5 - i)` for alignment.  
    11.3 Inside this loop, initialize another loop `j` from 1 to `i`.  
    11.4 Print `*` followed by a space.  
    11.5 After the inner loop ends, print a newline to move to the next row.  

12. **Hollow Pyramid of Stars**
    12.1 Initialize a loop `i` from 1 to 5 for rows.  
    12.2 Print leading spaces equal to `(5 - i)` for alignment.  
    12.3 Inside this loop, initialize another loop `j` from 1 to `(2 * i - 1)`.  
    12.4 Check if `j` is 1, `j` is `(2 * i - 1)`, or `i` is 5.  
    12.5 If the condition is true, print `*`; otherwise, print a space.  
    12.6 After the inner loop ends, print a newline to move to the next row.  
### End


