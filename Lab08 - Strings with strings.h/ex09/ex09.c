#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
char palavra [20];
int i, cont;
printf ("<<Inverterdor>>\n\nDigite uma palavra: \n");
fgets(palavra, 20, stdin);
i = strlen (palavra);
printf("Saida invertida: ");
for (i; i >= 0; i--){
    printf ("%c", palavra [i]);
}
}

/*
Receba uma palavra e imprima de trás-para-frente
Exemplo de saída:
<<invertendo>>
Digite a string : Correios
Saída invertida: soierroC
*/