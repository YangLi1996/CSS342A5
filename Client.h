#ifndef _CLIENT_H_
#define _CLIENT_H_
#include <iostream>
#include <fstream>
#include "Account.h"
#include <string>
using namespace std;

class Client {

    friend ostream& operator<<();
    friend istream& operator>>();

public:
    // Constructor
    Client();
    Client();            // copy consturctor
    ~Client();

    bool isTEmpty() const;                 // is tree empty?
    void makeTEmpty();                     // make tree empty
    void getLast();
    void getFirst();
    void getID();                   // get name or ID from certain client


private:
    string lastName, firstName;
    int clientID;
    Account accounts[10];
};

#endif

