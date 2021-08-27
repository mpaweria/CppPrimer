#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>
using namespace std;

class Person 
{
    // friend function
    friend istream &read(istream &in, Person &person);
    friend ostream &print(ostream &out, Person &person);

    public:
    // constructors
    Person() = default;
    Person(string n): name(n) { }
    Person(string n, string add): name(n), address(add) { }
    Person(istream &is) { read(is, *this); }
                    
    string getName() {return name;}
    string getAddress() {return address;}

    private:
    string name;        
    string address;
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