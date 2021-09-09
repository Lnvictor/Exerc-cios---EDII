/*
  No arquivo operacoes.h, nós declaramos a existência de uma classe,
  que é um molde para criação de várias instâncias (objetos). Os
  atributos estáticos e o comportamento da classe já foram definidos,
  mas o código que realmente implementa esse comportamento ainda não
  foi adicionado. Faremos isso neste arquivo.
 */

/*
  Para podermos escrever o código da classe Operations, precisamos
  "ver" a declaração da classe. Nesse caso, precisamos usar a diretiva
  "include" e indicar em qual arquivo a classe se encontra.
 */
#include "operacoes.h"

/*
  Para escrever um método da classe Operations precisamos da seguinte sintaxe:


  
  <Tipo de Retorno> <Nome da Classe><Operador de resolução de escopo><Cabeçalho da Classe>



  <Tipo de Retorno>: deve ser o mesmo que foi declarado na definição
  da classe. Observe, por exemplo, que o tipo de retorno do método
  "sum" é "int".

  <Nome da Classe>: depois do tipo de retorno, deve vir o nome da
  classe. No nosso caso, "Operations".

  <Operador de resolução de escopo>: serve para dizer quem é o "dono"
  do método que estamos escrevendo. O operador é simplesmente dois
  dois-pontos. Ele serve para dizer que o método pertence a
  "Operations".

  <Após colocar o operador "::", basta repetir o cabeçalho da forma
  exata que estava na declaração da classe no arquivo .h.
 */
int Operations::sum() const {
  /*
    Você deve ter notado que o método sum obedece à sintaxe. Caso
    esteja em dúvida, cheque novamente. 

    Agora, sabemos que estamos em um método que pertence à classe
    Operations. Nesse caso, os atributos da classe são visíveis e
    podem ser acessados. Abaixo nós estamos simplesmente somando esses
    atributos.
   */  
  return number1 + number2;
}

/*
  Descomente o código abaixo. Esta é a implementação do método sub,
  que subtrai os dois atributos e devolve o resultado.
 */

int Operations::sub() const {
  return number1 - number2;
}

/*
  Descomente as declarações abaixo e implemente o que precisa ser
  feito para o código funcionar.
 */

int Operations::mul() const {
  return number1 * number2;
}

int Operations::idiv() const {
  return (int) number1 / number2;
}

float Operations::fdiv() const{
  return (float)number1 / number2;
}

int Operations::res() const{
  return number1 % number2;
}



/*
   O método 
 */
void Operations::setNumbers(int a, int b){
  number1 = a;
  number2 = b;
}
