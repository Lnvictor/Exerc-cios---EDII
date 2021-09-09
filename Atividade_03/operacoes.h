/*
  Você irá agora programar no Paradigma Orientado a Objeto. Neste
  paradigma, você irá criar pequenos módulos que podem ser
  instanciados no momento em que são necessários. Esses pequenos
  módulos são chamados de classes. As classes são instanciadas com a
  palavra reservada "class". Veja abaixo.
 */

/*
  Classes precisam de um nome. No nosso caso, a classe tem nome
  Operations.
 */
class Operations {

  /*
    As classes possuem uma seção privada, onde você colocará aquilo
    que deseja "esconder" das outras partes do código. Isso quer dizer
    que ninguém fora da classe terá acesso às variáveis e funções
    privadas. Em outras palavras, adicionamos um nível de
    encapsulamento que protege essa área sensível e facilita a
    reutilização do código.
   */
 private :
  /*
    As variáveis privadas declaradas abaixo são visíveis em qualquer
    lugar dentro da classe e apenas dentro da classe. Dizemos que elas
    são "atributos" dessa classe.
   */  
  int number1;
  int number2;
  /*
    Como as classes possuem uma região privada, é de se esperar que
    tenha uma região pública.
   */
 public :
    /*
    As funções em uma classe são normalmente chamdas de métodos. Neste
    momento, estamos apenas declarando o protótipo desta função em um
    arquivo de extensão ".h". O código deverá aparecer em um arquivo
    de extensão ".cpp". 
   */
  void      setNumbers(int number1, int number2); // recebe dois
						  // inteiros como
						  // parâmetros e
						  // coloca no
						  // atributo.

  /*
    Note nos métodos abaixo a presença da palavra "const". Ela serve
    para dizer que o método não alterará nenhum dos atributos da
    classe. Observe que o método setNumbers não possuia essa
    indicação, dado que ele precisa alterar tais atributos.
   */  
  int    sum() const; // retorna a soma dos atributos.
  int    sub() const; // retorna a subtração de um atributo pelo
		      // outro.
  int    mul() const; // retorna a multiplicação dos atributos.
  int   idiv() const; // retorna a divisão inteira dos atributos.  
  float fdiv() const; // retorna a divisão real dos atributos.
  int    res() const; // retorna o resto da divisão de um atributo
		      // pelo outro.
};
