/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 16: Escreva um programa que leia um número inteiro e mostre a multiplicação e a
divisão desse número por dois (utilize os operadores de deslocamento de bits).
*/

#include <stdio.h>

int main()
{
  int num;

  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  // Multiplicação por 2 
  int multiplicacao = num << 1;

  // Divisão por 2 
  int divisao = num >> 1;

  printf("Multiplicação por 2: %d\n", multiplicacao);
  printf("Divisão por 2: %d\n", divisao);

  return 0;
}
