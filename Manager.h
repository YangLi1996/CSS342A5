#ifndef _MANAGER_H_
#define _MANAGER_H_
#include "Client.h"
#include "Transaction.h"
using namespace std;

class Manager {

public:
    // Constructor
    Manager();
    Manager();            // copy consturctor
    ~Manager();

    void displayAll();   // display all clients' information
    void displayCli();   // display certain client's information
    void displayAcc();   // display certain account's information
    void transCommand();    // deal with transaction command


};

#endif

