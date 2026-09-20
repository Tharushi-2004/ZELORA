#include "../include/Customer.h"
#include <iostream>

using namespace std;

Customer::Customer()
{
    email = "";
}

Customer::Customer(int id, string name, string phone, string email)
    : Person(id, name, phone)
{
    this->email = email;
}

void Customer::setEmail(string email)
{
    this->email = email;
}

string Customer::getEmail()
{
    return email;
}

void Customer::display()
{
    cout << "Customer ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;
}