#ifndef _TRANSACTION_H_
#define _TRANSACTION_H_
#include <queue>
#include <iostream>
#include <fstream>
using namespace std;

class Transaction {
    
    friend ostream& operator<<();
    friend istream& operator>>();

public:
    // Constructor
    Transaction();
    Transaction();            // copy consturctor
    ~Transaction();

    bool execute();
    
private:
    char txnType;
    int account1;
    int account2;           // can be dummy account
    int txnValue;
};

#endif

