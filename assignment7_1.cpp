// Seung Eun Lee
// 2018-07-09
// calculating PI approximation
/**
The value of π can be approximated by using the following series:
Write a program that reads a value of n from the user and calculate π
using n terms of the given approximation formula.**/

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double P=1;

    cout<<" Type a number of the terms to use : ";
    cin>>n;

    
    //calculation
    for (int i=1;i<=n;i++)
        {
            if(i%2==0)//i is even
                P+=1.0/(2*i+1); //accumulating
            else //i is odd
                P-=1.0/(2*i+1);
        }
    
       //or we can use power of (-1) with i
       // P+=pow(-1.0,i)/(2*i+1); //accumulating

    P*=4;
    cout<<"\n Pi with "<<n<<"terms = :"<<P<<endl;
    
    return 0;

}
