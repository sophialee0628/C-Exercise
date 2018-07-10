// Seung Eun Lee
// 2018-07-04
// calculator

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double op1,op2,result;
    char op;
    
    cout << "Type an expression: num op num (e.g. 56.0 - 6): ";
    cin >>op1>>op>>op2; // separated by whitespace
    
    switch (op)
    {
        case '+': result= op1 + op2 ;
        break;
        case '-':result= op1 - op2 ;
        break;
        
        case '*':result= op1 * op2 ;
        break;
            
        case '/':
            if( op2==0)
            { cout<<"You cannot divide by 0 ! \n";
                exit(0);
            }
            else {result= op1 / op2; }
            break;
            
        default: cout<<"Wrong operator!\n"; exit(0);
    }
    
    cout<<op1<<" "<<op<<" "<<op2<<" = "<<result<<endl;
    
    
    return 0;
    
}
