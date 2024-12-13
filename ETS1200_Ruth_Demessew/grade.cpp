#include <iostream>
using namespace std;

int main() {
   float test, quiz, project, assignment, final_exam, total_mark;
   cout << "enter your test score out of 15%: "<<endl;
   cin>>test;
   cout << "enter your quiz score out of 5%: "<<endl;
   cin>>quiz;
   cout << "enter your project score out of 20%: "<< endl;
   cin>>project;
   cout << "enter your assignment score out of 10%: "<<endl;
   cin>>assignment;
   cout << "enter your final exam score out 50%: "<<endl;
   cin>>final_exam;
   total_mark = test+quiz+project+assignment+final_exam;
   cout << "your total mark is: "<<total_mark<<endl;
   if (total_mark <=100 && total_mark >= 90) {
       cout << "your grade is A+"<< endl;
   }
   else if (total_mark <=89 && total_mark >= 80) {
       cout << "your grade is A"<< endl;
   }
   else if (total_mark <=79 && total_mark >= 70) {
       cout << "your grade is B+"<< endl;
   }
   else if (total_mark <=69 && total_mark >= 60) {
       cout << "your grade is B"<< endl;
   }
   else if (total_mark <=59 && total_mark >= 55) {
       cout << "your grade is C+"<< endl;
   }
   else if (total_mark <=54 && total_mark >= 45) {
       cout << "your grade is C"<< endl;
   }
   else if (total_mark <=44 && total_mark >= 30) {
       cout << "your grade is D"<< endl;
   }
   else if (total_mark <=29 && total_mark >= 0) {
       cout << "your grade is F"<< endl;
   }

    return 0;
}
