#include <iostream>
using namespace std;

int main() {
    int transmission_rate = 960; 
    double file_size;
    int total_time_seconds, days, hours, minutes, seconds;

    cout << "Enter the file size in bytes: ";
    cin >> file_size;
  if (file_size <= 0) {
        cout << "Error: File size must be a positive number." << endl;
        return 1;
    }
 total_time_seconds = file_size / transmission_rate; 
    days = total_time_seconds / (24 * 3600);
    total_time_seconds = total_time_seconds % (24 * 3600);
    hours = total_time_seconds / 3600;
    total_time_seconds = total_time_seconds % 3600;
    minutes = total_time_seconds / 60;
    seconds = total_time_seconds % 60;

    cout << "Time to transmit the file: " 
         << days << " days, " 
         << hours << " hours, " 
         << minutes << " minutes, " 
         << seconds << " seconds." << endl;

    return 0;
}
