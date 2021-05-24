#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

int main()
{
    vector<string> text;
    string line;
    while(cin>>line)
    {
        text.push_back(line);
    }
    for(auto it=text.begin(); it!=text.end() && !it->empty(); it++)
    {
        for(auto ch=it->begin(); ch!=it->end(); ch++)
        {
            if(isalpha(*ch))
            {
                *ch = isupper(*ch);
            }
        }
        cout << *it << endl;
    }
    return 0;
}