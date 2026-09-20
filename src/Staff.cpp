#include "../include/Staff.h"
#include <iostream>

using namespace std;

Staff::Staff()
{
    position = "";
    salary = 0.0;
}

Staff::Staff(int id, string name, string phone, string position, double salary)
    : Person(id, name, phone)
{
    this->position = position;
    this->salary = salary;
}

void Staff::setPosition(string position)
{
    this->position = position;
}

void Staff::setSalary(double salary)
{
    this->salary = salary;
}

string Staff::getPosition()
{
    return position;
}

double Staff::getSalary()
{
    return salary;
}

void Staff::display()
{
    cout << "Staff ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Phone: " << phone << endl;
    cout << "Position: " << position << endl;
    cout << "Salary: " << salary << endl;
}