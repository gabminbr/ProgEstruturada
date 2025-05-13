/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 11: Leia o valor do raio de um círculo. Calcule e imprima a área do círculo
correspondente. A área do círculo é A = π* raio2, sendo π = 3.141592.
*/

#include <stdio.h>
#define PI 3.141592

int main(){
  float raio;
  scanf("%f", &raio);
  float area = PI * raio * raio;
  printf("Área: %f\n", area);
  return 0;
}
