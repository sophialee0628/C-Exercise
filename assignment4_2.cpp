// Seung Eun Lee
// 2018-07-03
// Pythagorean theorem
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    
    
    cout << "Type three lengths of the triangle : ";
    cin >> a>>b>>c; // separated by whitespace
    
    //if a^2=b^2+c^2 Or...
    
    if ((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==b*b+a*a))
        
        cout<<"It is a right triangle\n";
    else
        cout<<"It is not a right triangle\n";
    return 0;
    
}
