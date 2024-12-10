#include <iostream>
using namespace std;
int main(){
    double test,quiz,project,assignment,final_test,total;
    cout<<"Enter score obtained for test out of (15%): ";
    cin>>test;
    if (cin.fail()||test>15){
        cout<<"invalid input";
        cin.clear();
        cin.ignore();
        return 1;
    }
    cout<<"Enter score obtained for quiz out of (5%): ";
    cin>>quiz;
    if (cin.fail()||quiz>5){
        cout<<"invalid input";
        cin.clear();
        cin.ignore();
        return 1;
    }
    cout<<"Enter score obtained for project out of (20%): ";
    cin>>project;
    if (cin.fail()||project>20){
        cout<<"invalid input";
        cin.clear();
        cin.ignore();
        return 1;
    }
    cout<<"Enter score obtained for assignment out of (10%): ";
    cin>>assignment;
    if (cin.fail()||assignment>10){
        cout<<"invalid input";
        cin.clear();
        cin.ignore();
        return 1;
    }
    cout<<"Enter score obtained for final exam out of (50%): ";
    cin>>final_test; 
    if (cin.fail()||final_test>50){
        cout<<"invalid input";
        cin.clear();
        cin.ignore();
        return 1;
    }
    total=test+quiz+project+assignment+final_test;
    cout<<"your total grade is : "<<total<<endl;
    if (total>=90){
        cout<<"A+";
    }else if (90>total>=80){
        cout<<"A";
}
else if (80>total  && total>=75){
    cout<<"B+";
}else if (75>total && total >=60){
    cout<<"B";
}else if (60>total && total>=55){
    cout<<"C+";
}else if (55>total && total>=45){
    cout<<"C";
}else if (45>total && total>=30){
    cout<<"D";
}else if (total<30){
    cout<<"F";
}
}
