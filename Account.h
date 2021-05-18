#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
using namespace std;

class Account {

public:
    // Constructor
    Account();
    Account();          // copy constructor
    ~Account();

    void setBalance();                       // set the Balance (useful for initial setup)
    bool isAccEmpty() const;                 // is balance 0?
    int getBalance() const;                  // return the balance
    
    bool deposit();                          // add money, for transactions
    bool withdraw();                         // remove money, for transactions
    
private:
    int balance;
    void makeAccEmpty();                     // for emptying the tree
};

#endif

