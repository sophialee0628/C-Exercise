// Seung Eun Lee
// 2018-07-03
// output: three numbers in order
//Write a program that prompts the user to input three numbers. 
//The program should then output the numbers in ascending order
#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3;
    
    
    cout << "Input three numbers : ";
    cin >> n1>>n2>>n3; // separated by whitespace
    
    //biggest=(a>b)?((a>c)?a:c):((b>c)?b:c);
    
    
    if (n1 < n2)
        
    { if (n1 < n3) //n1 is smallest
            { if (n2 < n3)
                cout<<n1<<","<<n2<<","<<n3<<endl;
              else
                cout<<n1<<","<<n3<<","<<n2<<endl;
            }
      else  //n1 < n2 & n3 < n1
          cout<<n3<<","<<n1<<","<<n2<<endl;
    }
    
    else //n2 < n1
            { if (n1 < n3) //n2 is the smallest
                cout<<n2<<","<<n1<<","<<n3<<endl;
                
              else // n2 < n1 & n3 < n1
                  
                {if (n2 < n3) // n2 < n3 < n1
                   cout<<n2<<","<<n3<<","<<n1<<endl;
                 else //n2 < n1 & n3 < n2
                   cout<<n3<<","<<n2<<","<<n1<<endl;
                }
                
            }
    
    return 0;
}
