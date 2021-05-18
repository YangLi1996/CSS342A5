#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
using namespace std;

class Account {


public:
    // Constructor
    Account();
    Account();          // copy constructor
    ~Account();

    void buildBalance();            // build an array using Client information
    bool isAccEmpty() const;                 // is tree empty?
    void makeAccEmpty();                     // make tree empty



private:
    Account accBalance[10];        // array contains 10 accounts information

};

#endif

