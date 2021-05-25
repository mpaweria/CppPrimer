#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Using arrays
    int arr1[10] = {}, arr2[10];
    for(int i=0; i<10; i++)
    {
        arr1[i]=i;      
    }
    cout << "Array 1: ";
    for(auto i: arr1)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Array 2: ";
    for(int i=0; i<10; i++)
    {
        arr2[i]=arr1[i];        
    }
    for(auto i: arr2)
    {
        cout << i << " ";
    }
    cout << endl;

    //Using vectors
    vector<int> vec1(10);

    cout << "Vector 1: ";
    for(int i=0; i<10; i++)
    {
        vec1[i]=arr1[i];        
    }
    for(auto i: vec1)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> vec2(vec1);     //Copying vector 1 in vector 2.

    cout << "Vector 2: ";
    for(auto i: vec2)
    {
        cout << i << " ";
    }

    return 0;
}