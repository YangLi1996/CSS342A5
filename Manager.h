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
    
    void buildQueue();  // build command queue
    void buildTree();  // build BSTree
    void addTxn();    // deal with transaction command

private:
    BSTree infoTree;
    queue<Transaction> txnnQueue; 
    
};

#endif

