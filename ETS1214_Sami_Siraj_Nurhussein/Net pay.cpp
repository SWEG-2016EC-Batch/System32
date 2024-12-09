#include <iostream>
using namespace std;

int main() {
    double basicSalary, workedHours, bonusRate, overtimeBonusRate = 0.0;
    double grossPay, netPay, pensionDeduction, taxDeduction;
    const double pensionRate = 0.07; 
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
    grossPay = basicSalary + (workedHours * bonusRate);
    if (workedHours > 40) {
        grossPay += (workedHours - 40) * overtimeBonusRate;
    }
    pensionDeduction = grossPay * pensionRate;
    if (grossPay <= 200) {
        taxDeduction = 0;
    } else if (grossPay <= 600) {
        taxDeduction = (grossPay - 200) * 0.10;
    } else if (grossPay <= 1200) {
        taxDeduction = (400 * 0.10) + (grossPay - 600) * 0.15;
    } else if (grossPay <= 2000) {
        taxDeduction = (400 * 0.10) + (600 * 0.15) + (grossPay - 1200) * 0.20;
    } else if (grossPay <= 3500) {
        taxDeduction = (400 * 0.10) + (600 * 0.15) + (800 * 0.20) + (grossPay - 2000) * 0.25;
    } else {
        taxDeduction = (400 * 0.10) + (600 * 0.15) + (800 * 0.20) + (1500 * 0.25) + (grossPay - 3500) * 0.30;
    }
    netPay = grossPay - pensionDeduction - taxDeduction;
    cout << "The Net-Pay of the employee is: " << netPay << endl;

    return 0;
}
