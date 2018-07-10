// Seung Eun Lee
// 2018-07-05
// Number guessing game

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
