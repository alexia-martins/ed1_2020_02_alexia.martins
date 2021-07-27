#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){

int linhas, i, j, num;
printf ("Insira o numero da linha: ");
scanf("%d", &linhas);
for (i=1;i<=linhas;i++){
    for(j=1;j<=i;j++){
num++; printf("%d ", num);
    }
    printf("\n");
}
}
/*
Escreva um programa que leia um numero inteiro positivo n e em seguida imprima n
linhas do chamado Triangulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
*/