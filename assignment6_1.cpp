// Seung Eun Lee
// 2018-07-04
//range 0~100

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int target,guess;
    int count=0;
    bool isDone = false;
    
    //decide a number randomly
    srand(time(0));
    target= rand()%101;
    
    // loop until the one gets correct answer
    
    while (!isDone)
    {   cout << "What's your guess [0 - 100] ?: ";
        cin >>guess;
        count++; //the count is increased by 1 after the each guess
        if (guess==target)
        {  cout << "You got it by "<<count<<" guesses.\n";
            isDone=true;
        }
        else if (guess < target)
        cout << "Your guess is lower than the number. Guess again! \n";
        else
        cout << "Your guess is higher than the number. Guess again! \n";
    
    }
    
    return 0;
    
}
