#include <stdio.h>
#include <stdlib.h>

void imprime_vet_int (int *p, int tam){
for (int i=0; i<tam; i++){
    if (i==(tam-1)) printf ("%d ", *p);
    else printf ("%d , ", *p);
p++;
}
}
void troca (int *p1, int *p2, int tam){
for (int i=0; i<tam; i++){
*p1 = *p2;
p1++;
p2++;
}}

int main(){

int vetorO [5] = {1, 2, 3, 4, 5}; 
int vetorD [5] = {9, 8, 7, 6, 0};

    int *po = vetorO;
    int *pd = vetorD;

    printf ("\nO vetor de origem eh: ");
    imprime_vet_int (vetorO, 5);

    printf("\nO vetor de destino eh: ");
    imprime_vet_int (vetorD, 5);
  
    troca (vetorD, vetorO, 5);
    printf("\nO vetor de destino apos a copia eh: ");
    imprime_vet_int (vetorD, 5);
}


/*
=> Faça uma função para copiar um vetor inteiro para outro 
vetor. Ambos vetores devem ter o mesmo tamanho. Mostre no 
programa principal os dois vetores.

Chamada:
copiarvet(vet_origem, vet_destino, n);


Os valores são definidos na função principal.
-------------------------------------------------------------------------------
Exemplo de Saída:
 
O vetor de origem eh: 1, 2, 3, 4, 5
O vetor de destino eh: 1, 2, 3, 3, 6
O vetor de destino apos a copia eh: 1, 2, 3, 4, 5
-------------------------------------------------------------------------------
*/