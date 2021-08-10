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
compara = stricmp(nome, nome2);
if (compara == 0) {printf ("Os nomes sao iguais. \n");}
else {printf ("Os nomes nao sao iguais.\n");}
}

/*
Refaça o exercício anterior, para que agora não haja diferenciação entre caracteres
maiúsculos e minúsculos.
Exemplo de saída:

<< Compara nomes>>
Digite o nome 1: Bruno
Digite o nome 1: BrunO
Os nomes digitados são iguais.
*/