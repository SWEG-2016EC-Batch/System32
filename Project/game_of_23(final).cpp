#include <iostream>
#include <chrono>   // for the timer
#include <unistd.h> // for the sleep function
#include <cstdlib>  // for the random number function
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++) // pattern
    {
        for (int j = 0; j < 5; j++) // G
        {

            if (j == 0 || i == 4 || (i == 2 && j >= 2) || i == 0 || (j == 4 && i >= 2))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 0; j < 2; j++) // space
        {
            cout << " ";
        }
        for (int j = 0; j < 5; j++) // A
        {

            if (i + j == 4 || j == 4 || (i == 3 && j >= 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 0; j < 2; j++) // space
        {
            cout << " ";
        }
        for (int j = 0; j < 5; j++) // M
        {

            if (j == 0 || j == 4 || (i - j == 0 && i <= 2) || (i + j == 4 && i <= 2))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 0; j < 2; j++) // space
        {
            cout << " ";
        }
        for (int j = 0; j < 5; j++) // E
        {

            if (j == 0 || i == 4 || i == 2 || i == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 0; j < 5; j++) // space
        {
            cout << " ";
        }
        for (int j = 0; j < 5; j++) // O
        {

            if (i == 0 || i == 4 || j == 0 || j == 4)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 0; j < 2; j++) // space
        {
            cout << " ";
        }
        for (int j = 0; j < 5; j++) // F
        {

            if (j == 0 || i == 2 || i == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 0; j < 5; j++) // space
        {
            cout << " ";
        }
        for (int j = 0; j < 5; j++) // 2
        {

            if (i == 0 || i == 4 || (j == 0 && i >= 2) || (j == 4 && i <= 2) || i == 2)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 0; j < 2; j++) // space
        {
            cout << " ";
        }
        for (int j = 0; j < 5; j++) // 3
        {

            if (j == 4 || i == 4 || i == 2 || i == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    char *decision = new char, *game_mode = new char, *difficulty = new char;
    int *player = new int, *total = new int(0), *wins = new int(0), *loses = new int(0), *choice = new int;
    const int time_limit = 7; // time limit is 7 instead of 5 to account for the 2 seconds given for the player to read instructions
    cout << "Welcome to Game of 23!" << endl;
    cout << "Rules:  You and your opponent take turns removing 1 to 3 sticks from a pile of 23 sticks." << endl;
    cout << "\tThe player who picks the last stick loses the game." << endl;
    
    cout << "Let's play" << endl;
  

c:
    cout << "Enter (1) for single player mode (vs. computer)" << endl;
    cout << "Enter (2) for two player mode" << endl;
    cout << "Enter (3) to exit the game" << endl;
    cin >> *choice;

    switch (*choice)
    {
    case 1:
    d:
        cout << "Choose difficulty level for Computer (E - Easy, M - Medium, H - Hard): ";
        cin >> *difficulty;
        while (*difficulty != 'E' && *difficulty != 'M' && *difficulty != 'H')
        {
            cout << "Invalid input. Please enter E for Easy, M for Medium, or H for Hard: ";
            cin >> *difficulty;
        }

        while (true)
        {
            (*total)++;//update stats
            int *toothpick = new int(23);

            while (*toothpick >= 0)
            {
                if (*toothpick > 0)
                {
                    sleep(1);
                    for (int i = 0; i < 6; i++)//display pattern of remaining toothpicks at the begining and after every move by the computer
                    {
                        for (int j = 0; j < *toothpick; j++)
                        {
                            cout << "|" << " ";
                        }
                        cout << endl;   
                    }
                    cout << "Remaining toothpicks: " << *toothpick << endl;
                }
                if (*toothpick == 0)
                {
                    cout << "Computer picked the last toothpick, so it lost." << endl;
                    (*wins)++;//update stats
                    delete toothpick;
                    goto a;
                }

            b:
                if (*difficulty == 'H')
                {
                    cout << "You have 5 seconds to pick." << endl;
                    sleep(2);
                }
                auto start = chrono::steady_clock::now(); // start timer

                cout << "How many toothpicks do you want to remove?" << endl;
                cin >> *player;
                auto end = chrono::steady_clock::now();                 // timer stops here
                chrono::duration<double> elapsed_seconds = end - start; // elapsed time is calculated

                if (*difficulty == 'H' && elapsed_seconds.count() > time_limit) // elapsed time is compared with the time limit
                {
                    cout << "Time's up! You were too slow, so you lose your turn." << endl;
                    sleep(1);
                    goto f;
                }
                if (cin.fail())
                {
                    cout << "Error: You can only enter positive integers." << endl;
                    cin.clear();
                    cin.ignore();
                    goto b;
                }
                if ((*player <= 0 || *player > 3))
                {
                    cout << "Error: You can only take 1, 2, or 3 toothpicks." << endl;
                    goto b;
                }
                if (*player > *toothpick)
                {
                    cout << "Error: The number should be less than or equal to the remaining number of toothpicks." << endl;
                    goto b;
                }
                *toothpick -= *player;//update the number of toothpicks

           
                if (*toothpick > 0)
                {
                    for (int i = 0; i < 6; i++)//display pattern after every move by the computer
                    {
                        for (int j = 0; j < *toothpick; j++)
                        {
                            cout << "|" << " ";
                        }
                        cout << endl;
                    }
                    cout << "Remaining toothpicks: " << *toothpick << endl;
                }
             f:
                if (*toothpick == 0)
                {
                    cout << "You picked the last toothpick, so you've lost." << endl;
                    (*loses)++;//update stats
                    delete toothpick;
                    goto a;
                }
                else if (*toothpick == 1)
                {
                    *toothpick -= 1;//update the number of toothpicks
                }
                else if (*difficulty == 'E')
                {
                    int random;
                    if (*toothpick >= 3)//random number between 1-3
                    {
                        random = (rand() % 3 + 1);
                    }
                    else//random number between 1 and remaining toothpicks
                    {
                        random = (rand() % *toothpick + 1);
                    }
                    cout << "Computer's turn." << endl;
                    sleep(1);
                    cout << "Computer takes " << random << " toothpick(s)." << endl;
                    *toothpick -= random;//update the number of toothpicks
                }
                else if (*difficulty == 'M')
                {
                    if (*toothpick > 4)
                    {
                        cout << "Computer's turn." << endl;
                        sleep(1);
                        cout << "Computer takes " << 4 - *player << " toothpick(s)." << endl;
                        *toothpick -= (4 - *player);//update the number of toothpicks
                    }
                    else if (*toothpick <= 4 && *toothpick > 1)
                    {
                        cout << "Computer's turn." << endl;
                        sleep(1);
                        cout << "Computer takes " << *toothpick - 1 << " toothpick(s)." << endl;
                        *toothpick -= *toothpick - 1;//update the number of toothpicks
                    }
                }
                else if (*difficulty == 'H')
                {
                    if (*toothpick > 4)
                    {
                        cout << "Computer's turn." << endl;
                        sleep(1);
                        cout << "Computer takes " << 4 - *player << " toothpick(s)." << endl;
                        *toothpick -= (4 - *player);//update the number of toothpicks
                    }
                    else if (*toothpick <= 4 && *toothpick > 1)
                    {
                        cout << "Computer's turn." << endl;
                        sleep(1);
                        cout << "Computer takes " << *toothpick - 1 << " toothpick(s)." << endl;
                        *toothpick -= *toothpick - 1;//update the number of toothpicks
                    }
                }
            }

        a:
            cout << "\nWould you like to continue? (Y/N): ";
            cin >> *decision;
            if (*decision != 'Y' && *decision != 'y')
            {
                cout << "Total games played: " << *total << endl;
                cout << "Games won: " << *wins << endl;
                cout << "Games lost: " << *loses << endl;
                break;
            }
        }
        cout << "Would you like to continue in this game mode? (Y/N): ";
        cin >> *game_mode;
        if (*game_mode != 'Y' && *game_mode != 'y')
        {
            goto c;
        }
        else
        {
            goto d;
        }

    case 2:
    {
        int *wins = new int[2]{0, 0}, *loses = new int[2]{0, 0}, *turn = new int;
        *total = 0;
        while (true)
        {
            int *toothpick = new int(23);
            (*total)++;
            *turn = 1;
            for (int i = 0; i < 6; i++)//display pattern of remaining toothpicks at the begining
            {
                for (int j = 0; j < *toothpick; j++)
                {
                    cout << "|" << " ";
                }
                cout << endl;
            }
            cout << "Remaining toothpicks: " << *toothpick << endl;
            while (*toothpick > 0)
            {
            e:
                sleep(1);
                cout << "Player " << *turn << ", enter the number of toothpicks you want to remove: ";
                cin >> *player;
                if (cin.fail())
                {
                    cout << "Error: You can only enter positive integers." << endl;
                    cin.clear();
                    cin.ignore();
                    goto e;
                }
                if ((*player <= 0 || *player > 3))
                {
                    cout << "Error: You can only take 1, 2, or 3 toothpicks." << endl;
                    goto e;
                }
                if (*player > *toothpick)
                {
                    cout << "Error: The number should be less than or equal to the remaining number of toothpicks." << endl;
                    goto e;
                }
                *toothpick -= *player;

                if (*toothpick > 0)
                {
                    for (int i = 0; i < 6; i++)//display pattern of remaining toothpicks after each player's turn
                    {
                        for (int j = 0; j < *toothpick; j++)
                        {
                            cout << "|" << " ";
                        }
                        cout << endl;
                    }
                    cout << "Remaining toothpicks: " << *toothpick << endl;
                }

                *turn = (*turn == 1) ? 2 : 1; // Alternate turns
            }

            if (*turn == 1)//update stats
            {
                cout << "Since Player 2 took the last toothpick, Player 1 wins." << endl;
                wins[0]++;
                loses[1]++;
            }
            else//update stats
            {
                cout << "Since Player 1 took the last toothpick, Player 2 wins." << endl;
                wins[1]++;
                loses[0]++;
            }

            cout << "Would you like to continue in this game mode? (Y/N): ";
            cin >> *game_mode;
            if (*game_mode != 'Y' && *game_mode != 'y')
            {
                cout << "Game Stats:" << endl;
                cout << "Rounds Played: " << *total << endl;
                cout << "Player 1 Wins: " << wins[0] << " | Losses: " << loses[0] << endl;
                cout << "Player 2 Wins: " << wins[1] << " | Losses: " << loses[1] << endl;
                delete[] wins;
                delete[] loses;
                delete toothpick;
                delete turn;
                goto c;
            }
        }
    }

    case 3:
    {
        break;
    }
    default:
        cout << "Invalid input." << endl;
        cin.clear();
        cin.ignore();
        goto c;
    }

    delete decision;
    delete game_mode;
    delete difficulty;
    delete player;
    delete total;
    delete wins;
    delete loses;
    delete choice;

    return 0;
}
