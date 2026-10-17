// Recurrtion 2.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int rFibNum(int a, int b, int n)
{
    if (n == 1) {
        return a;
    }
    else if (n == 2)
    {
        return b;
    }
    else
    {
        return rFibNum(a, b, n - 1) + rFibNum(a, b, n-2);
    }
        
}


int main()
{
    cout << "Your Fabonacii number is "<<rFibNum(5,6,12);
    return 0;
}

