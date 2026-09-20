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


    // ==================================
    // Polymorphism Test
    // ==================================

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


    // ==================================
    // Default Customer
    // ==================================

    Customer customer(
        1,
        "Tharushi",
        "0712345678",
        "tharushi@gmail.com"
    );

    customers.push_back(customer);


    // ==================================
    // Staff
    // ==================================

    Staff staff(
        101,
        "Nimali",
        "0771234567",
        "Hair Stylist",
        50000
    );


    // ==================================
    // Service
    // ==================================

    Service service(
        201,
        "Hair Cut",
        2500,
        45
    );


    // ==================================
    // Appointment
    // ==================================

    Appointment appointment(
        301,
        customer.getId(),
        service.getServiceId(),
        "2026-09-25",
        "10:00 AM"
    );


    // ==================================
    // Customer Management Menu
    // ==================================

    int choice;

    do
    {
        cout << "\n======================================" << endl;
        cout << "        CUSTOMER MANAGEMENT" << endl;
        cout << "======================================" << endl;

        cout << "1. Add Customer" << endl;
        cout << "2. View Customers" << endl;
        cout << "3. Update Customer" << endl;
        cout << "4. Delete Customer" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;


        switch (choice)
        {

            // ==================================
            // 1. Add Customer
            // ==================================

            case 1:
            {
                string name;
                string phone;
                string email;

                int newId = customers.size() + 1;

                cout << "\n--- Add New Customer ---" << endl;

                cout << "Enter Customer Name: ";

                cin.ignore();

                getline(cin, name);

                cout << "Enter Phone: ";

                getline(cin, phone);

                cout << "Enter Email: ";

                getline(cin, email);


                Customer newCustomer(
                    newId,
                    name,
                    phone,
                    email
                );


                customers.push_back(newCustomer);


                cout << "\nCustomer added successfully!" << endl;

                cout << "Customer ID: "
                     << newId << endl;

                break;
            }


            // ==================================
            // 2. View Customers
            // ==================================

            case 2:
            {
                cout << "\n--- Customer Records ---" << endl;


                if (customers.empty())
                {
                    cout << "No customers found." << endl;
                }
                else
                {
                    for (Customer &c : customers)
                    {
                        c.display();

                        cout << endl;
                    }
                }

                break;
            }


            // ==================================
            // 3. Update Customer
            // ==================================

            case 3:
            {
                int customerId;

                string name;
                string phone;
                string email;

                cout << "\n--- Update Customer ---" << endl;

                cout << "Enter Customer ID to update: ";

                cin >> customerId;


                bool found = false;


                for (Customer &c : customers)
                {
                    if (c.getId() == customerId)
                    {
                        cout << "Enter New Name: ";

                        cin.ignore();

                        getline(cin, name);


                        cout << "Enter New Phone: ";

                        getline(cin, phone);


                        cout << "Enter New Email: ";

                        getline(cin, email);


                        c.setName(name);

                        c.setPhone(phone);

                        c.setEmail(email);


                        cout << "\nCustomer updated successfully!"
                             << endl;


                        found = true;

                        break;
                    }
                }


                if (!found)
                {
                    cout << "\nCustomer not found!"
                         << endl;
                }

                break;
            }


            // ==================================
            // 4. Delete Customer
            // ==================================

            case 4:
            {
                int customerId;

                cout << "\n--- Delete Customer ---" << endl;

                cout << "Enter Customer ID to delete: ";

                cin >> customerId;


                bool found = false;


                for (auto it = customers.begin();
                     it != customers.end();
                     ++it)
                {
                    if (it->getId() == customerId)
                    {
                        customers.erase(it);

                        cout << "\nCustomer deleted successfully!"
                             << endl;

                        found = true;

                        break;
                    }
                }


                if (!found)
                {
                    cout << "\nCustomer not found!"
                         << endl;
                }

                break;
            }


            // ==================================
            // 5. Exit
            // ==================================

            case 5:
            {
                cout << "\nExiting Customer Management..."
                     << endl;

                break;
            }


            // ==================================
            // Invalid Choice
            // ==================================

            default:
            {
                cout << "\nInvalid choice!"
                     << endl;

                break;
            }
        }

    }
    while (choice != 5);


    // ==================================
    // Existing System Details
    // ==================================

    cout << "\n--- Customer Details ---" << endl;

    customer.display();


    cout << "\n--- Staff Details ---" << endl;

    staff.display();


    cout << "\n--- Service Details ---" << endl;

    service.display();


    cout << "\n--- Appointment Details ---" << endl;

    appointment.display();


    // ==================================
    // Disconnect Database
    // ==================================

    database.disconnect();


    cout << "\nDatabase Status: "
         << database.getConnectionStatus()
         << endl;


    cout << "\n======================================"
         << endl;

    cout << "       System Test Completed!"
         << endl;

    cout << "======================================"
         << endl;


    return 0;
}

