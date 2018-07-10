// Seung Eun Lee
// 2018-07-02
// Coins
//Write a program that prompts the user to input a number of quarters, dimes, and nickels. 
//The program then outputs the total value of the coins in pennies.
#include <iostream>
using namespace std;

int main ()
{
int dimes, quarters, nickels;
int total;

    //input
    cout<<"How many quarters do you have? ";
    cin>>quarters;
    cout<<"How many dimes do you have? ";
    cin>>dimes;
    cout<<"How many nickels do you have? ";
    cin>>nickels;
    
    //calculation
    total= 10*dimes+25*quarters+5*nickels;
    
    //results
    cout<<"The total money you have is "<<total<<" in pennies.\n";
    
    return 0;
}
