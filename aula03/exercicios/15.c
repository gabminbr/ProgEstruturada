/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 15: Faça um programa para ler um número inteiro positivo de três dígitos. Em
seguida, calcule e mostre o número formado pelos dígitos invertidos do número
lido. Exemplo: Número lido = 123 Número gerado = 321
*/

#include <stdio.h>

int main()
{
  int num;
  scanf("%d", &num);
  printf("%d%d%d\n", num % 10, (num % 100) / 10, num / 100);
  return 0;
}
