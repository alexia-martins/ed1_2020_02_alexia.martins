#include <stdio.h>

int main(){
    printf("<< Subtracao de vetores >>\n");
int numerosA [3], numerosB [3], subC [3], i, j=1;
for (i=0; i<3; i++) {
    printf ("Digite o valor %d de A: ", j);
    scanf ("%d", &numerosA[i]);
    j++;
}
for (i=0; i<3; i++) {
    printf ("Digite o valor %d de B: ", j);
    scanf ("%d", &numerosB[i]);
    j++;
}
for (i=0; i<3; i++) {
subC [i] = numerosA [i] - numerosB [i];
}
printf ("Vetor C definido como C = A-B: (");
for (i=0; i<3; i++){
    if (i!=2) { printf ("%d, ", subC [i]);}
    else {printf ("%d)", subC[i]);}
}
return 0;
}

/*
Faça um programa que receba do usuário dois arrays  A e B, com 3 números inteiros cada. Crie um novo array C calculando C = A - B. Mostre na tela os dados do array C.

Exemplo de saída:
<< Subtracao de vetores >>
Digite o valor 1 de A: 50
Digite o valor 2 de A: 60
Digite o valor 3 de A: 70

Digite o valor 1 de B: 30
Digite o valor 2 de B: 0
Digite o valor 3 de B: -10

O vetor C, definido como C = A-B:  (20, 60, 80) 
*/