/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 12: Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O
volume de um cilindro circular é calculado por meio da seguinte fórmula:
em que π = 3.141592
*/

#include <stdio.h>
#define PI 3.141592

int main()
{
  float altura, raio, volume;
  printf("Altura: ");
  scanf("%f", &altura);
  printf("Raio: ");
  scanf("%f", &raio);
  volume = PI * raio * raio * altura;
  printf("Volume: %f\n", volume);
  return 0;
}
