#include <iostream>
#include <thread>//to perform multiple processes concurently ie. the game and its timer for hard dificulty
#include <chrono>//for the timer
#include <unistd.h>//for the sleep function
using namespace std;
int main()
{
    char decision, game_mode, difficulty;
    int player, total = 0, wins = 0, loses = 0, choice;
    const int time_limit = 7; // time limit is 7 instead of 5 to account for the 2 seconds given for the player to read the instruction
    cout << "let's play" << endl;
    cout << "In this game the last person to pick take a toothpick loses" << endl;
c:
    cout << "Enter (1) for single player mode (vs. computer)" << endl;
    cout << "Enter (2) for two player mode" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
    d:
        cout << "Choose difficulty level for Computer (E - Easy, M - Medium, H - Hard): ";
        cin >> difficulty;
        while (difficulty != 'E' && difficulty != 'M' && difficulty != 'H')
        {

            cout << "Invalid input. Please enter E for Easy, M for Medium, or H for Hard: ";
            cin >> difficulty;
        }
        while (true)
        {
            total++;
            int stick = 23;
            while (stick >= 0)
            {
                if (stick > 0)
                {
                    for (int i = 0; i < 6; i++)
                    {
                        for (int j = 0; j < stick; j++)
                        {
                            cout << "|" << " ";
                        }
                        cout << endl;
                    }
                }
                if (stick == 0)
                {
                    cout << " Computer picked the last stick so it lost" << endl;
                    wins++;
                    goto a;
                }

            b:
                if (difficulty == 'H')
                {
                    cout << "You have 5 seconds to pick" << endl;
                    sleep(2);
                }
                auto start = chrono::steady_clock::now();//start timer
               

                cout << "How many stick do you want to remove?" << endl;

                cin >> player;
                auto end = chrono::steady_clock::now();//timer stops here
                chrono::duration<double> elapsed_seconds = end - start;//elasped time is calculated
                if (difficulty == 'H' && elapsed_seconds.count() > time_limit)//elspesed time is compared with the time limit
                {

                    cout << "Time's up! You were too slow so you lose your turn." << endl;
                    
                    goto f;
                }
                if (cin.fail())
                {
                    cout << "Error: You can only enter positive integers" << endl;
                    cin.clear();
                    cin.ignore();

                    goto b;
                }
                if ((player <= 0 || player > 3))
                {

                    cout << "Error: You can only take 1,2 or 3 sticks" << endl;

                    goto b;
                }
                if (player > stick)
                {
                    cout << "Error: The number should be less than or equal to the remaining number of sticks" << endl;

                    goto b;
                }
                stick -= player;
            f:
                if (stick > 0)
                {
                    for (int i = 0; i < 6; i++)
                    {
                        for (int j = 0; j < stick; j++)
                        {
                            cout << "|" << " ";
                        }
                        cout << endl;
                    }
                }
                if (stick == 0)
                {
                    cout << "You picked the last stick so You've lost." << endl;
                    loses++;
                    goto a;
                }
                else if (stick == 1)
                {
                    stick -= 1;
                }
                else if (difficulty == 'E')
                {
                    int random;
                    if (stick >= 3)
                    {
                        random = (rand() % 3 + 1);
                    }
                    else
                    {
                        random = (rand() % stick + 1);
                    }
                    cout << "Computer's turn" << endl;
                    sleep(1);
                    cout << "Computer takes " << random << " stick(s)" << endl;
                    stick -= random;
                }

                else if (difficulty == 'M')
                {
                    if (stick > 4)
                    {
                        cout << "Computer's turn" << endl;
                        sleep(1);
                        cout << "computer takes " << 4 - player << " stick(s)" << endl;
                        stick -= (4 - player);
                    }
                    else if (stick <= 4 && stick > 1)
                    {
                        cout << "Computer's turn" << endl;
                        sleep(1);
                        cout << "computer takes " << stick - 1 << " stick(s)" << endl;
                        stick -= stick - 1;
                    }
                }
                else if (difficulty == 'H')
                {
                    if (stick > 4)
                    {
                        cout << "Computer's turn" << endl;
                        sleep(1);
                        cout << "computer takes " << 4 - player << " stick(s)" << endl;
                        stick -= (4 - player);
                    }
                    else if (stick <= 4 && stick > 1)
                    {
                        cout << "Computer's turn" << endl;
                        sleep(1);
                        cout << "computer takes " << stick - 1 << " stick(s)" << endl;
                        stick -= stick - 1;
                    }
                }
            }

        a:
            cout << "\n Would you like to continue?(Y/N)";
            cin >> decision;
            if (decision != 'Y' && decision != 'y')
            {
                cout << "total games played: " << total << endl;
                cout << "games won: " << wins << endl;
                cout << "games lost: " << loses << endl;
                break;
            }
        }
        cout << "would tou like to continue in this game mode?(Y/N)";
        cin >> game_mode;
        if (game_mode != 'Y' && game_mode != 'y')
        {
            goto c;
        }
        else
        {
            goto d;
        }
    case 2:
    {
        int wins[2] = {0, 0}, loses[2] = {0, 0}, turn;
        total = 0;
        while (true)
        {
            int stick = 23;
            total++;
            turn = 1;
            {
                for (int i = 0; i < 6; i++)
                {
                    for (int j = 0; j < stick; j++)
                    {
                        cout << "|" << " ";
                    }
                    cout << endl;
                }
            }
            while (stick > 0)
            {

            e:
                cout << "player " << turn << " enter the number of sticks you want to remove" << endl;
                cin >> player;
                if (cin.fail())
                {
                    cout << "Error: You can only enter positive integers" << endl;
                    cin.clear();
                    cin.ignore();
                    goto e;
                }
                if ((player <= 0 || player > 3))
                {

                    cout << "Error: You can only take 1,2 or 3 sticks" << endl;
                    goto e;
                }
                if (player > stick)
                {
                    cout << "Error: The number should be less than or equal to the remaining number of sticks" << endl;
                    goto e;
                }
                stick -= player;
                if (stick > 0)
                {
                    for (int i = 0; i < 6; i++)
                    {
                        for (int j = 0; j < stick; j++)
                        {
                            cout << "|" << " ";
                        }
                        cout << endl;
                    }
                }
                if (turn == 1)//to alternate betwen the two players
                {
                    turn++;
                }
                else
                {
                    turn--;
                }
            }
            if (turn == 1)
            {
                cout << "Since player " << turn + 1 << " took the last stick player " << turn << " wins" << endl;//player 1 wins
            }
            else
            {
                cout << "Since player " << turn - 1 << " took the last stick player " << turn << " wins" << endl;//player 2 wins
            }

            if (turn == 1)
            {
                wins[turn - 1]++;//stats for player 1
                loses[turn]++;//stats for player 2
            }
            if (turn == 2)
            {
                wins[turn - 1]++;//stats for player 2
                loses[turn - 2]++;//stats for player 1
            }
            cout << "would tou like to continue in this game mode?(Y/N)" << endl;
            cin >> game_mode;
            if (game_mode != 'Y' && game_mode != 'y')
            {
                cout << "Game stats" << endl;
                cout << "Rounds played: " << total << endl;
                cout << "Player 1 Wins: " << wins[0] << " | Player 1 Losses: " << loses[0] << endl;
                cout << "Player 2 Wins: " << wins[1] << " | Player 2 Losses: " << loses[1] << endl;
                goto c;
            }
        }
    }
    default:
    {
        cout << "invalid input" << endl;
        cin.clear();
        cin.ignore();
        goto c;
    }
    }
}