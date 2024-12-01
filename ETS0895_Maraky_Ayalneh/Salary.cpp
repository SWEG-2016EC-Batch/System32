#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    float weeklyHours, bonusRate, baseSalary;
    float grossSalary, bonusPayment, netSalary;

    const float PENSION_RATE = 0.05;
    const float TAX_RATE = 0.15;

    cout << "Enter the employee's name: ";
    getline(cin, name);
    cout << "Enter the weekly working hours: ";
    cin >> weeklyHours;
    cout << "Enter the bonus rate per hour: ";
    cin >> bonusRate;
    cout << "Enter the base salary: ";
    cin >> baseSalary;

    bonusPayment = weeklyHours * bonusRate;
    grossSalary = baseSalary + bonusPayment;

    float pensionAmount = grossSalary * PENSION_RATE;
    float taxAmount = grossSalary * TAX_RATE;
    netSalary = grossSalary - (pensionAmount + taxAmount);

    cout << "Employee Name: " << name << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Bonus Payment: " << bonusPayment << endl;
    cout << "Net Salary (after pension and tax): " << netSalary << endl;

    return 0;
}
