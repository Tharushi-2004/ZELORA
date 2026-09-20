#include "../include/Appointment.h"
#include <iostream>

using namespace std;

Appointment::Appointment()
{
    appointmentId = 0;
    customerId = 0;
    serviceId = 0;
    date = "";
    time = "";
}

Appointment::Appointment(int appointmentId, int customerId, int serviceId,
                         string date, string time)
{
    this->appointmentId = appointmentId;
    this->customerId = customerId;
    this->serviceId = serviceId;
    this->date = date;
    this->time = time;
}

void Appointment::setAppointmentId(int appointmentId)
{
    this->appointmentId = appointmentId;
}

void Appointment::setCustomerId(int customerId)
{
    this->customerId = customerId;
}

void Appointment::setServiceId(int serviceId)
{
    this->serviceId = serviceId;
}

void Appointment::setDate(string date)
{
    this->date = date;
}

void Appointment::setTime(string time)
{
    this->time = time;
}

int Appointment::getAppointmentId()
{
    return appointmentId;
}

int Appointment::getCustomerId()
{
    return customerId;
}

int Appointment::getServiceId()
{
    return serviceId;
}

string Appointment::getDate()
{
    return date;
}

string Appointment::getTime()
{
    return time;
}

void Appointment::display()
{
    cout << "Appointment ID: " << appointmentId << endl;
    cout << "Customer ID: " << customerId << endl;
    cout << "Service ID: " << serviceId << endl;
    cout << "Date: " << date << endl;
    cout << "Time: " << time << endl;
}