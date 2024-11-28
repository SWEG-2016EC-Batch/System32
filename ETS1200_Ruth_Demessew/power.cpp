#include <iostream>
using namespace std;
int main() {
 int x,y, product = 1;
 cout << "enter the base number: ";
 cin >> x;
 cout << "enter the power number: ";
 cin >> y;
 if (y < 0) {
        cout << "Error: The power number must be a non-negative integer." << endl;
        return 1; 
    }
  for (int i = 1; i <= y; i++) {
     product *= x;
 }
 cout << "the result is " << product;

    return 0;
}
