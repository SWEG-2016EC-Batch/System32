#include <iostream>
using namespace std;
int main() {
    float  Fuelcapacity;
    float milesPerGallon;
    cout << "Enter the capacity of the fuel tank (in gallons): ";
    cin >> Fuelcapacity;
    cout << "Enter the miles per gallon (MPG): ";
    cin >> milesPerGallon;
     float Numberofmiles = Fuelcapacity * milesPerGallon;
    cout << "The automobile can be driven for " << Numberofmiles << " miles without refueling." << endl;

    return 0;
}
