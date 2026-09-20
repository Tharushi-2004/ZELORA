#include "../include/Database.h"

Database::Database()
{
    connectionStatus = "Disconnected";
}

bool Database::connect()
{
    connectionStatus = "Connected";
    return true;
}

void Database::disconnect()
{
    connectionStatus = "Disconnected";
}

string Database::getConnectionStatus()
{
    return connectionStatus;
}