# Pattern Generator 

This program generates various patterns based on user input. Users specify the number of rows and columns (if applicable) and choose from 12 predefined patterns. The patterns include rectangles, pyramids, and hollow shapes made with stars, numbers, or alphabets.

### **Input**
1. **`rows`**: The number of rows for the selected pattern.
2. **`columns`**: The number of columns for some patterns (e.g., rectangles or grids).
3. **`choice`**: A number between 1 and 14 to select the desired pattern.

### **Process**
1. **User Interaction**:
   - Prompt the user to enter the number of rows and columns.
   - Prompt the user to select a pattern by entering a number.
2. **Pattern Selection**:
   - Use a `switch` statement to handle the user's choice.
   - Depending on the choice, use nested loops to generate the pattern:
     - For stars (`*`), numbers, or alphabets, adjust logic to create specific shapes.
     - Handle alignment, inverted patterns, or hollow structures as required.
3. **Invalid Input Handling**:
   - Display an error message for invalid choices.

### **Output**
1. A visual representation of the selected pattern is printed to the console.

----
## **Pseudocode**
START
1. Declare variables: `rows`, `columns`, `choice`.
2. Prompt user to enter the number of rows. Read input into `rows`.
3. Prompt user to enter the number of columns. Read input into `columns`.
4. Prompt user to select a pattern by entering a number (1–14). Read input into `choice`.
5. Use a SWITCH-CASE structure on `choice`:
 
   CASE 1: 
      a. Print "Rectangle of stars".
      b. Loop `i` from 0 to `rows - 1`:
         i. Loop `j` from 0 to `columns - 1`:
             Print "* ".
         ii. Print a newline.
      c. End loop.

   CASE 2: 
      a. Print "Square of stars".
      b. Repeat similar logic as CASE 1.
      c. End loop.

   CASE 3:
      a. Print "Half pyramid of stars".
      b. Loop `i` from 0 to `rows - 1`:
         i. Loop `j` from 0 to `i`:
             Print "* ".
         ii. Print a newline.
      c. End loop.

   CASE 4:
      a. Print "Half pyramid of numbers".
      b. Loop `i` from 1 to `rows`:
         i. Loop `j` from 1 to `i`:
             Print `j`.
         ii. Print a newline.
      c. End loop.

   CASE 5:
      a. Print "Inverted half pyramid of stars".
      b. Loop `i` from `rows` to 1:
         i. Loop `j` from 1 to `i`:
             Print "* ".
         ii. Print a newline.
      c. End loop.

   CASE 6:
      a. Print "Half pyramid of alphabets".
      b. Loop `i` from 1 to `rows`:
         i. Initialize `ch` to 'A'.
         ii. Loop `j` from 1 to `i`:
             Print `ch`.
             Increment `ch`.
         iii. Print a newline.
      c. End loop.

   CASE 7:
      a. Print "Inverted half pyramid of alphabets".
      b. Repeat logic similar to CASE 6, but loop `i` in reverse.

   CASE 8:
      a. Print "Full pyramid of stars".
      b. Loop `i` from 1 to `rows`:
         i. Loop to print spaces (`rows - i` spaces).
         ii. Loop to print stars (`i` stars).
         iii. Print a newline.
      c. End loop.

   CASE 9:
      a. Print "Inverted full pyramid of stars".
      b. Repeat similar logic to CASE 8 but reverse the loops.

   CASE 10:
      a. Print "Hollow full pyramid of stars".
      b. Use nested loops to print stars at specific positions.
      c. End loop.

   CASE 11:
      a. Print "Inverted hollow full pyramid of stars".
      b. Use nested loops similar to CASE 10 but in reverse.
      c. End loop.

   CASE 12:
      a. Print "Custom pattern".
      b. Add custom logic if desired.
      c. End.

   CASE 13:
      a. Print "Pattern of numbers".
      b. Loop through rows and columns to print numbers.
      c. End.

   CASE 14:
      a. Print "Pattern of alphabets".
      b. Loop through rows and columns, cycling alphabets.
      c. End.

   DEFAULT:
      Print "Invalid choice!".

7. END

