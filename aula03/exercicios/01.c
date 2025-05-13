/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 1: Faça um programa que leia um número inteiro e retorne seu antecessor e seu
sucessor.
*/

#include <stdio.h>

int main(){
  int x;
  scanf("%d", &x);
  printf("sucessor de %d: %d\n", x, x + 1);
  printf("antecessor de %d: %d\n", x, x - 1);
  return 0;
}
