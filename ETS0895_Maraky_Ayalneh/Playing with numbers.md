# Playing with numbers 

## Problem analysis
The program  allows the user to perform various operations on an integer, such as reversing the number, counting digits, checking for palindromes, swapping first and last digits, and more, through a menu-driven interface.

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


# Flowchart    
```mermaid
flowchart TD
    a([Start])-->InputNumber[/Input an integer from the user/]
    InputNumber-->Menu[/Display Menu Options/]
    Menu-->Choice{User Choice}
    Choice--1:Reverse the Number-->ReverseNumber[Reverse the number]
    ReverseNumber-->Result1[/Display Reversed Number/]-->Menu    
    Choice--2: Count the Digits-->CountDigits[Count the total digits]
    CountDigits-->Result2[/Display Digit Count/]-->Menu    
    Choice--3:product of Even Digits--> ProductEven[Calculate the product of even digits]
    ProductEven-->Result3[/Display Product/]-->Menu 
    Choice--4: Sum of First and Last Digits-->SumFirstLast[Compute sum of first and last digit]
    SumFirstLast-->Result4[/Display the Sum/]-->Menu    
    Choice--5: Swap First and Last Digits-->SwapDigits[Swap the first and last digit]
    SwapDigits-->Result5[/Display Swapped Number/]-->Menu
    Choice--6: Check Palindrome-->PalindromeCheck[Check if the number is a palindrome]
    PalindromeCheck-->Result6[/Display Palindrome Result/]-->Menu
    Choice--7: Frequency of Digits-->DigitFrequency[Compute frequency of each digit]
    DigitFrequency-->Result7[/Display Frequency Table/]-->Menu
    Choice--8: Check Strong Number-->StrongNumber[Check if the number is Strong]
    StrongNumber-->Result8[/Display Strong Number Result/]-->Menu
    Choice--9: Check Perfect Number-->PerfectNumber[Check if the number is Perfect]
    PerfectNumber-->Result9[/Display Perfect Number Result/]-->Menu
    Choice--0: Exit Program-->Exit[Terminate the Program]-->End[(End)]
    Choice--Invalid Choice-->Invalid[/Display Invalid Choice Message/]-->Menu
