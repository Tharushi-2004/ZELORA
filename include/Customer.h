#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"

class Customer : public Person
{
private:
    string email;

public:
    Customer();
    Customer(int id, string name, string phone, string email);

    void setEmail(string email);
    string getEmail();

    void display() override;
};

#endif