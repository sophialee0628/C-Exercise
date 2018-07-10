// Seung Eun Lee
// 2018-07-04
// calculator
/**
Write a program that mimics a calculator. The program should take as input two integers and the operation to be performed. It should then output the numbers, the operator, and the result. (For division, if the denominator is zero, output an appropriate message.) Some sample outputs follow:
3 + 4 = 7
13 * 5 = 65
**/

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
