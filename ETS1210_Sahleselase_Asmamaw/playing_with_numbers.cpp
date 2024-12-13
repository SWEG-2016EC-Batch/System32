#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    int remainder, reverse = 0;
    int temp, choice;
    int num_of_digits = 0;
    temp = num;
     cin >> num;
    while (temp != 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp = temp / 10;
    }
    cout << "Enter a number: ";
    int num_array[num_of_digits];
    for (int i = 0; i < num_of_digits; i++)
    {
        num_array[i] = reverse % 10;
        reverse /= 10;
    }
    
    cout << endl
         << "Enter \"1\" to get the reverse of the number you entered.";
    cout << endl
         << "Enter \"2\" to get the the number of digits in the number you entered.";
    cout << endl
         << "Enter \"3\" to get the product of the even digits in the number you entered.";
    cout << endl
         << "Enter \"4\" to get the first and last digits of the number you entered as well as their sum.";
    cout << endl
         << "Enter \"5\" to swap the first and last digit of the number you entered.";
    cout << endl
         << "Enter \"6\" to check whether or not the number you entered is a palandrome.";
    cout << endl
         << "Enter \"7\" to get the frequency of each digit of the number you entered.";
    cout << endl
         << "Enter \"8\" to check whether or not the number you entered is strong.";
    cout << endl
         << "Enter \"9\" to check whether or not the number you entered is perfect";
    cout << endl
         << "Enter \"10\" to terminate this program." << endl;
    cin >> choice;
    cout << endl;
    switch (choice)
    {
    case 1:
    {
        cout << num << " reversed is " << reverse << endl;
    }
    break;

    case 2:
    {
        int temp1 = num;

        while (temp1 != 0)
        {
            temp1 = temp1 / 10;
            num_of_digits++;
        }

        cout << "The number of digits in " << num << " is " << num_of_digits << endl;
    }
    break;

    case 3:
    {
        int product = 1;
        for (int i = 0; i < num_of_digits; i++)
        {
            if (num_array[i] % 2 == 0)
            {
                product *= num_array[i];
            }
        }
        cout << "The prodyct of the even digits in " << num << " is " << product << endl;
    }
    break;

    case 4:
    {
        int product = num_array[0] * num_array[num_of_digits - 1];
        cout << "The first digit of " << num << " is " << num_array[0] << endl;
        cout << "The last digit of " << num << " is " << num_array[num_of_digits - 1] << endl;
        cout << "The product of first digit add las digit of " << num << " is " << product << endl;
    }
    break;

    case 5:
    {
        int temp2;
        temp2 = num_array[0];
        num_array[0] = num_array[num_of_digits - 1];
        num_array[num_of_digits - 1] = temp2;
        cout << "when the first and last digit of " << num << " are swapped it turns to ";
        for (int i = 0; i < num_of_digits; i++)
        {
            cout << num_array[i];
        }
        cout << endl;
    }
    break;

    case 6:
    {
        if (num == reverse)
        {
            cout << num << "is a Palandrome" << endl;
        }
        else
        {
            cout << num << " is not a palandrome" << endl;
        }
    }
    break;

    case 7:
    {
        int freq[10] = {0}, digitt;
        int tempp = num;
        while (tempp > 0)
        {
            digitt = tempp % 10;
            freq[digitt]++;
            tempp /= 10;
        }
        cout << endl
             << "Frequencies of each digit in " << num << " are:" << endl;
        for (int i = 0; i < 10; i++)
        {
            if (freq[i] > 0)
            {
                cout << "Digit " << i << ": " << freq[i] << endl;
            }
        }
    }
    break;

    case 8:
    {
        int sum = 0;
        for (int i = 0; i < num_of_digits; i++)
        {
            int fact = 1;
            for (int j = 1; j <= num_array[i]; j++)
            {
                fact *= j;
            }
            sum += fact;
        }
        if (num == sum)
        {
            cout << num << " is strong" << endl;
        }
        else
        {
            cout << num << " is not strong" << endl;
        }
    }
    break;

    case 9:
    {
        int factor_sum = num;
        for (int i = 1; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                factor_sum += i;
            }
        }
        if ((factor_sum - num) == num)
        {
            cout << num << " is a perfect number" << endl;
        }
        else
        {
            cout << num << " is not a perfect number" << endl;
        }
    }
    break;

    case 10:
    {
        cout << "Program teminated" << endl;
    }
    break;
    default:
    {
        cout << "Invalid input" << endl;
    }
    }
}