#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>
using namespace std;

class Person;
istream &read(istream &in, Person &person);

class Person 
{
    // constructors
    Person() = default;
    Person(string n): name(n) { }
    Person(string n, string add): name(n), address(add) { }
    Person(istream &is) { read(is, *this); }

    public:                 // otherwise non-member functions were not able to access data members or could have  
        string name;        // use struct in place of class as its members are public by default.
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