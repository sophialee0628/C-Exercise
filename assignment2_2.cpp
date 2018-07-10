// Seung Eun Lee 2018-07-01
//I used cin to get input 'times' to calculate hours,minutes,seconds

#include <iostream>
using namespace std;

int main ( )
{

int times;
int hours;
int minutes;
int seconds;
int leftseconds;

cout<<"Input time :";
cin>>times;


hours= times/3600;
leftseconds= times-(3600*hours);
minutes=leftseconds/60;
seconds=leftseconds-(minutes*60);

cout << hours<<":"<<minutes<<":"<<seconds;

return 0;

}

