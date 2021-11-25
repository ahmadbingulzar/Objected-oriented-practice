#include <iostream>
#include "prime.h"       //library for prime number
#include "validations.h" //library for validations
using namespace std;

int main()
{
    /*------------------------------------
------------------------------------*/
    Prime user_1;
    bool flag = true;
    int *resulting;
    int result;
    int lastelement;
    int number[8] = {};
    /*---------------------------------------
---------------------------------------*/
    for (int i = 0; i <= 8; i++)
    {
        cout << "Enter an eight digit number :";
        cin >> number[i];
    }
    result = user_1.prime_check(number);
    resulting = user_1.rotate(number, result);

    cout << endl;
    cout << "larget number is = " << result << endl;
    cout << "Resulting Number" << endl;
    for (int i = 0; i <= 8; i++)
    {
        cout << *(resulting + i);
        lastelement = *(resulting + i);
    }

    cout << endl;
    cout << "last element = " << lastelement << endl;

    //prime number check
    if (prime_check(lastelement == true))
        cout << lastelement << " is a prime number";
    else
        cout << lastelement << " is not a prime number";
    return 0;
}
