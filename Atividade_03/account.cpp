#include <iostream>
#include <iomanip>
#include "account.h"
using namespace std;

// O construtor já está construído.
Account::Account(int no, double b) : accountNumber(no), balance(b) { }


/*
  A função print também já está implementada.
 */
void Account::print() const {
  cout << fixed << setprecision(2);
  cout << "A/C no: " << accountNumber << " Balance=R$" << balance << endl;
}


int Account::getAccountNumber() const {
  // ToDo: implemente o método
  return accountNumber;
}


double Account::getBalance() const {
  // ToDo: implemente o método
  return balance;
}


void Account::setBalance(double b) {
  // ToDo: implemente o método
  balance = b;
}

/*
  Não esqueça que amount deve ser positivo.
 */

void Account::credit(double amount) {
  if (amount <= 0){
    printf("O valor deve ser positivo!\n");
    return;
  }
  balance += amount;
}

/*
  Não esqueça que a nossa conta corrente não pode ficar negativa.
 */
void Account::debit(double amount) {
  // ToDo: implemente o método
  if (amount > balance){
    printf("Operação não realizada\n");
    return;
  }
  balance -= amount;
}


