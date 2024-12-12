#include <iostream>
using namespace std;

int main() {
    
    double test, quiz, project, assignment, final_exam, total_mark;
    char grade;

    cout << "Enter Test mark (out of 15): ";
    cin >> test;
    cout << "Enter Quiz mark (out of 5): ";
    cin >> quiz;
    cout << "Enter Project mark (out of 20): ";
    cin >> project;
    cout << "Enter Assignment mark (out of 10): ";
    cin >> assignment;
    cout << "Enter Final Exam mark (out of 50): ";
    cin >> final_exam;

    total_mark = test + quiz + project + assignment + final_exam;

    if (total_mark >= 90) {
        grade = 'A';
    } else if (total_mark >= 80) {
        grade = 'A';
    } else if (total_mark >= 75) {
        grade = 'B';
    } else if (total_mark >= 60) {
        grade = 'C';
    } else if (total_mark >= 55) {
        grade = 'C';
    } else if (total_mark >= 45) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Total Mark: " << total_mark << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
