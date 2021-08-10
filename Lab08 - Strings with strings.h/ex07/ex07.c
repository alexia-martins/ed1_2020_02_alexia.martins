#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
char nome[40];
int i;
printf ("Digite uma palavra: \n");
fgets(nome, 40, stdin);

for (int i = 0; i < strlen(nome); i++) {
    if (strchr("aeiou", nome[i])==0) {
      printf("%c", nome[i]);
    }
  }
}
/*
Faça um programa que receba do usuario uma string. O programa imprime a string
sem suas vogais.
Exemplo de saída:
<<Sem vogais>>
Digite a string : Correios
Saída sem vogais: Crrs
*/