#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number of people for BMI calculation: ";
    cin >> num;

    for (int i = 1; i <= num; ++i) {
        float weight, height, bmi;
        cout << "\nPerson " << i << ":\n";
        cout << "Input your weight in kilograms: ";
        cin >> weight;
        cout << "Input your height in meters: ";
        cin >> height;

        bmi = weight / (height * height);
        cout << "Your BMI is: " << bmi << endl;

        if (bmi < 18.5) {
            cout << "You are underweight!" << endl;
        } else if (bmi >= 18.5 && bmi <= 24.9) {
            cout << "You have a healthy weight!" << endl;
        } else if (bmi >= 25 && bmi < 29.9) {
            cout << "You are overweight!" << endl;
        } else if (bmi >= 30) {
            cout << "You are obese!" << endl;
        }
    }

    return 0;
}

