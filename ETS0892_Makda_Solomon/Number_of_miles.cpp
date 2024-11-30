#include <iostream>
using namespace std;

int main() {
  
    float capacityGallons;
    float milesPerGallon;

    
    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> capacityGallons;

    
    cout << "Enter the miles per gallon (MPG): ";
    cin >> milesPerGallon;

    float totalMiles = capacityGallons * milesPerGallon;

    
    cout << "The automobile can be driven " << totalMiles << " miles without refueling." << endl;

    return 0;
}
