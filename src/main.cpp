#include <iostream>

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

    // Database
    Database database;

    cout << "\nDatabase Status: " << database.getConnectionStatus() << endl;

    database.connect();

    cout << "Database Status: " << database.getConnectionStatus() << endl;

    // Customer
    Customer customer(1, "Tharushi", "0712345678", "tharushi@gmail.com");

    cout << "\n--- Customer Details ---" << endl;
    customer.display();

    // Staff
    Staff staff(101, "Nimali", "0771234567", "Hair Stylist", 50000);

    cout << "\n--- Staff Details ---" << endl;
    staff.display();

    // Service
    Service service(201, "Hair Cut", 2500, 45);

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

    // Disconnect database
    database.disconnect();

    cout << "\nDatabase Status: "
         << database.getConnectionStatus() << endl;

    cout << "\n======================================" << endl;
    cout << "       System Test Completed!" << endl;
    cout << "======================================" << endl;

    return 0;
}