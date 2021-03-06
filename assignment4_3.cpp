// Seung Eun Lee
// 2018-07-03
// solutions of equation using cmath
/**The roots of the quadratic equation ax2 + bx + c = 0, a ≠ 0 are given by
the following formula:
In this formula, the term b^2-4ac is called the discriminant.
If b^2-4ac = 0 , then the equation has a single (repeated) root.
If b^2-4ac > 0, the equation has two real roots.
If b^2-4ac < 0, the equation has two complex roots.
Write a program that prompts the user to input the value of a (the coefficient of x2), b (the coefficient of x), and c (the constant term) and outputs the type of roots of the equation. Furthermore, if b^2-4ac>0, theprogram should output the roots of the quadratic equation. (Hint: Use
the function pow from the header file cmath to calculate the square
root.) **/


#include <iostream>
#include <cmath>

//x1= -b+sqrt(D)
//D=b*b-4*a*c
using namespace std;

int main()
{
    int a,b,c;
    double x1, x2;
    double D;
    
    cout << "Type three values of a (thecoefficient of x2), b (the coefficient of x), and c (the constant term)  : ";
    cin >> a>>b>>c; // separated by whitespace
    
    D= pow(b,2)-4*a*c;
    
    if (D>0)
        {   x1= (-b+sqrt(D))/(2*a);
            x2= (-b-sqrt(D))/(2*a);
            cout<<" The roots of the quadratic equation are " <<x1<<" and "<<x2<<"\n"<<endl;
        }
    else if (D==0)
        {   cout << " The roots are real and same." << endl;
            x1 = (-b + sqrt(D)) / (2*a);
            cout << " x1 = x2 = " << x1 << endl;
        }
    else
        cout << "No solution as a real number \n" ;
    return 0;
    
}
