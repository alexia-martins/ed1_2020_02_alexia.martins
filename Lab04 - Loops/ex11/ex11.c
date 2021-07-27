#include <stdio.h>

int main(){
int inicial, cont, soma;
printf("<<Soma de n valores naturais>>\n");
printf("Quantos numeros deseja somar? ");
scanf("%d", &cont);
inicial=cont;
do {
soma=soma+cont;
cont--;}
while (cont>=0);
printf ("A soma dos %d numeros naturais e: %d\n", inicial, soma);
}
/*
Refaça o exercício anterior utilizando o comando do .. while;
*/