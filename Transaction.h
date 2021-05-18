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

    void buildQueue();            // build a queue from lab5command
    bool isQEmpty() const;                 // is queue empty?
    void makeQEmpty();                     // make queue empty

    // Commands
    void deposit();
    void withDraw();
    void move();
    void display();
    
    

private:
    queue<Transaction&> commands;
};

#endif

