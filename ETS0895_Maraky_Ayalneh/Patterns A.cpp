#include <iostream>
using namespace std;

int main() {

// 1
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    cout << endl;
//2
    char hi = 'A';
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 6; j++) {
            cout << hi << " ";
            hi++;
        }
        cout << endl;
    }
    cout << endl;
    //3
    int number;
    for (int i = 1; i <= 5; i++) {
        number = 1;
        for (int j = 1; j <= i; j++) {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
    cout << endl;
    //4
    for (int i = 1; i <= 5; i++) {  
        int number = i; 
        for (int j = 1; j <= 5 - i; j++) { 
            cout << "  "; 
        }
        for (int j = 1; j <= i; j++) { 
            cout << number << " "; 
            number--;  
        }
        cout << endl;  
    }
    cout <<endl;
    //5
    char letter;
    for (int i = 1; i <= 5; i++) {
        letter = 'A';
        for (int j = 1; j <= i; j++) {
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }
    cout << endl;
//6
    for (int i = 1; i <= 5; i++) { 
        for (char letter = 'a'; letter <= 'e'; letter++) { 
            cout << letter << " "; 
        }
        cout << endl; 
    }
    cout << endl;
  //7
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1||i == 5||  j == 1 || j == 5) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl;
//8
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
//9

    int n = 6;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
        
            if (i == n ||  j == 1 ||  j == i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;
//10

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

 //11
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

//12
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1  j == (2 * i - 1)  i == 5) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
