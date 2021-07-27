#include <stdio.h>

int main(){
    printf("<< Zerando negativos >>\n");
    int numeros [5], i, j=1;
    for (i=0; i<5; i++) {
    printf ("Entre com o numero %d: ", j);
    scanf ("%d", &numeros[i]);
    j++;
}
for (i=0; i<5; i++){
if (numeros [i]<0) {numeros [i]=0;}
}
printf ("Negativo zerados: ");
for (i=0; i<5; i++){
printf ("%d ", numeros [i]);
}
 return 0;
}

/*
Leia um vetor de 5 posições e atribua valor 0 para todos os elementos
que possuírem valores negativos. Mostre o vetor final.

Exemplo de saída:
<< Zerando negativos >>
Entre com o numero 1: 5
Entre com o numero 2: -6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: -3

Negativo zerados: 5 0 4 0 0 
*/