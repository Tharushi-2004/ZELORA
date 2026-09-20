#ifndef SERVICE_H
#define SERVICE_H

#include <string>
using namespace std;

class Service
{
private:
    int serviceId;
    string serviceName;
    double price;
    int duration;

public:
    Service();
    Service(int serviceId, string serviceName, double price, int duration);

    void setServiceId(int serviceId);
    void setServiceName(string serviceName);
    void setPrice(double price);
    void setDuration(int duration);

    int getServiceId();
    string getServiceName();
    double getPrice();
    int getDuration();

    void display();
};

#endif