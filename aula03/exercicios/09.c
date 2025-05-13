/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 9: Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
conversão é R = G * π/180, sendo G o ângulo em graus e R em radianos e π =
3.141592.
*/

#include <stdio.h>
#define PI 3.141592

int main()
{
  float angulo;
  scanf("%f", &angulo);
  angulo *= PI/180;
  printf("%f rad\n", angulo);
  return 0;
}
