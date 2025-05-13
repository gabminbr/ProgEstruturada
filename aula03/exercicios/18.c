/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 18: Elabore um programa que leia dois números inteiros e exiba o deslocamento, à
esquerda e à direita, do primeiro número pelo segundo.
*/

#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);  

  // Deslocamento à esquerda
  int desloc_esquerda = a << b;

  // Deslocamento à direita
  int desloc_direita = a >> b;

  printf("%d << %d = %d\n", a, b, desloc_esquerda);
  printf("%d >> %d = %d\n", a, b, desloc_direita);

  return 0;
}
