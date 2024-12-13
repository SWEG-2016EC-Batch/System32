#include<iostream>
using namespace std;
int main(){
float tax_rate,pension_rate=0.07,base_salary,weekly_hours_worked,bonus_rate,net_salary,gross_salary,bonus_payment,tax,pension;
cout<<"enter the base salary:\n";
cin>>base_salary;
cout<<"enter the weekly hours worked:\n";
cin>>weekly_hours_worked;
if(weekly_hours_worked>40){
cout<<"enter the bonus rate:\n";
cin>>bonus_rate;}
else{bonus_rate=0;}
if(cin.fail()||weekly_hours_worked<0||base_salary<0||bonus_rate<0){
    cout<<"Error: Please enter the proper values and make sure all numeral values are positive";
}
else{
    bonus_payment=weekly_hours_worked*bonus_rate;
    gross_salary=base_salary+bonus_payment;
    if(gross_salary<200){
        tax_rate=0;
    }
    else if(200< gross_salary && gross_salary<=600){
        tax_rate=0.1;
    }
     else if(600< gross_salary && gross_salary<=1200){
        tax_rate=0.15;
    }
     else if(1200< gross_salary && gross_salary<=2000){
        tax_rate=0.2;
    }
     else if(2000< gross_salary && gross_salary<=3500){
        tax_rate=0.25;
    }
     else if(gross_salary>3500){
        tax_rate=0.3;
    }
    tax=gross_salary*tax_rate;
    pension=base_salary*pension_rate;
    net_salary=gross_salary-(pension+tax);
    cout<<"gross salary is: "<<gross_salary<<endl;
    cout<<"bonus payment is: "<<bonus_payment<<endl;
    
    cout<<"tax rete is: "<<tax_rate<<endl;
    cout<<"tax amount is: "<<tax<<endl;
    cout<<"net salary is: "<<net_salary<<endl; 
}

}