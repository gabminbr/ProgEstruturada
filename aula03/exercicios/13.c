/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 13: Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa
através da fórmula dada. Imprima o resultado.
*/

#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, hipotenusa;
  printf("Cateto A: ");
  scanf("%f", &a);
  printf("Cateto B: ");
  scanf("%f", &b);
  hipotenusa = sqrt((a * a) + (b * b));;
  printf("Hipotenusa: %f\n", hipotenusa);
  return 0;
}
