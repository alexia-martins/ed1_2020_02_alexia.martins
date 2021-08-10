#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
char nome[50];
printf ("Digite um nome: \n");
gets(nome);
printf ("%s", nome);
}
/*
Utilizando strings, crie um programa que leia o nome de uma pessoa e, em seguida,
mostre o nome lido. O nome pode ter no máximo 50 caracteres. Use a função gets()
para efetuar a leitura

Exemplo de saída:
<< Vetor de Char>>
Digite um nome: Bruno
O nome digitado é: Bruno
*/