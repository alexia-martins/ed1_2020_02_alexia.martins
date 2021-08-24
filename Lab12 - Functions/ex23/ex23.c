#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
void absoluto (int *p, int tam){

for (int i=0; i<tam; i++){
*p = abs (*p);
p++;
}
}

void troca (int *p1, int *p2, int tam){
for (int i=0; i<tam; i++){
*p1 = *p2;
p1++;
p2++;
}}

int menor (int *p, int tam){
int aux = *p;
for (int i=0; i<tam; i++){
    if (aux > *p) {aux = *p; p++;}
    else {p++;}
}
return aux;
}

int maior (int *p, int tam){
int aux = *p;
for (int i=0; i<tam; i++){
    if (aux < *p) {aux = *p; p++;}
    else {p++;}
}
return aux;
}

int main(){

    int *vetor;
    int *point = &vetor;
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
absoluto (point, tam);
printf ("\nO vetor com valores absolutos eh: ");
imprime_vet_int (vetor, tam);

free (vetor);
}

/*
=> Use as funções criadas nos exercícios anteriores em um único 
programa, mas agora trabalhe com vetores alocados 
dinamicamente no programa principal. Lembre-se de liberar a 
memória depois de usar os vetores.


No programa principal, solicite ao usuário o tamanho do vetor, os valores
a serem computados e posteriormente, o valor escalar para multiplicação do vetor.

-------------------------------------------------------------------------------
Exemplo de Saída:

Entre com o tamanho do vetor: 4
Entre com o elemento 1: 50
Entre com o elemento 2: 20
Entre com o elemento 3: 10
Entre com o elemento 4: -30

Vetor: 50, 20, 10, -30 
Maior: 50   Menor: -30
Numero de negativos: 1
Vetor absoluto: 50, 20, 10, 30

Copiando para outro vetor (alocado dinamicamente)

Vetor original: 50, 20, 10, -30
Vetor copiado: 50, 20, 10, -30

Entre com o valor escalar para multiplicar o vetor original: 10
 
Vetor original: 500, 200, 100, -300
Vetor copiado: 50, 20, 10, -30
-------------------------------------------------------------------------------
*/