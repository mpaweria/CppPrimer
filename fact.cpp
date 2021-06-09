#include <iostream>
#include "Chapter6.h"
using namespace std;

int fact(int num)
{
    int fact = 1;
    while(num>1)
    {
        fact*=num;
        num--;
    }
    return fact;
}

int abs(int val)
{
    return (val>0) ? val : -val;
}