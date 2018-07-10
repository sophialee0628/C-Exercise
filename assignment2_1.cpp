// Seung Eun Lee 2018-07-01
//Write a program that prompts the user to input the capacity, in gallons, of an automobile fuel tank and the miles per gallon the automobile can be driven. 
//The program then outputs the number of miles the automobile can be driven without refueling. 
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
