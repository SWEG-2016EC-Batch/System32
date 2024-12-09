#include <iostream>
using namespace std;
int main() {
    float basicSalary, workedHours, bonusRate, overtimeBonusRate = 0.0;
    float pensionRate = 0.07, taxRate, grossPay, netPay;
    cout << "Enter the basic salary: ";
    cin >> basicSalary;
    cout << "Enter the worked hours: ";
    cin >> workedHours;
    cout << "Enter the bonus rate: ";
    cin >> bonusRate;
    if (workedHours > 40) {
        cout << "Enter the overtime bonus rate per hour: ";
        cin >> overtimeBonusRate;
    }
    cout << "Enter the tax rate (as a decimal, e.g., 0.15 for 15%): ";
    cin >> taxRate;
    grossPay = basicSalary + (workedHours * bonusRate);
    if (workedHours > 40) {
        grossPay += (workedHours - 40) * overtimeBonusRate;
    }
    double pensionDeduction = grossPay * pensionRate;
    double taxDeduction = grossPay * taxRate;
    netPay = grossPay - pensionDeduction - taxDeduction;
    cout << "The Net-Pay of the employee is: " << netPay << endl;
}
