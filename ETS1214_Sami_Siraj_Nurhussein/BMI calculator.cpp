#include <iostream> 
      using namespace std;
        int main() {
          float w; 
          float h;     
          float BMI;
          int counter;
          cout << "Enter the number of people measuring their BMI: ";
          cin >> counter;
      
          for (int i = 1; i <= counter; i++) {
              cout << "Input your weight in Kg for person " << i << ": ";
              cin >> w;
              cout << "Input your height in meters for person " << i << ": ";
              cin >> h;
              BMI = w / (h * h);
              cout << "Your BMI is: " << BMI;
              if (BMI <= 18.5) {
                  cout << ", you are underweight" << endl;
              } 
              else if (BMI > 18.5 && BMI <= 24.9) {
                  cout << ", you are at optimum weight" << endl;
              }
              else if (BMI > 24.9 && BMI <= 29.9) {
                  cout << ", you are overweight" << endl;
              }
              else {
                  cout << ", you are obese" << endl;
              }
          }
      
          return 0;
        }
