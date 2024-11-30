#include <iostream>
#include <cmath> //  for the pow function
using namespace std;

int main() {
    float x, y, result;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;


    result = pow(x, y);


    cout << x << " raised to the power of " << y << " is: " << result << endl;

    return 0;
}
