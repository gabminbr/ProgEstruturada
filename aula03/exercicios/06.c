/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 6: Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a
velocidade em km/h e M em m/s.
*/

#include <stdio.h>

int main()
{
  float velocidade;
  scanf("%f", &velocidade);
  // converter a velocidade de km/h para m/s
  velocidade = velocidade / 36;
  printf("%f\n", velocidade);
  return 0;
}
