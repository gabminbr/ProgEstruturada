/*
 * Disciplina: Programação Estruturada
 * Discente: Gabriel Mineiro Brandão
 *
 * Questão 9: Faça um programa que leia dois valores do tipo ﬂoat. Use um único comando de
leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que
eles foram lidos.
*/

#include <stdio.h>

int main()
{
  float x, y;
  scanf("%f %f", &x, &y);
  printf("%f %f\n", y, x);
  return 0;
}
