#include <iostream>
using namespace std;

int main() {
    double basic_salary, worked_hours, bonus_rate, tax_rate;
    double pension, tax, overtime = 0, net_pay;

    
    cout << "Enter basic salary: ";
    cin >> basic_salary;

    cout << "Enter worked hours: ";
    cin >> worked_hours;

    cout << "Enter bonus rate: ";
    cin >> bonus_rate;
    pension = basic_salary * 0.07;

    cout << "Enter tax rate (as a percentage): ";
    cin >> tax_rate;
    tax = (basic_salary - pension) * (tax_rate / 100);

    if (worked_hours > 40) {
        double overtime_rate;
        cout << "Enter overtime bonus rate per hour: ";
        cin >> overtime_rate;
        overtime = (worked_hours - 40) * overtime_rate;
    }
    net_pay = basic_salary - pension - tax + bonus_rate + overtime;

     cout << "Net Pay: " << net_pay << endl;

    return 0;
}
