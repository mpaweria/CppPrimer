#include<iostream>
using namespace std;

int abs(int val)
{
    return (val>0) ? val : -val;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Absolute value of " << num << " is " << abs(num);

    return 0;
}