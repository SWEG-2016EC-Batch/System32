#include<iostream>
using namespace std;
int main(){
float tax_rate=0.15,pension_rate=0.05,base_salary,weekly_hours_worked,bonus_rate,net_salary,gross_salary,bonus_payment,tax,pension;
string name;
cout<<"enter the employee's name(use \"_\" for spacing):\n";
cin>>name;
cout<<"enter the base salary:\n";
cin>>base_salary;
cout<<"enter the weekly hours worked:\n";
cin>>weekly_hours_worked;
cout<<"enter the bonus rate:\n";
cin>>bonus_rate;
if(cin.fail()||weekly_hours_worked<0||base_salary<0||bonus_rate<0){
    cout<<"Error: Please enter the proper values and make sure all numeral values are positive";
}
else{
    bonus_payment=weekly_hours_worked*bonus_rate;
    gross_salary=base_salary+bonus_payment;
    tax=gross_salary*tax_rate;
    pension=gross_salary*pension_rate;
    net_salary=gross_salary-(pension+tax);
    cout<<name<<"'s gross salary is: "<<gross_salary<<endl;
    cout<<name<<"'s bonus payment is: "<<bonus_payment<<endl;
    cout<<name<<"'s net salary is: "<<net_salary<<endl;  
}

}

