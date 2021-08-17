#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
int i;
int numeros [10] = {10,9,8,7,6,5,4,3,2,1};
printf ("Valores do vetor:\n");
for (i=9;i>=0;i--){
    if (i==0) {printf ("%d ", *(numeros+i));}
    else {
printf ("%d, ", *(numeros+i));

}}
    return 0;
}

/*
10) Imprima o conteúdo de um vetor de int de 10 posições da última posição até a primeira utilizando aritmética
de ponteiros e SEM declarar variáveis do tipo ponteiro (ou seja, o nome do vetor terá que ser usado como o
ponteiro)
*/