#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
int i;
double numeros [10] = {10.5,9.1,8.9,7,6,5,4.01,3,2.75,1};
printf ("Valores do vetor:\n");
for (i=0;i<10;i++){
    if (i==9) {printf ("%.2lf ", *(numeros+i));}
    else {
printf ("%.2lf, ", *(numeros+i));

}}
    return 0;
}

/*
9) Imprima o conteúdo de um vetor de double de 10 posições utilizando aritmética de ponteiros e SEM
declarar variáveis do tipo ponteiro (ou seja, o nome do vetor terá que ser usado como o ponteiro)

*/