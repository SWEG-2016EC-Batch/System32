# Problem Analysis
Inputs
Number: An integer provided by the user for processing.
Choice: The operation selected from the menu to be performed on the number.
Processes
The process depends on the user's choice from the menu:

Reverse the Number:

Extract the last digit of the number repeatedly using modulo (%) and append it to a reversed number.
Remove the last digit by dividing the number by 10 in each iteration.
Count the Number of Digits:

Use a loop to repeatedly divide the number by 10 until it becomes 0.
Increment a counter during each iteration.
Find the Product of Even Digits:

Extract each digit using modulo (%).
Check if the digit is even using the condition digit % 2 == 0.
Multiply all even digits together.
If no even digits exist, handle appropriately.
Find and Sum the First and Last Digit:

Extract the last digit using modulo (%).
Find the first digit by repeatedly dividing the number by 10 until it becomes less than 10.
Compute the sum of the first and last digits.
Swap the First and Last Digit:

Extract the first and last digits as in the previous step.
Reverse the number to access all digits in order.
Swap the first and last digits in the reversed number and restore the original order.
Check if the Number is a Palindrome:

Reverse the number as in step 1.
Compare the reversed number with the original to determine if it’s a palindrome.
Find the Frequency of Each Digit:

Use an array of size 10 initialized to 0 to store the count of each digit.
Extract each digit using modulo (%) and increment the corresponding array index.
Continue until the number becomes 0.
Check if the Number is a Strong Number:

For each digit in the number, compute its factorial.
Sum the factorials of all digits.
Compare the sum to the original number.
Check if the Number is a Perfect Number:

Sum all divisors of the number (excluding itself) by iterating from 1 to number - 1.
Check if the sum of divisors equals the original number.
Exit:

End the program.
Outputs
Reversed Number: The number reversed digit by digit.
Digit Count: Total digits in the number.
Product of Even Digits: The product of all even digits in the number.
First and Last Digit: Display and compute the sum of the first and last digits.
Swapped First and Last Digit: The number with its first and last digits swapped.
Palindrome Check: Indicates if the number is a palindrome.
Frequency of Each Digit: A table showing how often each digit appears.
Strong Number Check: Whether the number is a Strong number.
Perfect Number Check: Whether the number is a Perfect number.
Exit: Ends the program.

# Pseudo Code
step 1. Start
step 2. Input the number from the user.
step 3. Display the menu:
   - 1: Reverse the number.
   - 2: Count the number of digits.
   - 3: Find the product of even digits.
   - 4: Display and sum the first and last digit.
   - 5: Swap the first and last digit.
   - 6: Check if the number is a palindrome.
   - 7: Find the frequency of each digit.
   - 8: Check if the number is a Strong number.
   - 9: Check if the number is a Perfect number.
   - 10: Exit the program.
4. Input the user's choice.
5. Perform the operation based on the choice:
   Case 1: Reverse the number
      - Initialize `reverse = 0`.
      - While the number is not 0:
         - Extract the last digit: `digit = number % 10`.
         - Append it to `reverse`: `reverse = reverse * 10 + digit`.
         - Remove the last digit: `number = number / 10`.
      - Output `reverse`.
   Case 2: Count digits
      - Initialize `count = 0`.
      - While the number is not 0:
         - Increment `count`.
         - Remove the last digit: `number = number / 10`.
      - Output `count`.
   Case 3: Product of even digits
      - Initialize `product = 1` and `has_even_digit = false`.
      - While the number is not 0:
         - Extract the last digit: `digit = number % 10`.
         - If `digit % 2 == 0`, multiply `product` by `digit` and set `has_even_digit = true`.
         - Remove the last digit: `number = number / 10`.
      - If `has_even_digit`, output `product`, else output "No even digits".
   Case 4: First and last digit
      - Extract the last digit: `last_digit = number % 10`.
      - Find the first digit by dividing `number` repeatedly by 10 until it’s less than 10.
      - Compute the sum: `sum = first_digit + last_digit`.
      - Output `first_digit`, `last_digit`, and `sum`.
   Case 5: Swap first and last digit
      - Extract the first and last digits as in Case 4.
      - Reverse the number.
      - Swap the first and last digits in the reversed number.
      - Reverse it again to restore the original order.
      - Output the modified number.
   Case 6: Palindrome check
      - Reverse the number as in Case 1.
      - Compare the reversed number with the original.
      - Output "Palindrome" or "Not a palindrome".
   Case 7: Frequency of digits
      - Initialize an array `freq[10]` to 0.
      - While the number is not 0:
         - Extract the last digit: `digit = number % 10`.
         - Increment `freq[digit]`.
         - Remove the last digit: `number = number / 10`.
      - Output the frequency of each digit.
   Case 8: Strong number check
      - Initialize `sum = 0`.
      - For each digit in the number:
         - Compute its factorial.
         - Add the factorial to `sum`.
      - Compare `sum` with the original number.
      - Output "Strong number" or "Not a strong number".
   Case 9: Perfect number check
      - Initialize `sum = 0`.
      - For each number `i` from 1 to `number - 1`:
         - If `number % i == 0`, add `i` to `sum`.
      - Compare `sum` with `number`.
      - Output "Perfect number" or "Not a perfect number".
   Case 10: Exit the program.
step 6. End
