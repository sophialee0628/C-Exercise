// Seung Eun Lee
// 2018-07-05
// Number guessing game
/**
A new author is in the process of negotiating a contract for a new romance novel. The publisher is offering three options. 
In the first option, the author is paid $5,000 upon delivery of the final manuscript and $20,000 when the novel is published. 
In the second option, the author is paid 12.5% of the net price of the novel for each copy of the novel sold. 
In the third option, the author is paid 10% of the net price for the first 4000 copies sold, and 14% of the net price for the copies sold over 4000. 
The author has some idea about the number of copies that will be sold and would like to have an estimate of the royalties generated under each option. 
Write a program that prompts the author to enter the net price of each copy of the novel and the estimated number of copies that will be sold. 
The program then outputs the royalties under each option and the best option the author could choose. 
(Use appropriate named constants to store the special values such as royalties rates and fixed royalties.)
**/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double netPrice,estimNum,op1,op2,op3;

    
    cout << "Type the net price of each copy of the novel ($) : ";
    cin >>netPrice; // separated by whitespace
    cout << "Type the estimated number of coppies that will be sold :";
    cin >> estimNum;
   
    //calculating royalties
    
    op1=5000+20000;
    op2=(12.5/100)*netPrice*estimNum;
    
    if (estimNum>=4000)
    { op3 =0.10*netPrice*4000+0.14*netPrice*(estimNum-4000);}
    else //case when estimNum is below 4000
    {op3=0.10*netPrice*estimNum;}
    
    cout << "The predicted royalties of choosing the options are \n option 1:"<<op1<<"$"<<"\n option 2:"<<op2<<"$"<<"\n option 3:"<<op3<<"$\n";
    
    //determining the best option using logical operators
    
    if (op1>op2 && op1>op3)
    {cout<<"Option One is the best option! ";}
    
    else if (op2>op1 && op2>op3)
    {cout<<"Option Two is the best option! ";}
    else
    { cout<<"Option Three is the best option! ";}
    
    
    return 0;
    
}
