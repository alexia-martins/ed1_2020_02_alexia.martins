#include <stdio.h>

void troca (int *A, int *B){
int aux;
aux = *A;
*A = *B;
*B = aux;
}

int main(){
    int a, b;
    int *pa = &a;
    int *pb = &b;

    printf("Digite o numero A: ");
    scanf ("%d", pa);
    printf("Digite o numero B: ");
    scanf ("%d", pb);
    troca(pa, pb);
    printf ("O numero A eh: %d\nO numero B eh: %d", *pa, *pb);
}

/*
=> Faça um procedimento “Troque”, que recebe duas variáveis reais A e B
e troca o valor delas (i.e., A recebe o valor de B e B recebe o valor de A).
Mostre no programa principal o resultado da troca. 


No programa principal, solicite ao usuário o número A e o número B.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o número A: 2
Digite o número B: 5
O número A eh: 5
O número B eh: 2
-------------------------------------------------------------------------------
*/