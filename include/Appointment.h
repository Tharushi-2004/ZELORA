#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>
using namespace std;

class Appointment
{
private:
    int appointmentId;
    int customerId;
    int serviceId;
    string date;
    string time;

public:
    Appointment();
    Appointment(int appointmentId, int customerId, int serviceId,
                string date, string time);

    void setAppointmentId(int appointmentId);
    void setCustomerId(int customerId);
    void setServiceId(int serviceId);
    void setDate(string date);
    void setTime(string time);

    int getAppointmentId();
    int getCustomerId();
    int getServiceId();
    string getDate();
    string getTime();

    void display();
};

#endif