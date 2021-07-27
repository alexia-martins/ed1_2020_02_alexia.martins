
#include <stdio.h>

int main(){
int inicial, cont, soma;
printf("<<Soma de n valores naturais>>\n");
printf("Quantos numeros deseja somar? ");
scanf("%d", &cont);
inicial=cont;
for (cont;cont>=0;cont--){
soma=soma+cont;
}
printf ("A soma dos %d numeros naturais e: %d\n", inicial, soma);
}

/*
Refaça o exercício anterior utilizando o comando for
*/