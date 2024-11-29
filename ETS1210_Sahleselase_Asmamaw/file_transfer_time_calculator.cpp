#include<iostream>
using namespace std;
int main(){
    int file_size,transfer_rate=960,total_time,days,minutes,hours,seconds,total_seconds;
cout<<"Enter the file size in bytes: \n";
cin>>file_size;
/*file_size=419430400;*/
total_seconds=file_size/transfer_rate;
days=total_seconds/86400;
hours=(total_seconds%86400)/3600;
minutes=((total_seconds%86400)%3600)/60;
seconds=((total_seconds%86400)%3600)%60;
cout<<"The file transfer will take "<<days<<" day(s) "<<hours<<" hour(s) "<<minutes<<" minute(s) and "<<seconds<<" second(s).\n";

}