#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int num;

  cout <<" Enter the number of people for BMI calculation:" << endl;
  cin>>num;
  for (int i=1;i<=num;++i){
        float weight,height,bmi;
     
      cout << "\nPerson " << i << ":\n";
      
      cout<<"Enter your weight(kg): "<<endl;
      cin>>weight;
      
      cout<<"Enter your height(m): "<<endl;
      cin>>height;
     
      bmi=weight/(height*height);
       cout<<"Your BMI is: "<<bmi<<endl;
      
      if (bmi < 18.5) {
            cout << "You are Underweight!" << endl;
        } else if (bmi >= 18.5 && bmi <= 24.9) {
            cout << "You have a Normal weight!" << endl;
        } else if (bmi >= 25 && bmi < 29.9) {
            cout << "You are Overweight!" << endl;
        } else if (bmi >= 30) {
            cout << "You are Obese!" << endl;
        }
    }
  
  return 0;
 
  }
