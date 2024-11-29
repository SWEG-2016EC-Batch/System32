#include <iostream>
using namespace std;
int main() {
    float  tankCapacity;
    float milesPerGallon;
    cout << "Enter the capacity of the fuel tank (in gallons): ";
    cin >> tankCapacity;
    cout << "Enter the miles per gallon (MPG): ";
    cin >> milesPerGallon;
     float totalDistance = tankCapacity * milesPerGallon;
    cout << "The automobile can be driven for " << totalDistance << " miles without refueling." << endl;

    return 0;
}
