# Problem Determination


## Goal: 
Design a program in C++ language that can manipulate various aspects of a number inputted by a user.
Depending on what the user want to do concerning the number as an example the user can select the operation from the menu such as: 
reversing the number, counting the number of digits, multiplying the even digits, switching the position of the first & the last digits, determining if it is a palindrome, counting how many times each digit appears, determining if it is a strong number or a perfect number, quit the application and so on.
## Inputs:
1.Users operating choice selected from the menu which is typical a number 1 to 10.
2.The number itself which is a number (num) which when a certain operation has been chosen is the number that is going to be acted on.
## Outputs:
1.The final result depending on the selection for example if the operation was rotating the number it will be the reversed number or for operation that involves
counting it will be the total count of digits involved in the operation etc.
## Processing:
1.Show a list of operations available.
2.Retrieve the relevant option from the user.
3.Apply operation on the provided number (num).
4.Show a result from the operation performed.
5.Provide a safeguard for options that were not meant to be chosen.
### Algorithm for Each Operation:
1.Reverse the Number:
Find each digit by separating them via % operator and then combine the digits in the reverse order.
2.Count Digits:
To determine the total number of digits, divide the number with 10 once at a time until zero is reached.
3.Multiply Even Digits:
Find all the digits. For all even digits, find the value of that digit and then multiply them together.
4.First and Last Digit Print:
Retrieve the two digits from both ends and print the numbers.
5.Swap First and Last Digit:
Swap the first and last digits in the number and reconstruct it.
6.Check for Palindrome:
Reverse the number and compare it to the original number.
7.Frequency of Each Digit:
Count the frequency of each digit and print it in a table format.
8.Check for Strong Number:
Calculate the factorial of each digit and sum them up to check if the number is a strong number.
9.Check for Perfect Number:
Check if the sum of all divisors (excluding the number itself) equals the number.
10.Exit:
Exit the program.
# Flowchart

``` mermaid
graph TD
    A[Start] --> B[Display menu]
    B --> C[Input choice]
    C --> D{Choice == 1}
    D -->|Yes| E[Reverse the number]
    E --> Z[Output result]
    D -->|No| F{Choice == 2}
    F -->|Yes| G[Count digits]
    G --> Z
    F -->|No| H{Choice == 3}
    H -->|Yes| I[Product of even digits]
    I --> Z
    H -->|No| J{Choice == 4}
    J -->|Yes| K[Print first and last digit]
    K --> Z
    J -->|No| L{Choice == 5}
    L -->|Yes| M[Swap first and last digit with sum]
    M --> Z
    L -->|No| N{Choice == 6}
    N -->|Yes| O[Check for palindrome]
    O --> Z
    N -->|No| P{Choice == 7}
    P -->|Yes| Q[Frequency of each digit in table]
    Q --> Z
    P -->|No| R{Choice == 8}
    R -->|Yes| S[Check for strong number]
    S --> Z
    R -->|No| T{Choice == 9}
    T -->|Yes| U[Check for perfect number]
    U --> Z
    T -->|No| V{Choice == 10}
    V -->|Yes| W[Exit]
    W --> X[End]
    V -->|No| Y[Invalid choice]
    Y --> B
    Z --> B



```

    