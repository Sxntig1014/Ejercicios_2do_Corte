#include "bank_account.h"

namespace BankAccount {

BankAccount::BankAccount() : balance(0), is_open(false) {}

void BankAccount::open() {
    std::lock_guard<std::mutex> lock(account_mutex);
    if (is_open) {
        throw std::account_error("La cuenta ya está abierta.");
    }
    balance = 0;
    is_open = true;
}

void BankAccount::close() {
    std::lock_guard<std::mutex> lock(account_mutex);
    if (!is_open) {
        throw std::account_error("La cuenta ya está cerrada.");
    }
    is_open = false;
}

void BankAccount::deposit(int amount) {
    std::lock_guard<std::mutex> lock(account_mutex);
    if (!is_open) {
        throw std::account_error("No se puede depositar en una cuenta cerrada.");
    }
    if (amount < 0) {
        throw std::account_error("El monto a depositar debe ser positivo.");
    }
    balance += amount;
}

void BankAccount::withdraw(int amount) {
    std::lock_guard<std::mutex> lock(account_mutex);
    if (!is_open) {
        throw std::account_error("No se puede retirar de una cuenta cerrada.");
    }
    if (amount < 0 || amount > balance) {
        throw std::account_error("Monto de retiro inválido o fondos insuficientes.");
    }
    balance -= amount;
}

int BankAccount::get_balance() const {
    std::lock_guard<std::mutex> lock(account_mutex);
    if (!is_open) {
        throw std::account_error("No se puede consultar el saldo de una cuenta cerrada.");
    }
    return balance;
}

}
