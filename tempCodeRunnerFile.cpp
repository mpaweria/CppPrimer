#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    int num=0, sum=0;
    while(cin>>num)
    {
        vec.push_back(num);
    }
    if(vec.size()==0)
    {
        cout << "Vector is empty!" << endl;
        return -1;
    }
    else if(vec.size()==1)
    {
        cout << "Vector has only 1 element." << endl;
        return -1;
    }
    else
    {
        for(int i=0; i<vec.size(); i++)
        {
            sum=vec[i]+vec[i+1];
            cout << "Sum of " << vec[i] << " + " << vec[i+1] << " is " << sum << endl;
        }
    }
    return 0;
}