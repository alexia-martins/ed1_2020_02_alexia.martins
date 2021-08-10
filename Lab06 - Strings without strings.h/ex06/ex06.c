#include <stdio.h>

int main() {
char juntos [40], nome[40], sobre[40];
int i=0, cont=0;
printf ("<<Separador de nome>>\n\n");
printf("Digite o nome e o sobrenome: \n");
fgets (juntos, 40, stdin);

while (juntos[i] != ' '){
nome [i] = juntos [i];
i++;
}
nome [i] = '\n';
cont = i+1;
i=0;
while (juntos [cont] != '\n')
{
sobre [i] = juntos [cont];
i++;
cont ++;
}
sobre [i] = '\n';
printf ("Nome: %s", nome);
printf ("Sobrenome: %s", sobre);
}

/*
Faça um programa que recebe o nome e sobrenome de uma pessoa (máximo 40
caracteres), copie o nome para um vetor e o sobrenome para outro. Mostre os dois
vetores copiados.

<< Nomes >>
Digite o primeiro nome e último nome: Carlos Silva
Nome: Carlos
Sobrenome: Silva
*/
