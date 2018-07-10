// Seung Eun Lee 2018-07-01
//I used cout & cin
#include <iostream>
using namespace std;

int main ( )
{

double capacity; 
double mpg;	
double miles;	

cout<<"How big is the tank in gallons?";
cin >> capacity;
cout<<"What is the miles per gallon?";
cin>>mpg;


miles=capacity*mpg;

cout <<"You can drive up to "<< miles<<"miles";

return 0;
}
