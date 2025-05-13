/*
 * Disciplina: Programação Estruturada
 * Discente: Gabriel Mineiro Brandão
 *
 * Questão 13: Faça um programa que leia um caractere do tipo char e depois o imprima entre
aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.
*/

#include <stdio.h>

int main()
{
  char c;
  scanf("%c", &c);
  printf("\"%c\"\n", c);
  return 0;
}
