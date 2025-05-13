/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 10: A importância de R$ 780.000,00 será dividida entre três ganhadores de um
concurso, sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/

#include <stdio.h>

int main()
{
  float total = 780000.00;
  float primeiro = 0.46 * total;
  float segundo = 0.32 * total;
  float terceiro = total - primeiro - segundo;

  printf("Ganhador 1: %f\n", primeiro);
  printf("Ganhador 2: %f\n", segundo);
  printf("Ganhador 3: %f\n", terceiro);
  return 0;
}
