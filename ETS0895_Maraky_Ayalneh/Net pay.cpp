#include <iostream>
using namespace std;

int main() {

    double basic_salary, worked_hours, bonus_rate = 0, gross_salary, pension, tax, net_salary;
    double extra_hours = 0, bonus = 0;
    double tax_rate = 0;

    cout << "Enter the basic salary: ";
    cin >> basic_salary;
    cout << "Enter the number of hours worked: ";
    cin >> worked_hours;

    if (worked_hours > 40) {
        cout << "Enter the overtime bonus rate (per hour): ";
        cin >> bonus_rate;
        extra_hours = worked_hours - 40;
    }

    bonus = extra_hours * bonus_rate;
    gross_salary = basic_salary + bonus;
    pension = basic_salary * 0.07;

    if (gross_salary <= 200) {
        tax_rate = 0;
    } else if (gross_salary <= 600) {
        tax_rate = 0.1;
    } else if (gross_salary <= 1200) {
        tax_rate = 0.15;
    } else if (gross_salary <= 2000) {
        tax_rate = 0.2;
    } else if (gross_salary <= 3500) {
        tax_rate = 0.25;
    } else {
        tax_rate = 0.3;
    }

    tax = gross_salary * tax_rate;
    net_salary = gross_salary - pension - tax;

    cout << "Gross Salary: " << gross_salary << " Br" << endl;
    cout << "Pension: " << pension << " Br" << endl;
    cout << "Tax: " << tax << " Br" << endl;
    cout << "Net Salary: " << net_salary << " Br" << endl;

    return 0;
}
