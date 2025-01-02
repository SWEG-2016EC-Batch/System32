#include <iostream>
using namespace std;
int main()
{
    int stick = 23, player;
    cout << "let's play" << endl;

    while (stick > 0)
    {
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < stick; j++)
            {
                cout << "|" << "    ";
            }
            cout << endl;
        }
        if (stick == 1)
        {
            cout << "You've lost";
            goto a;
        }
        cout << "How many stick do you want to remove?" << endl;
        cin >> player;
        stick -= player;

        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < stick; j++)
            {
                cout << "|" << "    ";
            }
            cout << endl;
        }
        if (stick == 1)
        {
            cout << "I've lost";
            goto a;
        }
        if (stick > 4)
        {
            stick -= (4 - player);
            cout << "My turn" << endl;
        }
        else if (stick == 4)
        {
            stick -= 3;
            cout << "My turn" << endl;
        }
        else if (stick == 3)
        {
            stick -= 2;
            cout << "My turn" << endl;
        }
        else if (stick == 2)
        {
            stick -= 1;
            cout << "My turn" << endl;
        }
    }
a:
    cout << "\n Would you like to continue?";
}