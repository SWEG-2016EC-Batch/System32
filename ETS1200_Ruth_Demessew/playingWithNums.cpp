#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, choice, digit = 0;
    int rev = 0; // Variable for reversed number
    bool has_even_digit = false; // For checking even digits in case 3
    int product = 1; 
    int count = 0; 
    cout << "Enter a number: ";
    cin >> number;

    cout << "1. Prints the reverses of the number" << endl;
    cout << "2. Count the number of digits in a given number" << endl;
    cout << "3. Find the product of even digits of the given number" << endl;
    cout << "4. Prints the first and the last digit of the number and find their sum." << endl;
    cout << "5. Swap the first and the last digit of the number." << endl;
    cout << "6. Check whether a number is palindrome or not." << endl;
    cout << "7. Find the frequency of each digit in a given integer and print in table format." << endl;
    cout << "8. Check if a number is Strong or not." << endl;
    cout << "9. Check whether a number is Perfect number or not." << endl;
    cout << "10. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            int temp = number;
            int reverse = 0;
            while (temp != 0) {
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp /= 10;
            }
            cout << "Reversed Number: " << reverse << endl;
            break;
        }
        case 2: {
            int temp = number;
            int count = 0;
            while (temp > 0) {
                count++;
                temp /= 10;
            }
            cout << "Number of digits: " << count << endl;
            break;
        }
        case 3: {
            if (number <= 0) {
                cout << "Please enter a positive integer." << endl;
                break;
            }
            int temp = number;
            int product = 1;
            bool has_even_digit = false;
            while (temp > 0) {
                digit = temp % 10;
                if (digit % 2 == 0) {
                    product *= digit;
                    has_even_digit = true;
                }
                temp /= 10;
            }
            if (has_even_digit) {
                cout << "The product of the even digits is: " << product << endl;
            } else {
                cout << "There are no even digits in the number." << endl;
            }
            break;
        }
        case 4: {
            if (number <= 0) {
                cout << "Please enter a positive integer." << endl;
                break;
            }
            int lastDigit = number % 10;
            int firstDigit = number;
            while (firstDigit >= 10) {
                firstDigit /= 10;
            }
            int sum = firstDigit + lastDigit;
            cout << "The first digit is: " << firstDigit << endl;
            cout << "The last digit is: " << lastDigit << endl;
            cout << "The sum of the first and last digit is: " << sum << endl;
            break;
        }
        case 5: {
          int num, digit, firstDigit, lastDigit, new_num = 0, reversed_num = 0; 
          int original_num = number; 
          lastDigit = number % 10; 
          while (number >= 10) { 
              number /= 10; 
              } 
          firstDigit = number;
          number = original_num; 
          while (number > 0) {
              digit = number % 10; 
              reversed_num = reversed_num * 10 + digit; 
              number /= 10; 
              } 
          while (reversed_num > 0) { 
              digit = reversed_num % 10; 
              if (digit == firstDigit) { 
                  digit = lastDigit; 
                } 
              else if (digit == lastDigit) { 
                  digit = firstDigit; 
                 } 
              new_num = new_num * 10 + digit; 
              reversed_num /= 10; 
              } 
          cout << "Number after swapping first and last digits: " << new_num << endl; 
          break;
        }
        case 6: {
            int temp = number;
            int reverse = 0;
            while (temp != 0) {
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp /= 10;
            }
            if (number == reverse) {
                cout << "The number is a palindrome." << endl;
            } else {
                cout << "The number is not a palindrome." << endl;
            }
            break;
        }
        case 7: {
            int freq[10] = {0}; 
            int temp = number;
            while (temp > 0) {
                digit = temp % 10;
                freq[digit]++;
                temp /= 10;
            }
            cout << "Frequency of each digit:" << endl;
            for (int i = 0; i < 10; i++) {
                if (freq[i] > 0) {
                    cout << "Digit " << i << ": " << freq[i] << endl;
                }
            }
            break;
        }
        case 8: {
            int temp = number;
            int strong = 0;
            while (temp > 0) {
                digit = temp % 10;
                int fact = 1;
                for (int i = 1; i <= digit; i++) {
                    fact *= i;
                }
                strong += fact;
                temp /= 10;
            }
            if (strong == number) {
                cout << "Strong number: Yes" << endl;
            } else {
                cout << "Strong number: No" << endl;
            }
            break;
        }
        case 9: {
            int perfect = 0;
            for (int i = 1; i < number; i++) {
                if (number % i == 0) {
                    perfect += i;
                }
            }
            if (perfect == number) {
                cout << "Perfect number: Yes" << endl;
            } else {
                cout << "Perfect number: No" << endl;
            }
            break;
        }
        case 10:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
