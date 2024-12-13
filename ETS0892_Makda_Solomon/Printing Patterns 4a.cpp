#include <iostream>
using namespace std;

int main() {
    int n = 6; // You can adjust this for size
    int rows = 7, columns = 8; // For the hollow rectangle pattern

    // Pattern 1:numbers from 1 to 5 in 5 rows
    cout << "Pattern 1:\n";
    for (int i = 1; i <= 5; i++) { 
        for (int j = 1; j <= 5; j++) {
            cout << j << " ";
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 2:letters A to F in 4 rows
    cout << "Pattern 2:\n";
    char letter = 'A'; 
    for (int i = 1; i <= 4; i++) { 
        for (int j = 1; j <= 6; j++) { 
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 3:numbers in an incremental triangle
    cout << "Pattern 3:\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 4:decreasing numbers in a right-aligned triangle
    cout << "Pattern 4:\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = n; j > i; --j) {
            cout << "  ";
        }
        for (int k = i; k >= 1; --k) {
            cout << k << " ";
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 5:letters in an incremental triangle
    cout << "Pattern 5:\n";
    for (int i = 1; i <= n; ++i) {
        char ch = 'A';
        for (int j = 1; j <= i; ++j) {
            cout << ch << " ";
            ++ch;
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 6:lowercase letters a to e in 5 rows
    cout << "Pattern 6:\n";
    for (int i = 0; i < n; ++i) {
        for (char ch = 'a'; ch <= 'e'; ++ch) {
            cout << ch << " ";
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 7:hollow rectangle
    cout << "Pattern 7:\n";
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= columns; ++j) {
            if (i == 1 || i == rows || j == 1 || j == columns) {
                cout << "* "; 
            } else {
                cout << "  "; 
            }
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 8:inverted triangle of stars
    cout << "Pattern 8:\n";
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 9:hollow inverted triangle
    cout << "Pattern 9:\n";
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            if (i == n || j == 1 || j == i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 10:left-aligned triangle of stars
    cout << "Pattern 10:\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            cout << "* ";
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 11:right-aligned triangle of stars
    cout << "Pattern 11:\n";
    for (int i = n; i >= 1; --i) {
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            cout << "* ";
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 12:hollow left-aligned triangle
    cout << "Pattern 12:\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j < n; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            if (k == 1 || k == i || i == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl; 
    }
    cout << endl;

    return 0;
}
