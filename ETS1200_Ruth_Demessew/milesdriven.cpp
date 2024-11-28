#include <iostream>
using namespace std;
int main() {
 float gallon_capacity, milesPerGallon, distance;
 cout << "input the capacity in gallons of your fuel tank: ";
 cin >> gallon_capacity;
 cout << "input how many miles the car can travel per gallon of gas: ";
 cin >> milesPerGallon;
 distance = gallon_capacity * milesPerGallon;
 cout << "The car can travel " << distance << " miles without refueling." << endl;

    return 0;
}
