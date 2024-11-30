#include<iostream>
using namespace std;
int main(){
    int x,y,result=1;
    cout<<"Enter the base number:\n";
    cin>>x;
    cout<<"Enter the Exponent number:\n";
    cin>>y;
    if(cin.fail() ||y<0){
        cout<<"Please enter a positive integer for the exponent";
        }
    else{
        for(int i=0;i<y;i++){
            result*=x;
        }
     cout<<x<<" raised to "<<y<<" is "<<result;
    }    
   
}
