# include <iostream>
# include <cmath>
# include <iomanip>
using namespace std;
int main(){
    int number;
    cin >> number;
    int num, num_digit;
    cout << "enter your number: " << endl;
    cin >> num;
    int rev = 0, temp = num, i = 0;
    cout << "choose one of the following: "<<endl;
    cout << "1. Reverse of the number" << endl;
    cout << "2. Number of digits" << endl;
    cout << "3. Product of even digits" << endl;
    cout << "4. print the First and last digit" << endl;
    cout << "5. Swap first and last digit with their sum" << endl;
    cout << "6. Palindrome" << endl;
    cout << "7. Frequency of each digit and putting it in a table" << endl;
    cout << "8.  strong number or not" << endl;
    cout << "9. Perfect number or not" << endl;
    cout << "10. Exit" << endl;
    switch (number){
    case 1:
    {while (temp > 0)
    {
     num_digit = temp % 10;
    rev = rev  * 10 + num_digit ;
     temp = temp / 10;
    }
     cout << "Reverse of the number: " << rev << endl;
    break;}
   
   case 2:
   {cout << "input your number: " <<endl;
    while(temp > 0)
    { temp = temp / 10;
      i++; 
    }
    cout << "the number of digits is: "<< i <<endl;
    break;}
    case 3:{
    int product = 1;
    temp = num; 
    while (temp > 0){
    num_digit = temp % 10;
    if (num_digit % 2 == 0)
    { product *= num_digit; }
    temp = temp / 10;
    }
    cout << "The product of the even digits is: " << product << endl;
    break;
    }

    case 4: 
    { int temp = num; 
    int first = 0, last = 0; 
    bool first_digit_found = false;
     while (temp > 0) 
     { num_digit = temp % 10; 
     last = num_digit; 
     if (!first_digit_found) {
      first = last;
      first_digit_found = true; } 
     temp = temp / 10; } 
     cout << "Last and First digit: " << first << " and " << last << endl;
     cout << "Their sum is: " << first + last << endl; 
     break;}
    
    case 5:
    {int first = 0, last = 0; 
    int newNum = 0;
     while (temp > 0) {
    num_digit = temp % 10;
       if (num_digit == first) {
        num_digit = last;
        }
       else if (num_digit == last) {
        num_digit = first;
        }
       newNum = newNum * 10 + num_digit;
       temp /= 10;
        }
 cout << "Number after swapping: " << newNum << endl;
            break;}
        
    case 6: {
        while (temp > 0){
     num_digit = temp % 10;
    rev = rev  * 10 + num_digit ;
     temp = temp / 10;}
     if (num = rev){
        cout << "The number is a palindrome" << endl;
     }
     else{cout <<"Not a palindrome number: " <<endl;}
    break;
    }
    case 7:{
    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    int count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
    int temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        temp /= 10;
        switch (digit) {
            case 0: count0++; break;
            case 1: count1++; break;
            case 2: count2++; break;
            case 3: count3++; break;
            case 4: count4++; break;
            case 5: count5++; break;
            case 6: count6++; break;
            case 7: count7++; break;
            case 8: count8++; break;
            case 9: count9++; break;
        }
    }

    cout << "Digit\tFrequency" << endl;
    if (count0 > 0) cout << "0\t" << count0 << endl;
    if (count1 > 0) cout << "1\t" << count1 << endl;
    if (count2 > 0) cout << "2\t" << count2 << endl;
    if (count3 > 0) cout << "3\t" << count3 << endl;
    if (count4 > 0) cout << "4\t" << count4 << endl;
    if (count5 > 0) cout << "5\t" << count5 << endl;
    if (count6 > 0) cout << "6\t" << count6 << endl;
    if (count7 > 0) cout << "7\t" << count7 << endl;
    if (count8 > 0) cout << "8\t" << count8 << endl;
    if (count9 > 0) cout << "9\t" << count9 << endl;}

    case 8: { 
            int strong_num = 0;
            while (temp > 0) {
                num_digit = temp % 10;
                int fact = 1;
                for (int i = 1; i <= num_digit; i++) {
                    fact *= i;
                }
                strong_num += fact;
                temp /= 10;
            }
            if (strong_num == num) {
                cout << "Strong number: Yes" << endl;
            } else {
                cout << "Strong number: No" << endl;
            }
            break;}
            case 9:{
                   int perfect = 0;
            for (int i = 1; i < num; i++) {
                if (num % i == 0) {
                    perfect += i;
                }
            }
            if (perfect == num) {
                cout << "Perfect number: Yes" << endl;
            } else {
                cout << "Perfect number: No" << endl;
            }
            break;}
      case 10:{cout <<"EXIT"<<endl;}
    default: {cout << "dosen't exist in the menu."<<endl;}
    }
    
}
