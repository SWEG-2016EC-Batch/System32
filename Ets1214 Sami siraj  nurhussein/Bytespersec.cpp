#include <iostream>
#include <limits> 
#include <iomanip> 
using namespace std;
int main() {
    const int CHAR_SIZE = 1; 
    const int TRANSMISSION_RATE = 960; 
    double fileSize;
    while (true) {
        cout << "Enter the file size in bytes: ";
        cin >> fileSize;
        if (cin.fail() || fileSize < 0) {
            cout << "File size cannot be negative or invalid. Please enter a valid file size." << endl;
            cin.clear(); 
            cin.ignore();
        } 
        else {
            break; 
        }
    }
    double fileSizeCharacters = fileSize / CHAR_SIZE;
    double timeSeconds = fileSizeCharacters / TRANSMISSION_RATE;
    cout << fixed; 
    cout << "Time to transmit the file: " << timeSeconds << " seconds" << endl;

    return 0;
}
