#include <iostream>
using namespace std;
int main() {
    double basicSalary, workedHours, bonusRate, overTimeBonusRate;
    double extraHours = 0.0, bonus = 0.0, grossSalary, pension, taxRate = 0.0, tax, netSalary;

    cout << "Enter the basic salary: ";
    cin >> basicSalary;

    cout << "Enter the worked hours: ";
    cin >> workedHours;

    cout << "Enter the bonus rate per hour: ";
    cin >> bonusRate;

    if (workedHours > 40) {
        extraHours = workedHours - 40;
        cout << "Enter the overtime bonus rate per hour: ";
        cin >> overTimeBonusRate;
        bonus = extraHours * overTimeBonusRate;
    } else {
        bonus = workedHours * bonusRate;
    }

    grossSalary = basicSalary + bonus;

    pension = basicSalary * 0.07;

    if (grossSalary <= 200) {
        taxRate = 0.0;
    } else if (grossSalary <= 600) {
        taxRate = 0.1;
    } else if (grossSalary <= 1200) {
        taxRate = 0.15;
    } else if (grossSalary <= 2000) {
        taxRate = 0.2;
    } else if (grossSalary <= 3500) {
        taxRate = 0.25;
    } else {
        taxRate = 0.3;
    }

    tax = grossSalary * taxRate;

    netSalary = grossSalary - pension - tax;
    cout << "your Net Salary is: " << netSalary << endl;

    return 0;
}
