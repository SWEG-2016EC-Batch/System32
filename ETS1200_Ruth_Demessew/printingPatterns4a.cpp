// pattern 1
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) { 
        for (int j = 1; j <= 5; j++) {
            cout << j << " ";
        }
        cout << endl; 
    }
    return 0;
}
// pattern 2
#include <iostream>
using namespace std;

int main() {
    char letter = 'A'; 
    for (int i = 1; i <= 4; i++) { 
        for (int j = 1; j <= 6; j++) { 
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }
    return 0;
}
// pattern 3
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl; 
    }

    return 0;
}
// pattern 4
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; ++i) {
        for (int j = n; j > i; --j) {
            cout << "  ";
        }
        for (int k = i; k >= 1; --k) {
            cout << k << " ";
        }
        cout << endl; 
    }

    return 0;
}
// pattern 5
#include <iostream>
using namespace std;

int main() {
    int n = 5; 

    for (int i = 1; i <= n; ++i) {
        char ch = 'A';
        for (int j = 1; j <= i; ++j) {
            cout << ch << " ";
            ++ch;
        }
        cout << endl; 
    }

    return 0;
}
// pattern 6
#include <iostream>
using namespace std;

int main() {
    int n = 5; 

    for (int i = 0; i < n; ++i) {
        for (char ch = 'a'; ch <= 'e'; ++ch) {
            cout << ch << " ";
        }
        cout << endl; 
    }

    return 0;
}
// pattern 7
#include <iostream>
using namespace std;

int main() {
    int rows = 7, columns = 8; 

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

    return 0;
}
// pattern 8
#include <iostream>
using namespace std;

int main() {
    int n = 6; 

    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl; 
    }

    return 0;
}
// pattern 9
#include <iostream>
using namespace std;

int main() {
    int n = 6; 

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

    return 0;
}
// pattern 10
#include <iostream>
using namespace std;

int main() {
    int n = 6;

    for (int i = 1; i <= n; ++i) {
        
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        
        for (int k = 1; k <= i; ++k) {
            cout << "* ";
        }
        cout << endl; 
    }

    return 0;
}
// pattern 11
#include <iostream>
using namespace std;

int main() {
    int n = 6; 

    for (int i = n; i >= 1; --i) {
        
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        
        for (int k = 1; k <= i; ++k) {
            cout << "* ";
        }
        cout << endl; 
    }

    return 0;
}
// pattern 12
#include <iostream>
using namespace std;

int main() {
    int n = 6; 
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

    return 0;
}

