#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    float numero, quad, div;
    printf("<<Quadrado perfeito>> \n\n");
    printf("Digite o numero: \n");
    scanf ("%f", &numero);
    quad = sqrt(numero);
    div = fmod (numero,quad);
    if (div==0) {
    printf ("O numero %.0f e um quadrado perfeito. Sua raiz quadrada eh %.0f", numero, quad);
   } else { printf ("O numero %.0f nao e quadrado perfeito", numero); }
}

/*
Verificar se um número inteiro é um quadrado perfeito, exibindo, nos casos
afirmativos, sua raiz quadrada
*/