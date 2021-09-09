/*
  Esta classe vai realizar operações com frações. Você pode imaginar
  essa classe como uma evolução da classe Operations, mas própria para
  frações. 
  
  Em tese, a definição interna de uma classe não deve importar para
  quem está fora da classe, o importante é que a classe cumpra
  corretamente o que se propõe a fazer (métodos públicos). Entretanto,
  aqui nós vamos fazer uma restrição e exigir que a classe armazene as
  frações na forma reduzida. Por exemplo, a fração 2/4 deve ser
  armazenada internamente como 1/2.  
 */

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {  
 private:
  /*
    Dois atributos são necessários, um para representar o numerador e
    outro para representar o denominador.
   */
  int numerator; 
  int denominator;

  /*
    Use este método privado como auxiliar. O método irá alterar os
    atributos para que seja representado na forma reduzida. Como é um
    método responsável apenas por administrar a representação interna,
    não precisa ser visível fora da classe.
   */
  void reduction(); 
  
 public:
  /*
    Não há nada de especial no construtor. Note apenas que não estou
    dando um nome para os parâmetros! Por exemplo, anteriormente eu
    estava fazendo "int a = 0" e agora eu estou fazendo "int =
    0". Isso ocorre porque o nome dos parâmetros só é obrigatório no
    momento de implementar a classe, no arquivo "rational.cpp".
   */
  Rational( int = 0, int = 1 );

  /*
    Nos métodos abaixo, os parâmetros são objetos ao invés de tipos
    básicos. Isso é diferente do que temos feito até o momento. Você
    deve notar principalmente os seguintes pontos.
    
    1 - Os objetos foram passados por referência dada a utilização do
    "&". Caso esse "&" não tivesse sido informado, o objeto seria
    passado por valor, ou seja, uma cópia do objeto seria feita em
    outra região de memória e essa região de memória passaria a ser
    usada. A passagem de parâmetros por valor pode impactar o
    desempenho se o objeto for muito grande.

    2 - A palavra const está aqui sendo usada para garantir que os
    objetos que vieram por parâmetro nsão sejam alterados. Note que,
    como estamos passando por referência, qualquer alteração do objeto
    dentro da função modificaria o objeto fora da função. Isso costuma
    ser perigoso.

    3 - Nas funções abaixo, o resultado deve ser sempre devolvido como
    um novo objeto, dado que o tipo de retorno é Rational. Você
    consegue observar que existem três objetos envolvidos?
   */  
  Rational addition( const Rational & ); 
  Rational subtraction( const Rational & ); 
  Rational multiplication( const Rational & ); 
  Rational division( const Rational & );
  
  /*
    Neste método, você irá imprimir o número racional em formato de
    fração.
  */
  void printRational ();
  /*
    Neste método, você irá imprimir o número racional como um número
    real.
   */
  void printRationalAsDouble(); 

};
#endif
