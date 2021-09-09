#include <iostream>
#include "rational.h" 

using std::cout;

/*
  Observe abaixo que agora somos obrigados a dar um nome para o
  parâmetro. A função já está implementada, use como referência para
  todas as outras.
 */
Rational::Rational( int n, int d ) {
  numerator = n; 
  denominator = d; 
  reduction(); 
}

/*
  Abaixo o método que deve multiplicar dois números racionais. O
  primeiro número racional é a instância atual da classe, o segundo
  número racional é o que veio por parâmetro. Note que a multiplicação
  não deve alterar nenhum desses objetos, mas criar um terceiro objeto
  que será devolvido ao usuário desta função.
 */

Rational Rational::multiplication( const Rational &m ) {
  Rational t; // Cria um objeto racional que será retornaldo.

  /*
    Note que estamos dentro da classe Rational. Nesse caso, podemos
    acessar os atributos privados "numerator" e
    "denominator". Qualquer tentativa de acessar esses atributos feita
    fora da classe gerará um erro. Note que esta filosofia é diferente
    do "private" da linguagem "Java".
   */
  t.numerator   = m.numerator * numerator;
  t.denominator = m.denominator * denominator;
  t.reduction(); // Esta função auxiliar evita uma grande quantidade
		 // de problema.
  return t;
} 


/*
  Abaixo os outros métodos que você deve implementar. Eu já comecei a
  implementação de todos eles para você.
 */
Rational Rational::addition( const Rational &a ) {
  Rational t;
  // ToDo: Implemente o método.
  t.denominator = denominator * a.denominator;
  t.numerator = (t.denominator / denominator * numerator) + (t.denominator / a.denominator * a.numerator);
  t.reduction();
  return t;
}

Rational Rational::subtraction( const Rational &s ){
  Rational t;
  // ToDo: Implemente o método.
    t.denominator = denominator * s.denominator;
  t.numerator = (t.denominator / denominator * numerator) - (t.denominator / s.denominator * s.numerator);
  t.reduction();
  return t;
}

Rational Rational::division( const Rational &v ){
  // ToDo: Implemente o método.
  Rational tmp;
  tmp.numerator = v.denominator;
  tmp.denominator = v.numerator;

  return multiplication(tmp);
}

/*
  Crie agora os métodos que vão imprimir o número racional na tela do
  usuário. Não esqueça da divisão por zero. Acredito que você
  precisará fazer algumas pesquisas na internet e no StackOverFlow.
 */
void Rational::printRational () {
  // ToDo: Implemente o método.
  cout << numerator << "/" << denominator;
}

void Rational::printRationalAsDouble(){
  // ToDo: Implemente o método.
  cout << (double)numerator / denominator;
}


/*
  Implemente agora o método privado "reduction". Mostre ao professor
  que você saber computar o máximo divisor comum de dois números.
 */
void Rational::reduction() {
  // ToDo: Implemente o método.  
  int m = numerator;
  int n = denominator;
  int res;

  do {
    res = m % n;
    m = n;
    n = res;
  } while (res != 0);

  numerator /= m;
  denominator /= m;
}
