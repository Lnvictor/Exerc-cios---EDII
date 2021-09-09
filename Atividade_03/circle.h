/* 
   Você já deve saber que as classes são caixas com três
   compartimentos:

   1 - Nome: apenas um identificado para a classe

   2 - Atributos: variáveis globais que são vistas por todos os
   métodos dentro da classe.

   3- Métodos: conjunto de funções que definem o comportamento da
   classe.

   Vamos continuar o estudo com novas características de classes.
 */

#include <string> // Vamos usar o tipo string.

/*
  O tipo string está dentro do namespace "std". Nesse caso, sempre que
  quisermos declarar uma nova string, devemos usar "std::string". Como
  é meio chato ficar escrevendo isso todo o tempo, é preferível
  declarar que estamos usando o namespace std no código inteiro para
  podermos passar a usar apenas a palavra "string".
 */
using namespace std;

class Circle {         // Nome da Classe. O nome nos indica que esta
		       // classe é uma abstração de um círculo.
 private:
  double radius;       // Os nossos círculos devem possuir um raio e
  string color;	       // uma cor.
 public:
  /*
    Este método é visivelmente diferente dos outros. Perceba que ele
    não possui um tipo de retorno! Note também que ele possui o mesmo
    nome da classe.

    Quando isso ocorre, dizemos que ele é um método construtor. Ele
    serve para criar instâncias da classe.
   */  
  Circle(double r = 1.0, string c = "red");
  /*
    O que mais você percebe de diferente no método acima? Ele está
    declarando parâmetros e imediatamente atribui um valor ao
    parâmetro!

    Quando isso ocorre, o valor que está sendo atribuído deve ser
    usado como padrão caso o método seja invocado sem que o usuário
    forneça valores.
   */


  /*
    Os métodos abaixo permitem visualizar o conteúdo dos
    atributos. Observe que não é permitido que o atributo seja
    atualizado. É sempre interessante criar métodos de acessos como
    esses em suas próprias classes.

    Caso você quisesse atualizar os atributos, seria necessário criar
    métodos setRadius e setColor para atualizar o raio e a cor,
    respectivamente.
   */
  double getRadius() const;  
  string getColor()  const;

  /*
    O método abaixo fornece um valor processado a partir dos
    atributos.
   */
  double getArea()   const;
};
