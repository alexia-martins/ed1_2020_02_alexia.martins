#include <stdio.h>

int main() {
unsigned char nome1[50], nome2[50], a, b;
int i, verificador=0, cont1=0, cont2=0;
printf ("<<Comparador de nomes>>\n\n");
printf("Digite dois nomes: \n");
do {
nome1[cont1] = a;
cont1++;
a = getchar();}while (a != '\n');
do {
nome2[cont2] = b;
cont2++;
b = getchar();} while (b != '\n');
if(cont2 >= cont1){
for(i = 0; i < cont2; i++){
if(nome1[i] == nome2[i]){}else{ verificador++;}}
if(verificador == 0)
printf("Sao nomes iguais. \n");
else { printf("Sao nomes diferentes. \n");}
}
else {
for(i = 0; i < cont1; i++){
if(nome1[i] == nome2[i]){} else{ verificador++;}
}
if(verificador == 0)
printf("Sao nomes iguais. ");
else {
printf("Sao nomes diferentes. ");
}}}

/*
Faça um programa em que o usuário digita dois nomes, e o programa informa se os
nomes são iguais. Não usar as funções de string.h

Exemplo de saída:
<< Compara nomes>>
Digite o nome 1: Bruno
Digite o nome 2: Bruno
Os nomes digitados são iguais

Exemplo de saída:
<< Compara nomes>>
Digite o nome 1: Bruno
Digite o nome 2: BrunO
Os nomes digitados são diferentes

*/