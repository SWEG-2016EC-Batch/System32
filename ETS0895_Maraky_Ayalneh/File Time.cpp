#include <iostream>
using namespace std;

int main() {
    const int transmissionSpeed = 960; 
    long long fileSize, time, days, hours, minutes, seconds;

    cout << "Enter the file size in bytes: ";
    cin >> fileSize;

    time = fileSize / transmissionSpeed;
    
    days = time / 86400; 
    hours = (time % 86400) / 3600; 
    minutes = (time % 3600) / 60;  
    seconds = time % 60;          

    cout << "Time to send the file: " << days << " days, "
         << hours << " hours, " << minutes << " minutes, and "
         << seconds << " seconds." << endl;

    return 0;
}
