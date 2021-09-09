/*
  Vamos agora criar o comportamento da classe declarada em
  circle.h. Primeiramente, nós temos que ver a classe, então escreva o
  "include" apropriado.
 */

// ToDo: Insira o include apropriado.
#include "circle.h"
#include <math.h>

/*
  Abaixo eu já escrevi os nomes dos métodos para você
  implementar. Você irá implementar todos eles com facilidade.
*/

// Veja que aqui eu não preciso repetir os parâmetros default
Circle::Circle(double r, string c) {
  // ToDo: Implemente o método.
  radius = r;
  color = c;
}
 
double Circle::getRadius() const {
  // ToDo: Implemente o método.
  return radius;
}
 
string Circle::getColor() const {
  // ToDo: Implemente o método.
  return color;
}
 
double Circle::getArea() const {
  // ToDo: Implemente o método.
  return M_PI * radius * radius;
}
 