/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 19: Elabore um programa que leia dois números inteiros e exiba o resultado das
operações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles.
*/

#include <stdio.h>

int main()
{
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  // XOR
  int xor_result = num1 ^ num2;
  // OR
  int or_result = num1 | num2;
  // AND
  int and_result = num1 & num2;

  printf("OU Exclusivo (XOR): %d\n", xor_result);
  printf("OU Bit a Bit (OR): %d\n", or_result);
  printf("E Bit a Bit (AND): %d\n", and_result);
  return 0;
}
