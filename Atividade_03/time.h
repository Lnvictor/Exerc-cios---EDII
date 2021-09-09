/* 
   Você irá escrever agora uma classe chamada Time que modela uma
   instância de tempo: hora, minuto e segundo. Nesse caso, a classe
   possui os seguintes membros.

   - Três atributos (hora, minuto e segundo).
   - Um construtor público que inicializa os atributos.
   - Métodos "get" e "set" para permitir gerenciamento dos atributos.
   - Um método público "print" para imprimir esta instância de tempo 
     no formato hh:mm:ss.
*/


/*
  As primeiras linhas de código deste arquivo servem para evitar que
  múltiplas definições da classe Time ocorram. Isso poderia ocorrer se
  você der include de dois pacotes que dão include em "time.h"
 */

#ifndef TIME_H   // Inclua esse bloco apenas se TIME_H não está definido
#define TIME_H   // Na primeira inclusão, defina TIME_H para que este
		 // bloco não seja incluído mais de uma vez.

// ...

// #endif  // Final do bloco "#ifndef"


class Time {
 private:  // Seção Privada
  // Membros privados
  int hour;     // 0 - 23
  int minute;   // 0 - 59
  int second;   // 0 - 59

 public:   // Seção Pública
  // Protótipo das funções públicas.
  
  // Construtor
  Time(int hour = 0, int minute = 0, int second = 0);
  
  // Métodos "get" e "set" para os atributos.
  int getHour() const;   
  void setHour(int hour);   
  int getMinute() const; 
  void setMinute(int minute); 
  int getSecond() const; 
  void setSecond(int second);
  void setTime(int hour, int minute, int second);

  // Método para mprimir esta instância no formato "hh:mm:ss"
  void print() const;

  // Método para aumentar esta instância em 1 segundo.
  void nextSecond();  
};  

#endif  // Final do bloco "#ifndef"









