/* Implementação da classe Time */
#include <iostream>  // A função std::cout será usada para implementar
		     // a função print.
#include "time.h"    // Para visualizar a classe Time
#include <iomanip>   // Para ter mais opções na hora de escrever o
		     // std::cout

using namespace std; // Para podermos escrever cout ao invés de
		     // std::cout.



/* 
   Eu já implementei o método getHour para você ter como referência,
   implemente os demais.
 */
int Time::getHour() const {
  return hour;
}

// ToDo: Implemente getMinute
int Time::getMinute() const{
  return minute;
}
// ToDo: Implemente getSecond
int Time::getSecond() const{
  return second;
}
/*
  Nos métodos "set", a classe está recebendo como parâmetro uma
  variável com o mesmo nome do atributo. Esse fato faz com que o
  atributo seja "escondido". Por exemplo, no método setHour abaixo,
  quando usarmos a variável "hour", estaremos nos referindo ao
  parâmetro e não ao atributo da classe.

  Para contornar esse problema, usamos a palavra reservada
  "this". Assim:

  this->hour, this->minute e this->second se referem aos atributos.

  hour, minute e second se referem aos parâmetros dos métodos abaixo.
 */
void Time::setHour(int hour) {
  if (hour >= 24){
    hour = 23;
  }
  if (hour < 0) hour = 0;
  this->hour = hour;
}

void Time::setMinute(int minute) {
  // ToDo: implemente o corpo do método setMinute.
  if (minute >= 60){
    minute = 59;
  }
  if (minute < 0) minute = 0;
  this->minute = minute;
}

// ToDo: implemente o método setSecond.
void Time::setSecond(int second) {
  // ToDo: implemente o corpo do método setMinute.
  if (second >= 60){
    second = 59;
  }
  if (second < 0){
    second = 0;
  }
  this->second = second;
}

// ToDo: implemente o método setTime.
void Time::setTime(int hour, int minute, int second) {
  this->setHour(hour);
  this->setMinute(minute);
  this->setSecond(second);
}

// Imprimir esta instância no formato "hh:mm:ss". Use a internet para
// entender por conta própria o que os métodos setfill e setw estão
// fazendo. Você tem a opção também de comentar código e executar o
// programa para ver o que muda.
void Time::print() const {
  cout << setfill('0');    
  cout << setw(2) << hour  
       << ":" << setw(2) << minute
       << ":" << setw(2) << second << endl;
}

// O próximo método aumenta um segundo nesta instância. Escreva esse
// método.
void Time::nextSecond() {
  // ToDo: implemente o método.
  if (this->second < 59){
    this->second++;
  }
  else if(this->minute < 59){
    this->minute++;
    this->second = 0;
  }
  else if(this->hour < 23){
    this->hour++;
    this->minute = 0;
    this->second = 0;
  }
  else{
    this->hour = 0;
    this->minute = 0;
    this->second = 0;
  }
}


/*
  Deixei o construtor para o fim para você conhecer uma sintaxe
  alternativa para inicialização de atributos. Colocamos uma lista de
  inicialização após a declaração dos parâmetros. Para separar os
  parâmetros da lista de inicialização, usamos ":". A lista possui a
  sintaxe:

  atributo1(parâmetroA), atributo2(parâmetroB), ..., atributoN(parâmetroM).
 */

Time::Time(int h, int m, int s){
  /*
    O corpo do método executa após as inicializações. Neste caso, ele
    está vazio porque as inicialiações eram tudo o que queríamos
    fazer.
   */
    this->setHour(h);
    this->setMinute(m);
    this->setSecond(s);
}
