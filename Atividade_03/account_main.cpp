#include <iostream>
#include "account.h"

using namespace std;

int main() {
  Account a1(8111, 99.99);
  a1.print();     // A/C no: 8111 Balance=R$99.99
  a1.credit(20);
  a1.debit(10);
  a1.print();     // A/C no: 8111 Balance=R$109.99

  Account a2(8222);  // Inicializado com valor padrão.
  a2.print();        // A/C no: 8222 Balance=R$0.00
  a2.setBalance(100);
  a2.credit(20);
  a2.debit(200);  // Esse débito não pode ser permitido.
  a2.print();     // A/C no: 8222 Balance=R$120.00
  return 0;
}
