#include <iostream>
using namespace std;

int main() {
    float tax_rate = 0.15, pension_rate = 0.05;
    float base_salary, weekly_hours_worked, bonus_rate, net_salary, gross_salary, bonus_payment, tax, pension;
    char employeeName; 

    cout << "Enter the employee's name (single character only):\n";
    cin >> employeeName;

    
    cout << "Enter the base salary:\n";
    while (true) {
        cin >> base_salary;
        if (cin.fail() || base_salary < 0) {
            cout << "Error: Please enter a valid positive number for base salary:\n";
            cin.clear(); 
            cin.ignore(10000, '\n');
        } else {
            break; 
        }
    }


    cout << "Enter the weekly hours worked:\n";
    while (true) {
        cin >> weekly_hours_worked;
        if (cin.fail() || weekly_hours_worked < 0) {
            cout << "Error: Please enter a valid positive number for weekly hours worked:\n";
            cin.clear();
            cin.ignore(10000, '\n');
        } else {
            break; 
        }
    }

 
    cout << "Enter the bonus rate:\n";
    while (true) {
        cin >> bonus_rate;
        if (cin.fail() || bonus_rate < 0) {
            cout << "Error: Please enter a valid positive number for bonus rate:\n";
            cin.clear();
            cin.ignore(10000, '\n');
        } else {
            break; 
        }
    }

   
    bonus_payment = weekly_hours_worked * bonus_rate;
    gross_salary = base_salary + bonus_payment;
    tax = gross_salary * tax_rate;
    pension = gross_salary * pension_rate;
    net_salary = gross_salary - (pension + tax);


    cout << employeeName << "'s gross salary is: $" << gross_salary << endl;
    cout << employeeName << "'s bonus payment is: $" << bonus_payment << endl;
    cout << employeeName << "'s net salary is: $" << net_salary << endl;

    return 0;
}

