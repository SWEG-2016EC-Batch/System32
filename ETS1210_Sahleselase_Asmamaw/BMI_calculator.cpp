#include<iostream>
#include<cmath>
using namespace std;
int main(){
int num;
float weight,height,BMI;
cout<<"Enter the number of individual whose BMI is to be calculated:\n";
cin>>num;
for(int i=0;i<num;i++){
    cout<<"Enter the weight(kg):\n";
    cin>> weight ;
     cout<<"Enter the height(m):\n";
    cin>> height ;
    BMI=weight/pow(height,2);
    cout<<"Your BMI is "<<BMI<<endl;
   if(BMI<=18.5){
    cout<<"You are underweight\n";
   }
   else if((BMI>18.5)&&(BMI<25)){
    cout<<"You are at a healthy weight\n";
   }
   else{
    cout<<"You are overweight\n";
   }
}

}