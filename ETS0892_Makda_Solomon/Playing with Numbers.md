# Problem Analysis

## Problem Analysis
The program will accept an integer input from the user and provide a menu of operations that can be performed on that integer, such as reversing the number, counting its digits, calculating the product of even digits, checking if it's a palindrome, and more.

## Requirements

## Inputs
- An integer input from the user (number).
- User's choice from the menu for the operation to perform.

## process
1. Reverse the number.
2. Count the number of digits.
3. Compute the product of even digits.
4. Calculate the sum of the first and last digit.
5. Swap the first and last digit.
6. Check if the number is a palindrome.
7. Display the frequency of each digit.
8. Check if the number is a "Strong" number.
9. Check if the number is a "Perfect" number.
   
## Outputs
- Results based on the chosen operation:
  - Reversed number.
  - Digit count.
  - Sum of first and last digit.
  - Swapped first and last digit.
  - Palindrome check result.
  - Frequency of digits.
  - Strong number check result.
  - Perfect number check result.


## Constraints
- The input number should be a positive integer.
- The program should handle edge cases, such as zero or single-digit numbers.


# Flowchart

```mermaid
flowchart TD
    A[Start] --> B[Enter an integer]
    B --> C{Display Menu}
    C --> D[Reverse Number]
    C --> E[Count Digits]
    C --> F[Product of Even Digits]
    C --> G[Print First and Last Digits]
    C --> H[Swap First and Last Digits]
    C --> I[Check Palindrome]
    C --> J[Frequency of Each Digit]
    C --> K[Check Strong Number]
    C --> L[Check Perfect Number]
    C --> M[Exit]
    D --> C
    E --> C
    F --> C
    G --> C
    H --> C
    I --> C
    J --> C
    K --> C
    L --> C
    M --> N[End]


