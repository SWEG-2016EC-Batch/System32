#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int num;
    cout << "Enter your number: ";
    cin >> num;

    int choice;

    do {
        cout << "\nChoose one of the following options: " << endl;
        cout << "1. Reverse of the number" << endl;
        cout << "2. Number of digits" << endl;
        cout << "3. Product of even digits" << endl;
        cout << "4. Print the first,last digit and their sum" << endl;
        cout << "5. Swap first and last digit" << endl;
        cout << "6. Check if palindrome" << endl;
        cout << "7. Frequency of each digit" << endl;
        cout << "8. Check if strong number" << endl;
        cout << "9. Check if perfect number" << endl;
        cout << "10. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int rev = 0, temp = num;
                while (temp > 0) {
                    int digit = temp % 10;
                    rev = rev * 10 + digit;
                    temp /= 10;
                }
                cout << "Reverse of the number: " << rev << endl;
                break;
            }

            case 2: {
                int temp = num, digit_count = 0;
                while (temp > 0) {
                    temp /= 10;
                    digit_count++;
                }
                cout << "The number of digits is: " << digit_count << endl;
                break;
            }

            case 3: {
                int product = 1, temp = num;
                bool has_even = false;
                while (temp > 0) {
                    int digit = temp % 10;
                    if (digit % 2 == 0) {
                        product *= digit;
                        has_even = true;
                    }
                    temp /= 10;
                }
                cout << "The product of the even digits is: " << (has_even ? product : 0) << endl;
                break;
            }

            case 4: {
                int first_digit, last_digit;
                last_digit = num % 10;
                int temp = num;
                while (temp >= 10) {
                    temp /= 10;
                }
                first_digit = temp;
                cout << "First digit: " << first_digit << ", Last digit: " << last_digit << endl;
                cout << "Their sum is: " << first_digit + last_digit << endl;
                break;
            }

            case 5: {
                int first_digit = num, last_digit = num % 10;
                while (first_digit >= 10) {
                    first_digit /= 10;
                }
                int newNum = last_digit * pow(10, (int)log10(num)) + (num / 10) * 10 + first_digit;
                cout << "Number after swapping: " << newNum << endl;
                break;
            }

            case 6: {
                int rev = 0, temp = num;
                while (temp > 0) {
                    int digit = temp % 10;
                    rev = rev * 10 + digit;
                    temp /= 10;
                }
                cout << (num == rev ? "The number is a palindrome." : "The number is not a palindrome.") << endl;
                break;
            }

            case 7: {
                int frequency[10] = {0};
                int temp = num;
                while (temp > 0) {
                    frequency[temp % 10]++;
                    temp /= 10;
                }

                cout << "Digit\tFrequency" << endl;
                for (int i = 0; i < 10; i++) {
                    if (frequency[i] > 0) {
                        cout << i << "\t" << frequency[i] << endl;
                    }
                }
                break;
            }

            case 8: {
                int sum_factorial = 0, temp = num;
                while (temp > 0) {
                    int digit = temp % 10;
                    int factorial = 1;
                    for (int i = 1; i <= digit; i++) {
                        factorial *= i;
                    }
                    sum_factorial += factorial;
                    temp /= 10;
                }
                cout << (sum_factorial == num ? "Strong number: Yes" : "Strong number: No") << endl;
                break;
            }

            case 9: {
                int sum_of_divisors = 0;
                for (int i = 1; i <= num / 2; i++) {
                    if (num % i == 0) {
                        sum_of_divisors += i;
                    }
                }
                cout << (sum_of_divisors == num ? "Perfect number: Yes" : "Perfect number: No") << endl;
                break;
            }

            case 10: {
                cout << "Exiting the program." << endl;
                break;
            }

            default: {
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    } while (choice != 10);

    return 0;
}
