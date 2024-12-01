#include <iostream>
using namespace std;

int main(){
float weight, height, bmi;
char choice;

do {

    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "You have a normal weight." << endl;
    } else if (bmi >= 25 && bmi < 29.9) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obese." << endl;
    }
    cout << "Do you want to continue (y/n): ";
    cin >> choice;

} while (choice == 'y' || choice == 'Y');

return 0;
}
