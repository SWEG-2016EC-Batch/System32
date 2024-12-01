#include <iostream>
using namespace std ;
int main() {
    float x, y;
    cout << "Enter the base (x): ";
    cin >> x;
    cout << "Enter the exponent (y): ";
    cin >> y;

    float result = 1;
     if (y >0) {
        for (int i = 0; i < y; ++i) {
        result *= x;
        }
    }
  else if (y<0){
        for (int i = 0; i <-y; ++i) {
            result *= x;
        }
        result = 1 / result;
    }
else { result= 1; }
    cout << x << " raised to the power " << y << " is " << result << endl;
    return 0;
    }
