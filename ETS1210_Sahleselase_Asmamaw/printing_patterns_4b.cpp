#include <iostream>
using namespace std;

int main () {
    int rows, columns, choice;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    cout << "Enter the choice of pattern (1-12): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Rectangle of stars" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++)
                    cout << "* ";
                cout << endl;
            }
            cout << endl;
            break;

        case 2:
            cout << "Square of stars" << endl; 
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++)
                    cout << "* ";
                cout << endl;
            }
            cout << endl;
            break;

        case 3: 
            cout << "Half pyramid of stars" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j <= i; j++)
                    cout << "* ";
                cout << endl;
            }
            cout << endl;
            break;

        case 4: 
            cout << "Half pyramid of numbers" << endl;
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= i; j++)
                    cout << j << " ";
                cout << endl;
            }
            cout << endl;
            break;

        case 5:
            cout << "Inverted half pyramid of stars" << endl;
            for (int i = rows; i >= 1; --i) {
                for (int j = 1; j <= i; ++j)
                    cout << "* ";
                cout << endl;
            }
            cout << endl;
            break;

        case 6:
            cout << "Half pyramid of alphabets" << endl;
            for (int i = 1; i <= rows; i++) {
                char ch = 'A';
                for (int j = 1; j <= i; j++)
                    cout << ch++ << " ";
                cout << endl;
            }
            cout << endl;
            break;

        case 7: 
            cout << "Inverted half pyramid of alphabets" << endl;
            for (int i = rows; i >= 1; i--) {
                char ch = 'A';
                for (int j = 1; j <= i; j++)
                    cout << ch++ << " ";
                cout << endl;
            }
            cout << endl;
            break;

        case 8:
            cout << "Full pyramid of stars" << endl;
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= rows - i; j++)
                    cout << " ";
                for (int k = 1; k <= i; k++)
                    cout << "* ";
                cout << endl;
            }
            cout << endl;
            break;

        case 9:
            cout << "Inverted full pyramid of stars" << endl;
            for (int i = rows; i >= 1; --i) {
                for (int j = 1; j <= rows - i; ++j)
                    cout << " ";
                for (int k = 1; k <= i; ++k)
                    cout << "* ";
                cout << endl;
            }
            cout << endl;
            break;

        case 10:
            cout << "Hollow full pyramid of stars" << endl;
            for (int i = 1; i <= rows; ++i) {
                for (int j = i; j < rows; ++j) {
                    cout << " ";
                }
                for (int k = 1; k <= i; ++k) {
                    if (k == 1 || k == i || i == rows) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            cout << endl;
            break;

        case 11:
            cout << "Inverted hollow full pyramid of stars" << endl;
            for (int i = rows; i >= 1; --i) {
                for (int j = 0; j < rows - i; ++j) {
                    cout << " ";
                }
                for (int k = 1; k <= i; ++k) {
                    if (k == 1 || k == i || i == rows) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            cout << endl;
            break;

        case 12:
            cout << "Your custom pattern here" << endl;
            // Add the logic for the new pattern here
            break;

        case 13:
            cout << "Pattern of numbers" << endl;
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= columns; j++) {
                    cout << j << " ";
                }
                cout << endl;
            }
            cout << endl;
            break;

        case 14:
            cout << "Pattern of alphabets" << endl;
            for (int i = 1; i <= rows; i++) {
                char letter = 'A';
                for (int j = 1; j <= columns; j++) {
                    cout << letter << " ";
                    letter++;
                    if (letter > 'Z') letter = 'A'; // Loop back to 'A' after 'Z'
                }
                cout << endl;
            }
            cout << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}