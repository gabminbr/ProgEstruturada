/*
 * Discente: Gabriel Mineiro Brandão
 * Disciplina: Programação Estruturada
 *
 * Questão 17: Escreva um programa que leia um número inteiro e mostre o seu complemento
bit a bit.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Calcula o complemento bit a bit
    int complemento = ~num;
    printf("Complemento bit a bit (decimal): %d\n", complemento);

    return 0;
}
