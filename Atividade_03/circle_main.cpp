#include <iostream>
#include "circle.h"


/*
  A função abaixo é a principal. Estamos preocupados apenas com as
  chamadas ao construtor.
 */
int main() {
  /*
    Para gerar a instância c1, estamos invocando o construtor e
    passando dois parâmetros. Isso quer dizer que não vamos usar
    nenhum dos valores padrão.
   */  
  Circle c1(1.2, "blue");
  cout << "Radius=" << c1.getRadius() << " Area=" << c1.getArea()
       << " Color=" << c1.getColor() << endl;
 

  /*
    Para gerar a instância c2, estamos invocando o construtor e
    passando apenas um parâmetro referente ao raio. Isso quer dizer
    que a cor do nosso círculo deve usar o valor padrão, que é "red".
   */
  Circle c2(3.4);
  cout << "Radius=" << c2.getRadius() << " Area=" << c2.getArea()
       << " Color=" << c2.getColor() << endl;
 

  /*
    Estamos gerando a instância c3 sem passar nenhum parâmetro. Isso
    quer dizer que a instância dever usar apenas o que possui como
    padrão. Em outas palavras, o raio será "1" e a cor será "red".
   */
  Circle c3;      
  cout << "Radius=" << c3.getRadius() << " Area=" << c3.getArea()
       << " Color=" << c3.getColor() << endl;
  return 0;
}

/*

Compile o código e execute com:

g++ circle*.cpp
./a.out

 */
