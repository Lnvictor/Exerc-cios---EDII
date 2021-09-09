/*
  Agora vamos criar o arquivo que inicia a execução do programa. Este
  código enviará informações para a tela do usuário, o que exige a
  biblioteca iostream. Ele também fará uso da classe Operations que
  está no arquivo operacoes.h. Nesse caso, precisamos incluir também
  esse arquivo.
 */
#include <iostream>
#include "operacoes.h"

int main() {
  /*
    Usaremos number1 e number2 para receber os dados do terminal.
   */
  int number1;
  int number2;

  /*
    Veja como declaramos uma instância da classe Operations. O nome da
    classe é um Tipo Abstrato de Dados. A partir desse momento, você
    pode chamar os métodos das classes.
   */
  Operations op;

  /*
    Aprenda a ler do terminal e a enviar as mensagens que serão vistas
    pelo usuário. Isso é muito diferente do que o que você fazia no
    terminal.
   */
  std::cout << "Digite o primeiro número: ";
  std::cin >> number1;

  std::cout << "Digite o segundo número: ";
  std::cin >> number2;

  /*
    Vamos usar um dos métodos da classe, que é o método setNumber.
   */
  op.setNumbers(number1, number2);


  /*
    Agora vamos invocar os outros métodos. Veja como é invocada a soma
    e enviada para a saída padrão.
   */
  std::cout << "Soma:            " << op.sum()  << std::endl;
  
  /* Apenas descomente a linha abaixo para enviar a subtração para a saída padrão */
  std::cout << "Subtração:       " << op.sub()  << std::endl;

  /* Agora faça todo o resto */
  std::cout <<  "Multiplicação:   " << op.mul() << std::endl; 
  std::cout <<  "Divisão Inteira: " << op.idiv() << std::endl;;
  std::cout <<  "Divisão Real:    " << op.fdiv() << std::endl;
  std::cout <<  "Resto:           " << op.res() << std::endl;

  return 0;
}

/* 
  Agora compile e execute o seu programa.

g++ operacoes*.cpp
./a.out

*/
