#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>
using namespace std;

class Person 
{
    string name;
    string address;

    string getName() {return name;}
    string getAddress() {return address;}
};

#endif