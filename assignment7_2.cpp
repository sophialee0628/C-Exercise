// Seung Eun Lee
// 2018-07-09
/**
• Suppose that the first number of a sequence is x, in which x is an
integer. Define a0 = x; an+1 = an
/2 if an
is even; an+1 = 3 x an+1 if an
is odd. Then, there exists an integer k such that ak = 1. Write a program
that prompts the user to input the value of x. The program output
the integer k such that ak = 1 and the numbers a0, a1, a2, , . . . , ak.
(For example, if x = 75, then k = 14, and the numbers a0, a1, a2, . . ., a14,
respectively, are 75, 226, 113, 340, 170, 85, 256, 128, 64, 32, 16, 8, 4,
2, 1.) Also enhance your program from by outputting the position of
the largest number and the largest number of the sequence a0, a1,a2, . . ., ak. 
(For example, the largest number of the above sequence is
340, and its position is 3.) Test your program for the following values
of x: 75, 111, 678, 732, 873, 2048, and 65535.
**/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n,x;
    int k=0;
    int max=0;
    int maxp=0;
    cout<<" Type the first terms of the sequence (a0) : ";
    cin>>x;
   
    
    cout<<" The sequence of x (a0,a1,...ak): "<<x;
    
    while(x!=1) // calculating until x becomes 1
    {
        if (x%2==0)//if x is even number
            x/=2;
        else //if x is odd number
            x=3*x+1;
        
        cout<<" "<<x; //showing the sequence
        
        // saving the largest number & the position of it
        if ( x > max)
        {  max=x; maxp=k+1;}
        
        k++;
    }

    cout<<"\n The value of  k: "<<k<<endl;
    
    cout<<" The  position of the largest number is "<< maxp <<" and the largest number of the sequence is "<<max << endl;
    
    
    
    return 0;

}
