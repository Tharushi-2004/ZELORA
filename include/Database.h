#ifndef DATABASE_H
#define DATABASE_H

#include <string>
using namespace std;

class Database
{
private:
    string connectionStatus;

public:
    Database();

    bool connect();
    void disconnect();

    string getConnectionStatus();
};

#endif