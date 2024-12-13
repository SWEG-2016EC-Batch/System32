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
                  
    cout << "Total Mark: " << total_mark << endl;             
       
if (total_mark>=90){
        cout<<"A+";
    }else if (90>total_mark>=80){
        cout<<"A";
}
else if (80>total_mark  && total_mark>=75){
    cout<<"B+";
}else if (75>total_mark && total_mark >=60){
    cout<<"B";
}else if (60>total_mark && total_mark>=55){
    cout<<"C+";
}else if (55>total_mark && total_mark>=45){
    cout<<"C";
}else if (45>total_mark && total_mark>=30){
    cout<<"D";
}else if (total_mark<30){
    cout<<"F";
       
}

  

       
}
