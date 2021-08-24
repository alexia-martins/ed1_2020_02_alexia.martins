#include <stdio.h>
#include <stdlib.h>

void imprime_vet_int (int *p, int tam){
for (int i=0; i<tam; i++){
    if (i==(tam-1)) printf ("%d ", p[i]);
    else printf ("%d , ", p[i]);
}
}

void multiplicar (int *p, int tam, int indice){

for (int i=0; i<tam; i++){
*p *=indice;
p++;
}
}

int main(){

    int *vetor;
    int tam, mult, i;

    printf("Digite o tamanho do vetor: ");
    scanf ("%d", &tam);
    vetor = (int *)malloc(tam*sizeof(int));

    for (i=0; i<tam; i++){
    printf ("Digite o valor de %d: ", i+1);
    scanf ("%d", &vetor[i]);
    }
    printf("Digite o valor do escalar: ");
    scanf ("%d", &mult);
printf ("O vetor de origem eh: ");
imprime_vet_int (vetor, tam);
multiplicar (vetor, tam, mult);
printf ("\nO vetor final eh: ");
imprime_vet_int (vetor, tam);

free (vetor);
}

/*
=> Faça uma função para multiplicar um vetor por um escalar 
(um número). Mostre, no programa principal, o vetor antes e depois 
da multiplicação.

Chamada:
multvet(vetor, n, escalar);


No programa principal, solicite ao usuário o tamanho do vetor, os valores
a serem computados e o valor do escalar.

-------------------------------------------------------------------------------
Exemplo de Saída:
 
Digite o tamanho do vetor: 5
Digite o valor 1: 2
Digite o valor 2: 4
Digite o valor 3: 10
Digite o valor 4: 6
Digite o valor 5: 5
Digite o valor do escalar: 3

O vetor de origem eh: 2, 4, 10, 6, 5
O vetor final eh: 6, 12, 30, 18, 15
-------------------------------------------------------------------------------
*/