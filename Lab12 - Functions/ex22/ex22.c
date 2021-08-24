#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void imprime_vet_int (int *p, int tam){
for (int i=0; i<tam; i++){
    if (i==(tam-1)) printf ("%d ", p[i]);
    else printf ("%d , ", p[i]);
}
}

void absoluto (int *p, int tam){

for (int i=0; i<tam; i++){
*p = abs (*p);
p++;
}
}

int main(){

    int *vetor;
    int tam, i;

    printf("Digite o tamanho do vetor: ");
    scanf ("%d", &tam);
    vetor = (int *)malloc(tam*sizeof(int));

    for (i=0; i<tam; i++){
    printf ("Digite o valor de %d: ", i+1);
    scanf ("%d", &vetor[i]);
    }
printf ("O vetor de origem eh: ");
imprime_vet_int (vetor, tam);
absoluto (vetor, tam);
printf ("\nO vetor com valores absolutos eh: ");
imprime_vet_int (vetor, tam);

free (vetor);
}

/*
=> Faça uma função para transformar os números de um vetor 
de inteiros em seu valor absoluto (use a função abs (math.h)).

Chamada:
    abs_vet(vet);

No programa principal, solicite ao usuário o tamanho do vetor e os valores
a serem computados. Imprima o vetor de origem e o vetor com valores absolutos.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: 1
Digite o valor 2: -1
Digite o valor 3: 2
 
O vetor de origem eh: 1, -1, 2
O vetor com valores absolutos eh: 1, 1, 2
-------------------------------------------------------------------------------
*/