# Problem Analysis
This program performs various operations on a number based on the user's choice from a menu.

## Inputs
- **Number**: An integer provided by the user.
- **Choice**: The operation selected from the menu.

## Processes
1. **Reverse the Number**:
   - Extract digits using modulo (%) and append them to a reversed number.
   - Remove digits using division by 10.

2. **Count the Number of Digits**:
   - Divide the number by 10 repeatedly, incrementing a counter.

3. **Find the Product of Even Digits**:
   - Extract each digit and check if it's even.
   - Multiply all even digits, handling cases with no even digits.

4. **Find and Sum the First and Last Digit**:
   - Extract the last digit using modulo (%).
   - Find the first digit by dividing repeatedly until less than 10.
   - Compute the sum of the first and last digits.

5. **Swap the First and Last Digit**:
   - Extract the first and last digits.
   - Reverse the number to reorder digits.
   - Swap the first and last digits, then restore the original order.

6. **Check if the Number is a Palindrome**:
   - Reverse the number and compare it with the original.

7. **Find the Frequency of Each Digit**:
   - Use an array to count occurrences of each digit.

8. **Check if the Number is a Strong Number**:
   - Compute the factorial of each digit and sum them.
   - Compare the sum to the original number.

9. **Check if the Number is a Perfect Number**:
   - Sum all divisors of the number (excluding itself).
   - Check if the sum equals the original number.

10. **Exit**:
    - End the program.

## Outputs
- Results based on the chosen operation:
  - Reversed Number
  - Digit Count
  - Product of Even Digits
  - First and Last Digit (and their sum)
  - Swapped First and Last Digit
  - Palindrome Check
  - Frequency of Digits
  - Strong Number Check
  - Perfect Number Check
  - Exit Message

# Pseudo Code
1. **Start**
2. Input the number.
3. Display the menu:
   - 1: Reverse the number.
   - 2: Count the digits.
   - 3: Product of even digits.
   - 4: First and last digit (sum them).
   - 5: Swap first and last digit.
   - 6: Palindrome check.
   - 7: Frequency of each digit.
   - 8: Strong number check.
   - 9: Perfect number check.
   - 10: Exit.
4. Input the user's choice.
5. Perform the selected operation:
   - **Case 1**: Reverse the number.
   - **Case 2**: Count digits.
   - **Case 3**: Product of even digits.
   - **Case 4**: First and last digit (sum them).
   - **Case 5**: Swap first and last digit.
   - **Case 6**: Palindrome check.
   - **Case 7**: Frequency of digits.
   - **Case 8**: Strong number check.
   - **Case 9**: Perfect number check.
   - **Case 10**: Exit.
6. Output the result of the operation.
7. **End**
