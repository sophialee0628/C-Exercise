// Seung Eun Lee
// 2018-07-04
//range 0~100

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
