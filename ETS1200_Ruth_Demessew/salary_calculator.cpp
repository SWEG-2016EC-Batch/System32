#include <iostream>
using namespace std;

int main() {
    double weekly_working_hours, bouns_rate_per_hour, base_salary, tax_deduction, pension_deduction, bouns_payment, gross_salary, net_salary;
    string employee_name;

    cout << "Enter your name: ";
    cin >> employee_name;

    cout << "Enter base salary in birr: ";
    cin >> base_salary;
    if (base_salary <= 0) {
        cout << "Error: Base salary must be greater than zero." << endl;
        return 1;
    }

    cout << "Enter weekly working hours: ";
    cin >> weekly_working_hours;
    if (weekly_working_hours <= 0) {
        cout << "Error: Weekly working hours must be greater than zero." << endl;
        return 1;
    }

    cout << "Enter bonus rate per hour in birr: ";
    cin >> bouns_rate_per_hour;
    if (bouns_rate_per_hour <= 0) {
        cout << "Error: Bonus rate per hour must be greater than zero." << endl;
        return 1;
    }

    bouns_payment = weekly_working_hours * bouns_rate_per_hour;
    gross_salary = base_salary + bouns_payment;
    pension_deduction = gross_salary * 0.05;
    tax_deduction = gross_salary * 0.15;
    net_salary = gross_salary - (pension_deduction + tax_deduction);

    cout << employee_name << ", your gross salary is: " << gross_salary << " birr" << endl;
    cout << "Your net salary is: " << net_salary << " birr" << endl;
    cout << "And your bonus payment is: " << bouns_payment << " birr" << endl;

    return 0;
}
