#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;
    char response;

    do {
        // Input weight
        cout << "Enter weight in kg: ";
        cin >> weight;

        // Input height
        cout << "Enter height in meters: ";
        cin >> height;

        // Calculate BMI
        bmi = weight / (height * height);

        // Determine weight status
        string status;
        if (bmi < 18.5) {
            status = "Underweight";
        } else if (bmi >= 18.5 && bmi < 24.9) {
            status = "Normal weight";
        } else {
            status = "Overweight";
        }

        // Output BMI and status
        cout << "BMI: " << bmi << " Status: " << status << endl;

        // Ask if user wants to continue
        cout << "Do you want to enter details for another person? (y/n): ";
        cin >> response;

    } while (response == 'y' || response == 'Y');

    return 0;
}
