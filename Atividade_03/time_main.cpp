#include <iostream>
#include "time.h"    
using namespace std;

int main() {
  /*
    Neste primeiro objeto, passamos todos os parâmetros. Em outras
    palavras, nenhum valor padrão foi usado.
   */
  
  Time t1(23, 59, 59);   
  t1.print();       // 23:59:59
  t1.setHour(12);
  t1.setMinute(30);
  t1.setSecond(15);
  
  t1.print();       // 12:30:15
  cout << "Hour is "   << t1.getHour()   << endl;
  cout << "Minute is " << t1.getMinute() << endl;
  cout << "Second is " << t1.getSecond() << endl;

  /*
    Nesta segunda instância, todos os valores padrão foram usados.
   */
  Time t2;     
  t2.print();  // 00:00:00
  t2.setTime(1, 2, 3);
  t2.print();  // 01:02:03

  /*
    Nesta terceira instância, usamos o padrão apenas para minutos e
    segundos.
   */
  Time t3(12); 
  t3.print();  // 12:00:00

  // Nesta quarta instância, vamos fazer um teste com o seu método
  // nextSecond. Verifique se o que está sendo impresso é o valor que
  // eu indico abaixo.
  Time t4(23, 59, 58);
  t4.print();  // 23:59:58
  t4.nextSecond();
  t4.print();  // 23:59:59
  t4.nextSecond();
  /* Cuidado com o print abaixo, veja o que ele está retornando */
  t4.print();  // 00:00:00

  /*
    A classe que estamos criando não possui validação da
    entrada. Nesse caso, uma hora inválida pode ser impressa 
  */
  Time t5(25, 61, 99); // Valores fora do intervalo
  t5.print();  // 25:61:99

  /*
    ToDo: Altere a classe time.cpp para fazer validação da
    entrada. Caso o usuário queira inserir um valor x+n para um
    atributo cujo intervalo é [0..x], insira o valor x ao invés de
    x+n.

    Além disso, caso o usuário queira inserir um valor negativo,
    insira zero.
   */  
}
