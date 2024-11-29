#include<iostream>
using namespace std;
int main(){
float gallons,milesPerGallon,numberOfMiles;
cout<<"Enter the fuel capacity of the automobile in gallons: \n";
cin>>gallons;
cout<<"Enter the miles per gallon the automobile can travel: \n";
cin>>milesPerGallon;
numberOfMiles=gallons*milesPerGallon;
cout<<"The automobile can travel for "<<numberOfMiles<<" miles.";
}
