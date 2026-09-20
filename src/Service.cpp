#include "../include/Service.h"
#include <iostream>

using namespace std;

Service::Service()
{
    serviceId = 0;
    serviceName = "";
    price = 0.0;
    duration = 0;
}

Service::Service(int serviceId, string serviceName, double price, int duration)
{
    this->serviceId = serviceId;
    this->serviceName = serviceName;
    this->price = price;
    this->duration = duration;
}

void Service::setServiceId(int serviceId)
{
    this->serviceId = serviceId;
}

void Service::setServiceName(string serviceName)
{
    this->serviceName = serviceName;
}

void Service::setPrice(double price)
{
    this->price = price;
}

void Service::setDuration(int duration)
{
    this->duration = duration;
}

int Service::getServiceId()
{
    return serviceId;
}

string Service::getServiceName()
{
    return serviceName;
}

double Service::getPrice()
{
    return price;
}

int Service::getDuration()
{
    return duration;
}

void Service::display()
{
    cout << "Service ID: " << serviceId << endl;
    cout << "Service Name: " << serviceName << endl;
    cout << "Price: " << price << endl;
    cout << "Duration: " << duration << " minutes" << endl;
}