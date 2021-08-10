#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
char nome[50];
printf ("Digite um nome: \n");
gets(nome);
strupr(nome);
printf ("O nome digitado e: %s\n", nome);
strlwr(nome);
printf ("O nome digitado e: %s", nome);
}

/*
Faça um programa semelhante ao anterior, só que o nome digitado deve ser mostrado
em letras maiúsculas e também em minúsculas. Procure em string.h uma função que
faça a conversão
Exemplo de saída:

<< Vetor de Char>>
Digite um nome: BruNo
O nome digitado é: BRUNO
O nome digitado é: bruno
*/
