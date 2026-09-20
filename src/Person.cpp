#include "../include/Person.h"
#include <iostream>

using namespace std;

Person::Person()
{
    id = 0;
    name = "";
    phone = "";
}

Person::Person(int id, string name, string phone)
{
    this->id = id;
    this->name = name;
    this->phone = phone;
}

void Person::setId(int id)
{
    this->id = id;
}

void Person::setName(string name)
{
    this->name = name;
}

void Person::setPhone(string phone)
{
    this->phone = phone;
}

int Person::getId()
{
    return id;
}

string Person::getName()
{
    return name;
}

string Person::getPhone()
{
    return phone;
}

void Person::display()
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Phone: " << phone << endl;
}