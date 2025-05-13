/*
 * Disciplina: Programação Estruturada
 * Discente: Gabriel Mineiro Brandão
 *
 * Questão 6: Faça um programa que leia um valor do tipo double e depois o imprima na forma
de notação cientíﬁca.
*/

#include <stdio.h>

int main()
{
  double x;
  scanf("%f", &x);
  printf("%E\n", x);
  return 0;
}
