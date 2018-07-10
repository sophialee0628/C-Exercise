// Seung Eun Lee
// 2018-07-10

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int ;
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
