#ifndef _MANAGER_H_
#define _MANAGER_H_
#include "Client.h"
#include "Transaction.h"
#include <queue>
using namespace std;

class Manager {

public:
    // Structors
    Manager();
    ~Manager();

    void displayClients();   // display all clients' information
    void displayClient();   // display certain client's information
    void displayAcc();   // display certain account's information
    void addTxn();    // deal with transaction command

private:
    BSTNode* BSTRoot;
    queue<Transaction> txnnQueue; 
    
};

#endif

