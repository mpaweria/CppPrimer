#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str{"a simple string"};
    cout << "String: " << str;
    for(auto &c : str)
    {
        c = 'X';
    }
    cout << "New string: " << str;
}