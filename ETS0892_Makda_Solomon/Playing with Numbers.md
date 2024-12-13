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

# Algorithm
1. **Start**
2. Prompt the user to enter an integer.
3. Display the menu of options.
4. Repeat until the user chooses to exit:
   - Read the user’s choice.
   - Based on the choice:
     - **Option 1**: Reverse the number and display it.
     - **Option 2**: Count the number of digits and display the count.
     - **Option 3**: Calculate and display the product of even digits.
     - **Option 4**: Display the first and last digit, and their sum.
     - **Option 5**: Swap the first and last digit and display the new number.
     - **Option 6**: Check if the number is a palindrome and display the result.
     - **Option 7**: Calculate and display the frequency of each digit.
     - **Option 8**: Check if the number is a Strong number and display the result.
     - **Option 9**: Check if the number is a Perfect number and display the result.
     - **Option 10**: Exit the program.
5. **End**

# Pseudocode

START

    DECLARE num AS INTEGER
    
    PRINT "Enter your number: "
    INPUT num

    DECLARE choice AS INTEGER

    DO
        PRINT "Choose one of the following options:"
        PRINT "1. Reverse of the number"
        PRINT "2. Number of digits"
        PRINT "3. Product of even digits"
        PRINT "4. Print the first and last digit"
        PRINT "5. Swap first and last digit"
        PRINT "6. Check if palindrome"
        PRINT "7. Frequency of each digit"
        PRINT "8. Check if strong number"
        PRINT "9. Check if perfect number"
        PRINT "10. Exit"
        PRINT "Enter your choice: "
        INPUT choice

        SWITCH choice
            CASE 1:
                CALL reverseNumber(num)
            CASE 2:
                CALL countDigits(num)
            CASE 3:
                CALL productOfEvenDigits(num)
            CASE 4:
                CALL printFirstAndLastDigits(num)
            CASE 5:
                CALL swapFirstAndLastDigit(num)
            CASE 6:
                CALL checkPalindrome(num)
            CASE 7:
                CALL digitFrequency(num)
            CASE 8:
                CALL checkStrongNumber(num)
            CASE 9:
                CALL checkPerfectNumber(num)
            CASE 10:
                PRINT "Exiting the program."
            DEFAULT:
                PRINT "Invalid choice. Please try again."
        END SWITCH

    WHILE choice != 10
END

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


