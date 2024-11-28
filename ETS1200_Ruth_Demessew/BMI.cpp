// BMI calculator  
#include <iostream>
using namespace std;
int main() {
  int num;
   cout << "enter number of people for bmi calculator: ";
    cin >> num;
   for (int i = 1; i <= num; ++i) {
float weight, height;
float bmi;
cout << "input your weight in kilograms please: " << endl;
cin >> weight;
cout << "next input your height in meters: " << endl;
cin >> height;
bmi = weight / (height * height);
cout << "your BMI is: " << bmi<< endl;
if (bmi < 18.5) {
        cout << "you are underweight!"<<endl;;
    } else if (18.5<= bmi <= 24.9) {
        cout << "you have a healthy weight!"<< endl;
    }else if (25 <= bmi < 29.9) {
        cout << "you are overweight!"<<endl;
    }else if (bmi >= 30) {
        cout << "you are obese!"<<endl;
    }
       
   }

    return 0;
}
