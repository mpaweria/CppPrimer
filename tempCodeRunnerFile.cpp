#include<iostream>
#include<string>
using namespace std;

string makePlural(int ctr, const string &word, const string &ending="s")
{
    return (ctr>1) ? word + ending : word;
}
int main()
{
    cout << "Singular success: " << makePlural(1, "success", "es") << endl;
    cout << "Plural success: " << makePlural(4, "success", "es") << endl;
    cout << "Singular failure: " << makePlural(1, "failure") << endl;
    cout << "Plural failure: " << makePlural(4, "failure") << endl;

    return 0;
}