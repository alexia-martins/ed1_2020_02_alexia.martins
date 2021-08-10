#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
char nome[50], nome2 [50];
int compara;
printf ("Digite o primeiro nome: \n");
gets(nome);
printf ("Digite o segundo nome: \n");
gets(nome2);
compara = strcmp(nome, nome2);
if (compara == 0) {printf ("Os nomes sao iguais. \n");}
else {printf ("Os nomes nao sao iguais.\n");}
}

/*
Faça um programa em que o usuário digita dois nomes, e o programa informa se os
nomes são iguais. Use strcmp.
Exemplo de saída:

<< Compara nomes>>
Digite o nome 1: Bruno
Digite o nome 1: Bruno
Os nomes digitados são iguais
Exemplo de saída:

<< Compara nomes>>
Digite o nome 1: Bruno
Digite o nome 1: BrunO
Os nomes digitados são diferentes
*/