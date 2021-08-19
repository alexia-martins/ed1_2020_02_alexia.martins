#include <stdio.h>
#include <stdlib.h>

void imprime_vet_double (double *p, int tam){
for (int i=0; i<tam; i++){
    if (i==(tam-1)) printf ("%.2lf ", *p);
    else printf ("%.2lf , ", *p);
p++;
}
}
double menor (double *p, int tam){
double aux = *p;
for (int i=0; i<tam; i++){
    if (aux > *p) {aux = *p; p++;}
    else {p++;}
}
return aux;
}

double maior (double *p, int tam){
double aux = *p;
for (int i=0; i<tam; i++){
    if (aux < *p) {aux = *p; p++;}
    else {p++;}
}
return aux;
}

int main(){
    double *vetor;
    int tam, i;
    printf("Digite o tamanho do vetor: ");
    scanf ("%d", &tam);
    vetor = (double *)malloc(tam*sizeof(double));
    for (i=0;i<tam;i++){
    printf ("Digite o valor %d:", i+1);
    scanf ("%lf", &vetor[i]);
}
    printf ("O vetor principal eh: ");
    imprime_vet_double (vetor, tam);
    printf ("\nO maior valor eh: %.2lf", maior (vetor, tam));
    printf ("\nO menor valor eh: %.2lf", menor (vetor, tam));
 free (vetor);
}

/*
=> Crie um procedimento que recebe um vetor de double como 
entrada e devolve o maior e o menor elemento do vetor. Mostre no 
programa principal o vetor, o maior e o menor elemento.


No programa principal, solicite ao usuário o tamanho do vetor, e os
valores a serem computados.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: -1
Digite o valor 2: 0.02
Digite o valor 3: 3

O vetor principal eh: -1.00, 0.02, 3.00
O maior valor eh 3.00
O menor valor eh -1.00 
-------------------------------------------------------------------------------
Obs: note que para este caso, foram consideradas duas casas após o ponto. 
*/