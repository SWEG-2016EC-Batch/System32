
# Problem Analysis

## Inputs
- The program does not accept user inputs dynamically; instead, it uses fixed values:
  - `n = 5` for most patterns.
  - `rows = 7` and `columns = 8` for the hollow rectangle pattern.
  - `m = 6` for some star patterns.

## Processes
- **Pattern 1:** Prints numbers from 1 to 5 in 5 rows.
  - Outer loop for rows.
  - Inner loop for columns to print numbers from 1 to 5.
- **Pattern 2:** Prints letters from 'A' to 'Z' in a grid of 4 rows and 6 columns.
  - Outer loop for rows.
  - Inner loop for columns to print letters, incrementing the character variable.
- **Pattern 3:** Prints an incremental triangle of numbers.
  - Outer loop for rows.
  - Inner loop prints numbers from 1 to the current row index.
- **Pattern 4:** Prints a right-aligned triangle of decreasing numbers.
  - Outer loop for rows.
  - Inner loop prints spaces followed by numbers in reverse order.
- **Pattern 5:** Prints an incremental triangle of letters.
  - Outer loop for rows.
  - Inner loop prints letters incrementally from 'A'.
- **Pattern 6:** Prints lowercase letters 'a' to 'e' in 5 rows.
  - Outer loop for rows.
  - Inner loop prints letters from 'a' to 'e'.
- **Pattern 7:** Prints a hollow rectangle of stars.
  - Outer loop for rows.
  - Inner loop prints stars only at the boundaries.
- **Pattern 8:** Prints an inverted triangle of stars.
  - Outer loop for rows.
  - Inner loop prints stars in decreasing order.
- **Pattern 9:** Prints a hollow inverted triangle of stars.
  - Outer loop for rows.
  - Inner loop prints stars only at the boundaries or the base.
- **Pattern 10:** Prints a left-aligned triangle of stars.
  - Outer loop for rows.
  - Inner loop prints spaces followed by stars.
- **Pattern 11:** Prints a right-aligned triangle of stars.
  - Outer loop for rows.
  - Inner loop prints spaces followed by stars.
- **Pattern 12:** Prints a hollow left-aligned triangle of stars.
  - Outer loop for rows.
  - Inner loop prints spaces followed by stars only at the boundaries.

## Outputs
- The program prints a variety of patterns:
  - Numeric grids and triangles.
  - Alphabetic grids and triangles.
  - Solid and hollow star patterns.

# Pseudo Code
## Initialize variables
- Set `n = 5` (fixed dimension for most patterns)
- Set `rows = 7` and `columns = 8` (for the hollow rectangle pattern)

---

## Pattern 1: Numbers from 1 to 5 in 5 rows
1. Print "Pattern 1:"
2. Loop `i` from 1 to `n`:
   - Loop `j` from 1 to `n`:
     - Print `j` followed by a space
   - Print a newline
3. Print a blank line

---

## Pattern 2: Letters A to F in 4 rows
1. Print "Pattern 2:"
2. Initialize `letter = 'A'`
3. Loop `i` from 1 to 4:
   - Loop `j` from 1 to 6:
     - Print `letter` followed by a space
     - Increment `letter`
   - Print a newline
4. Print a blank line

---

## Pattern 3: Numbers in an incremental triangle
1. Print "Pattern 3:"
2. Loop `i` from 1 to `n`:
   - Loop `j` from 1 to `i`:
     - Print `j` followed by a space
   - Print a newline
3. Print a blank line

---

## Pattern 4: Decreasing numbers in a right-aligned triangle
1. Print "Pattern 4:"
2. Loop `i` from 1 to `n`:
   - Loop `j` from `n` to `i + 1`:
     - Print two spaces
   - Loop `k` from `i` to 1:
     - Print `k` followed by a space
   - Print a newline
3. Print a blank line

---

## Pattern 5: Letters in an incremental triangle
1. Print "Pattern 5:"
2. Loop `i` from 1 to `n`:
   - Initialize `ch = 'A'`
   - Loop `j` from 1 to `i`:
     - Print `ch` followed by a space
     - Increment `ch`
   - Print a newline
3. Print a blank line

---

## Pattern 6: Lowercase letters a to e in 5 rows
1. Print "Pattern 6:"
2. Loop `i` from 0 to `n - 1`:
   - Loop `ch` from 'a' to 'e':
     - Print `ch` followed by a space
   - Print a newline
3. Print a blank line

---

## Pattern 7: Hollow rectangle
1. Print "Pattern 7:"
2. Loop `i` from 1 to `rows`:
   - Loop `j` from 1 to `columns`:
     - If `i` is 1, `i` is `rows`, `j` is 1, or `j` is `columns`:
       - Print `*` followed by a space
     - Else:
       - Print two spaces
   - Print a newline
3. Print a blank line

---

## Pattern 8: Inverted triangle of stars
1. Print "Pattern 8:"
2. Set `m = 6`
3. Loop `i` from `m` to 1:
   - Loop `j` from 1 to `i`:
     - Print `*`
   - Print a newline
4. Print a blank line

---

## Pattern 9: Hollow inverted triangle
1. Print "Pattern 9:"
2. Loop `i` from `m` to 1:
   - Loop `j` from 1 to `i`:
     - If `i` is `m`, `j` is 1, or `j` is `i`:
       - Print `*`
     - Else:
       - Print a space
   - Print a newline
3. Print a blank line

---

## Pattern 10: Left-aligned triangle of stars
1. Print "Pattern 10:"
2. Loop `i` from 1 to `m`:
   - Loop `j` from 1 to `m - i`:
     - Print a space
   - Loop `k` from 1 to `i`:
     - Print `*` followed by a space
   - Print a newline
3. Print a blank line

---

## Pattern 11: Right-aligned triangle of stars
1. Print "Pattern 11:"
2. Loop `i` from `m` to 1:
   - Loop `j` from 0 to `m - i - 1`:
     - Print a space
   - Loop `k` from 1 to `i`:
     - Print `*` followed by a space
   - Print a newline
3. Print a blank line

---

## Pattern 12: Hollow left-aligned triangle
1. Print "Pattern 12:"
2. Loop `i` from 1 to `m`:
   - Loop `j` from `i` to `m - 1`:
     - Print a space
   - Loop `k` from 1 to `i`:
     - If `k` is 1, `k` is `i`, or `i` is `m`:
       - Print `*` followed by a space
     - Else:
       - Print two spaces
   - Print a newline
3. Print a blank line

---

## End program
- Return 0
