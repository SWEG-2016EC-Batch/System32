#include <iostream>
using namespace std;

int main() {
   double test,quiz,project,assignment,final_exam,total_mark;
  char grade;
   cout << "Enter Test Score (out of 15%): ";
    cin >> test;
        if (cin.fail()||test>20){
        cout<<"invalid input";
        cin.clear();
        cin.ignore();
        return 1;
        }  
    cout << "Enter Quiz Score (out of 5%): ";
    cin >> quiz;
        if (cin.fail()||quiz>5){
        cout<<"invalid input";
        cin.clear();
        cin.ignore();
        return 1;
        }
    cout << "Enter Project Score (out of 20%): ";
    cin >> project;
    if (cin.fail()||project>20){
        cout<<"invalid input";
        cin.clear();
        cin.ignore();
        return 1;
    }
    cout << "Enter Assignment Score (out of 10%): ";
    cin >> assignment;
        if (cin.fail()||assignment>10){
        cout<<"invalid input";
        cin.clear();
        cin.ignore();
        return 1;
        } 
    cout << "Enter Final Exam Score (out of 50%): ";
    cin >> final_exam;
        if (cin.fail()||final_exam>50){
        cout<<"invalid input";
        cin.clear();
        cin.ignore();
        return 1;
        }  
    total_mark=test+quiz+project+assignment+final_exam;
                  
                 
       
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

       
}
