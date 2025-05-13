/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 7: Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida,
imprima o valor correspondente em dólares.
*/

#include <stdio.h>

int main()
{
  float valor;
  scanf("%f", &valor);
  // converte o valor em reais para dolar usando a cotação de 1 dolar para 5.65 reais
  valor = valor / 5.65;
  printf("$%f\n", valor);
  return 0;
}
