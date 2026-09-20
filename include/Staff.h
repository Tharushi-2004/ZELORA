#ifndef STAFF_H
#define STAFF_H

#include "Person.h"

class Staff : public Person
{
private:
    string position;
    double salary;

public:
    Staff();
    Staff(int id, string name, string phone, string position, double salary);

    void setPosition(string position);
    void setSalary(double salary);

    string getPosition();
    double getSalary();

    void display() override;
};

#endif