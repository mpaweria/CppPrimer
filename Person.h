#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>
using namespace std;

struct Person 
{
    string name;
    string address;

    string getName() {return name;}
    string getAddress() {return address;}
};

//  non-member function
istream &read(istream &in, Person &person)
{
    in >> person.name >> person.address;
    return in;
}

ostream &print(ostream &out, Person &person)
{
    return out << person.name << " " << person.address;
}

#endif