/*
 * Disciplina: Programação Estruturada
 * Discente: Gabriel Mineiro Brandão
 *
 * Questão 15: Escreva um programa que leia três variáveis: char, int e ﬂoat. Em seguida,
imprima-as de três maneiras diferentes: separadas por espaços, por uma
tabulação horizontal e uma em cada linha. Use um único comando printf()
para cada operação de escrita das três variáveis.
*/

#include <stdio.h>

int main()
{
  char c;
  int x;
  float y;
  
  scanf("%c %d %f", &c, &x, &y);
  printf("%c %d %f\n", c, x, y);
  printf("%c\t%d\t%f\n", c, x, y); 
  printf("%c\n%d\n%f\n", c, x, y);
  return 0;
}
