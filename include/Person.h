#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person
{
protected:
    int id;
    string name;
    string phone;

public:
    Person();
    Person(int id, string name, string phone);

    void setId(int id);
    void setName(string name);
    void setPhone(string phone);

    int getId();
    string getName();
    string getPhone();

    virtual void display();
};

#endif