/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 4: Leia quatro valores do tipo ﬂoat. Calcule e exiba a média aritmética desses
valores.
*/

#include <stdio.h>

int main(){
  float a, b, c, d;
  scanf("%f %f %f %f", &a, &b, &c, &d);
  printf("%f\n", (a + b + c + d) / 4);
  return 0;
}
