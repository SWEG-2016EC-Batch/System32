#include<iostream>
using namespace std;
int main(){
float test,quiz,project,assignment,final,total;
cout<<"Enter your text score:\n";
cin>>test;
if(test<0||test>15){
    cout<<"invalid amount: test score can not be less than 0 or more than 15"<<endl;
    cout<<"Program terminated"<<endl;
    exit(1);
}
cout<<"Enter your quiz score:\n";
cin>>quiz;
if(quiz<0||quiz>5){
    cout<<"invalid amount: quiz score can not be less than 0 or more than 5"<<endl;
    cout<<"Program terminated"<<endl;
    exit(1);
}
cout<<"Enter your project score:\n";
cin>>project;
if(project<0||project>20){
    cout<<"invalid amount: peoject score can not be less than 0 or more than 20"<<endl;
    cout<<"Program terminated"<<endl;
    exit(1);
}
cout<<"Enter your assignment score:\n";
cin>>assignment;
if(assignment<0||assignment>10){
    cout<<"invalid amount: assignment score can not be less than 0 or more than 10"<<endl;
    cout<<"Program terminated"<<endl;
    exit(1);
}
cout<<"Enter your final exam score:\n";
cin>>final;
if(final<0||final>50){
    cout<<"invalid amount: final score can not be less than 0 or more than 50"<<endl;
    cout<<"Program terminated"<<endl;
    exit(1);
}
total=final+quiz+assignment+project+test;
if(total>=90){
    cout<<"Your total score is: "<<total<<endl;
    cout<<"your grade is A+"<<endl;
}
else if(total<90&&total>=80){
    cout<<"Your total score is: "<<total<<endl;
    cout<<"your grade is A"<<endl;
}
else if(total<80&&total>=75){
    cout<<"Your total score is: "<<total<<endl;
    cout<<"your grade is B+"<<endl;
}
else if(total<75&&total>=60){
    cout<<"Your total score is: "<<total<<endl;
    cout<<"your grade is B"<<endl;
}
else if(total<60&&total>=55){
    cout<<"Your total score is: "<<total<<endl;
    cout<<"your grade is C+"<<endl;
}
else if(total<55&&total>=45){
    cout<<"Your total score is: "<<total<<endl;
    cout<<"your grade is C"<<endl;
}
else if(total<45&&total>=30){
    cout<<"Your total score is: "<<total<<endl;
    cout<<"your grade is D"<<endl;
}
else{
    cout<<"Your total score is: "<<total<<endl;
    cout<<"your grade is F"<<endl;
}
}