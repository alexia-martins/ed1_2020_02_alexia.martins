#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
char nome[40];
int c=1, i=0;
printf ("Digite um nome: \n");
fgets(nome, 40, stdin);

do {
printf ("%da letra: %c\n", c, nome [i]);
i++;
c++;
} while(nome[i]!= '\n');
}

/*
Faça um programa que mostre as letras de uma string separadamente.
Exemplo de saída:
<< Separa letras>>

Digite o nome : Bruno
1a letra: B
2a Letra: r
3a Letra: u
4a Letra: n
5a letra: o
*/