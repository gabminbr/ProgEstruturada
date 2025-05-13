/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 14: Faça um programa que converta uma letra maiúscula em letra minúscula. Use a
tabela ASCII para isso.
*/

#include <stdio.h>

int main()
{
  char a;
  scanf("%c", &a);
  a += 32;
  printf("%c\n", a);
  return 0;
}
