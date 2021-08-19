#include <stdio.h>
#include <stdlib.h>

void imprime_vet_double (double *p, int tam){
for (int i=0; i<tam; i++){
    if (i==(tam-1)) printf ("%.2lf ", *p);
    else printf ("%.2lf , ", *p);
p++;
}
}

int negativos (double *p, int tam){
int aux = 0;
for (int i=0; i<tam; i++){
    if (*p<0) {aux++; p++;}
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
    printf ("Digite o valor %d: ", i+1);
    scanf ("%lf", &vetor[i]);
}
    printf ("O vetor principal eh: ");
    imprime_vet_double (vetor, tam);
    printf ("\nO vetor tem %d numero(s) negativo(s)", negativos (vetor, tam));
 free (vetor);
}

/*
=> Implemente uma função que receba como parâmetro um 
vetor de n números reais (VET) de tamanho N e retorne quantos 
números negativos há a nesse vetor. Use o seguinte protótipo:

int negativos(float *vet, int N); 

No programa principal, solicite ao usuário o tamanho do vetor, e os
valores a serem computados.
-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: -1
Digite o valor 2: 3
Digite o valor 3: -2 

O vetor principal eh: -1.00, 3.00, -2.00
O vetor tem 2 numero(s) negativo(s)
-------------------------------------------------------------------------------
*/