#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <mutex>
#include <stdexcept>

namespace BankAccount {

class BankAccount {
private:
    int balance;
    bool is_open;
    mutable std::mutex account_mutex;

public:
    BankAccount();

    void open();
    void close();
    void deposit(int amount);
    void withdraw(int amount);
    int get_balance() const;
};

}

#endif
