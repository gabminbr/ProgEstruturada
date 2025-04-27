na estrutura de um programa em C, a linha que contém #include ... é um comando de preprocessador, indica que na fase inicial da compilação deve ser lido o arquivo que está entre os sinais < e >;
ex: #include <stdio.h>, vai ler o arquivo stdio.h

*COMENTÁRIOS*
    podem ser feitos usando // antes do comentário, ou usar um /* e */ para fechar o comentário;

*BIBLIOTECAS*
    podem ser declaras como ja foi visto antes, no tipo '#include <ssjsjs>' ou também como '#include "D:\Programas\soma.h"';

*COMPILAÇÃO*
    código fonte -> pré processamento -> verificação sintatica -> compilação -> link-edição -> codigo binario executavel;

*PRINTANDO COM FORMATAÇÃO*
    printf("%tipo_de_saida", expressao);
    printf("%tipo1 %tipo2", expressao1, expressao2);

    %c - char
    %d ou %i = int/char
    %u = unsigned int
    %f - float ou double
    %s - string
    %p - endereco de memoria
    %e ou %E - notacao cientifica

*ENTRADA DE DADO*
    scanf("tipo_de_entrada", &variavel)
    exemplo:
    scanf("%d / %d / %d", &dia, &mes, &ano);
    o scanf apenas ignora os espacos em branco, entao na hora do usuario escrever os dados, vai ter que colocar as barras por exemplo, porem o programa vai ignorar elas.

*CONSTANTES*
    #define NOME_CONSTANTE valor_constante
    ex: #define PI 3.1415

    ou

    const tipo_constante NOME_CONSTANTE = valor_constante;
    ex: const float PI = 3.1415;
