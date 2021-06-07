#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1, str2;
    do
    {
        cout << "Enter 2 strings: ";
        cin >> str1 >> str2;

        if(str1==str2)
            cout << "Both the strings are equal." << endl;
        else if(str1>str2)
            cout << str1 << " is greater than " << str2 << endl;
        else
            cout << str2 << " is greater than " << str1 << endl;
    }
    while(cin);

    return 0;
}