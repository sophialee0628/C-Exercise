// Seung Eun Lee
// 2018-07-04
//range 0~100
/**
Consider the following sequence of numbers:
1, 1, 2, 3, 5, 8, 13, 21, 34, ....
This sequence is called the Fibonacci sequence. Given the first two numbers of the
sequence (say, a1 and a2), the nth number an, n >= 3, of this sequence is given by:
an =an-1 + an-2
Thus: a3 = a2 + a1 = 1 + 1 = 2; a4 = a3 + a2 = 2 + 1 = 3
and so on. Note that a2 = 1 and a1 = 1.
However, given any first two numbers, using this process, you can determine the nth number, 
an,n >= 3, of the sequence. We will again call such a sequence a
Fibonacci sequence. Suppose a2 = 6 and a1 = 3.
Then: a3 = a2 + a1 = 6 + 3 = 9; a4 = a3 + a2 = 9 + 6 = 15
Write a program that that uses a while loop to find a n-th Fibonacci number given
the first two numbers.
Input: The first two Fibonacci numbers and the desired Fibonacci number.
Output: The nth Fibonacci number.

**/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int a,b,nth,result;
    int count=3;

    cout<<" Type two first terms of Fibonacci series : ";
    cin>>a>>b;
    cout<<"\n Which term do you want to get? (nth Number) : ";
    cin>>nth;
    
    //calculation
    
    if (nth==1)
        result=a;
    
    else if (nth==2)
        result=b;
    
    else 
    {
    while (count<=nth)
    {
        result=a+b;
        a=b;
        b=result;
        count++;
    
    }}

    cout<<"\n The "<<nth<<"th number of Fibonacci series is "<<result<<" ! \n"<<endl;
    return 0;

}
