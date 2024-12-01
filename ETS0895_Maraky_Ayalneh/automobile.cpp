#include <iostream>
using namespace std;

int main() {
    
    float tankCapacity, miles, totalDistance;

    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> tankCapacity;
    
    cout << "Enter the miles per gallon the automobile can be driven: ";
    cin >> miles;

    totalDistance = tankCapacity * miles;
    
    cout << "The automobile can be driven " << totalDistance << " miles without refueling." << endl;

    return 0;
}
