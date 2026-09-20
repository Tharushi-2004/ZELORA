#include <iostream>
#include <vector>

#include "../include/Person.h"
#include "../include/Customer.h"
#include "../include/Staff.h"
#include "../include/Service.h"
#include "../include/Appointment.h"
#include "../include/Database.h"

using namespace std;

int main()
{
    cout << "======================================" << endl;
    cout << "        SALON ZELORA SYSTEM" << endl;
    cout << "======================================" << endl;

    // Customer vector
    vector<Customer> customers;

    // Database
    Database database;

    cout << "\nDatabase Status: "
         << database.getConnectionStatus() << endl;

    database.connect();

    cout << "Database Status: "
         << database.getConnectionStatus() << endl;

    // Polymorphism Test
    Person* person1;
    Person* person2;

    person1 = new Customer(
        1,
        "Tharushi",
        "0712345678",
        "tharushi@gmail.com"
    );

    person2 = new Staff(
        101,
        "Nimali",
        "0771234567",
        "Hair Stylist",
        50000
    );

    cout << "\n--- Polymorphism Test ---" << endl;

    person1->display();

    cout << endl;

    person2->display();

    delete person1;
    delete person2;

    // Customer
    Customer customer(
        1,
        "Tharushi",
        "0712345678",
        "tharushi@gmail.com"
    );

    cout << "\n--- Customer Details ---" << endl;
    customer.display();

    // Add customer to vector
    customers.push_back(customer);

    // Staff
    Staff staff(
        101,
        "Nimali",
        "0771234567",
        "Hair Stylist",
        50000
    );

    cout << "\n--- Staff Details ---" << endl;
    staff.display();

    // Service
    Service service(
        201,
        "Hair Cut",
        2500,
        45
    );

    cout << "\n--- Service Details ---" << endl;
    service.display();

    // Appointment
    Appointment appointment(
        301,
        customer.getId(),
        service.getServiceId(),
        "2026-09-25",
        "10:00 AM"
    );

    cout << "\n--- Appointment Details ---" << endl;
    appointment.display();

    // Customer vector test
    cout << "\n--- Customer Records ---" << endl;

    for (Customer c : customers)
    {
        c.display();
        cout << endl;
    }

    // Disconnect database
    database.disconnect();

    cout << "Database Status: "
         << database.getConnectionStatus() << endl;

    cout << "\n======================================" << endl;
    cout << "       System Test Completed!" << endl;
    cout << "======================================" << endl;

    return 0;
}