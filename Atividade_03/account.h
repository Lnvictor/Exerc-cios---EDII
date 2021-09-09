/*
  A classe Account modela uma conta corrente. Ela contém:
  
  - Dois membros privados: accontNumber e balance

  - Métodos públicos "credit" e "debit" para adicionar ou sacar
    dinheiro na conta corrente. O método "debit" deverá imprimir
    "Operação não realizada" caso o valor a ser sacado seja maior que
    o dinheiro disponível.

  - Uma função pública "print" que já está implementada.
*/

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
 private:
  int accountNumber;
  double balance;
  
 public:
  Account(int accountNumber, double balance = 0.0);
  int getAccountNumber() const;
  double getBalance() const;
  void setBalance(double balance);
  void credit(double amount);
  void debit(double amount);
  void print() const;
};

#endif
