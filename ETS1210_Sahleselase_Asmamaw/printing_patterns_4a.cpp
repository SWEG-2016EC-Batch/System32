#include <iostream>
using namespace std;

int main() {
    int n = 5; // Fixed dimension for most patterns
    int rows = 7, columns = 8; // Fixed dimensions for the hollow rectangle pattern

    // Pattern 1: Numbers from 1 to 5 in 5 rows
    cout << "Pattern 1:\n";
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 2: Letters A to F in 4 rows
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

    // Pattern 3: Numbers in an incremental triangle
    cout << "Pattern 3:\n";
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 4: Decreasing numbers in a right-aligned triangle
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

    // Pattern 5: Letters in an incremental triangle
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

    // Pattern 6: Lowercase letters a to e in 5 rows
    cout << "Pattern 6:\n";
    for (int i = 0; i < n; ++i) {
        for (char ch = 'a'; ch <= 'e'; ++ch) {
            cout << ch << " ";
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 7: Hollow rectangle
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

    // Pattern 8: Inverted triangle of stars
    cout << "Pattern 8:\n";
    int m = 6;
    for (int i = m; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 9: Hollow inverted triangle
    cout << "Pattern 9:\n";
    for (int i = m; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            if (i == m || j == 1 || j == i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 10: Left-aligned triangle of stars
    cout << "Pattern 10:\n";
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= m - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            cout << "* ";
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 11: Right-aligned triangle of stars
    cout << "Pattern 11:\n";
    for (int i = m; i >= 1; --i) {
        for (int j = 0; j < m - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            cout << "* ";
        }
        cout << endl; 
    }
    cout << endl;

    // Pattern 12: Hollow left-aligned triangle
    cout << "Pattern 12:\n";
    for (int i = 1; i <= m; ++i) {
        for (int j = i; j < m; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            if (k == 1 || k == i || i == m) {
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