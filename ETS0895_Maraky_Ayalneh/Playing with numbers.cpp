#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, choice;

    cout << "Enter an integer: ";
    cin >> number;

    do {
        cout << "\nChoose an operation:" << endl;
        cout << "1. Reverse the number" << endl;
        cout << "2. Count the number of digits" << endl;
        cout << "3. Product of even digits" << endl;
        cout << "4. Sum of first and last digit" << endl;
        cout << "5. Swap first and last digit" << endl;
        cout << "6. Check if the number is a palindrome" << endl;
        cout << "7. Frequency of each digit" << endl;
        cout << "8. Check if the number is Strong" << endl;
        cout << "9. Check if the number is Perfect" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {

            int temp = abs(number), reverse = 0;
            while (temp != 0) {
                reverse = reverse * 10 + (temp % 10);
                temp /= 10;
            }
            if (number < 0) reverse = -reverse;
            cout << "Reversed number: " << reverse << endl;

        } else if (choice == 2) {

            int count = (number == 0) ? 1 : log10(abs(number)) + 1;
            cout << "Number of digits: " << count << endl;

        } else if (choice == 3) {

            int temp = abs(number), product = 1, hasEven = 0;
            while (temp != 0) {
                int digit = temp % 10;
                if (digit % 2 == 0) {
                    product *= digit;
                    hasEven = 1;
                }
                temp /= 10;
            }
            cout << (hasEven ? "Product of even digits: " + to_string(product)
                     : "No even digits found.") << endl;

        } else if (choice == 4) {

            int temp = abs(number);
            int last = temp % 10;
            while (temp >= 10) temp /= 10;
            int first = temp;
            cout << "Sum of first and last digit: " << (first + last) << endl;

        } else if (choice == 5) {

            int temp = abs(number);
            int last = temp % 10;
            int digits = log10(temp);
            int first = temp / pow(10, digits);
            int middle = (temp % static_cast<int>(pow(10, digits))) / 10;
            int swapped = (last * pow(10, digits)) + (middle * 10) + first;
            if (number < 0) swapped = -swapped;
            cout << "Number after swapping first and last digits: " << swapped << endl;

        } else if (choice == 6) {
            
            int temp = abs(number), reverse = 0, original = temp;
            while (temp != 0) {
                reverse = reverse * 10 + (temp % 10);
                temp /= 10;
            }
            cout << (reverse == original ? "The number is a palindrome."
                     : "The number is not a palindrome.")
                 << endl;

        } else if (choice == 7) {
            
            int temp = abs(number);
            int freq[10] = {0};
            while (temp != 0) {
                freq[temp % 10]++;
                temp /= 10;
            }
            cout << "Digit frequencies:" << endl;
            for (int i = 0; i < 10; i++) {
                if (freq[i] > 0) cout << i << ": " << freq[i] << endl;
            }

        } else if (choice == 8) {
            
            int temp = abs(number), sum = 0;
            while (temp != 0) {
                int digit = temp % 10, factorial = 1;
                for (int i = 1; i <= digit; i++) factorial *= i;
                sum += factorial;
                temp /= 10;
            }
            cout << (sum == abs(number) ? "The number is Strong."
                     : "The number is not Strong.")
                 << endl;

        } else if (choice == 9) {
                  int sum = 0;
            for (int i = 1; i <= abs(number) / 2; i++) {
                if (number % i == 0) sum += i;
            }
            cout << (sum == abs(number) ? "The number is Perfect."
                     : "The number is not Perfect.")
                 << endl;

        } else if (choice != 0) {
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 0);

    cout << "Program exited." << endl;
    return 0;
}
