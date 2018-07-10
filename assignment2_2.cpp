// Seung Eun Lee 2018-07-01
//Write a program that prompts the user to input the elapsed time for an event in seconds. 
//The program then outputs the elapsed time in hours, minutes, and seconds.
//(For example, if the elapsed time is 8000 seconds, then the output is 2:13:20.)

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

