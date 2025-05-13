/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 8: Leia um valor que represente uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) +
32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

#include <stdio.h>

int main()
{
  float temperatura;
  scanf("%f", &temperatura);
  // convertendo a temperatura em celsius para fahrenheit.
  temperatura = temperatura * (9.0/5) + 32;
  printf("%fF\n", temperatura);
  return 0;
}
