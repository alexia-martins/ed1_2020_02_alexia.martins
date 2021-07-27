#include <stdio.h>

int main(){
    printf("<< Listando um vetor - com loops >>\n");
int numeros [6], i, j=1;
for (i=0; i<6; i++) {
    printf ("Entre com o numero %d: ", j);
    scanf ("%d", &numeros [i]);
    j++;
}
printf ("Valores lidos:");
for (i=0; i<6; i++){
    printf ("%d ", numeros [i]);
}

return 0;
}

/*
Crie um programa que lê 6 valores inteiros e em seguida mostra na tela os 
valores lidos. Utilize loops e utilize vetores para armazenar os números.
(pense qual o melhor loop: for, while ou do-while)
 
Exemplo de saída:
<< Listando um vetor - com loops >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: 3
Entre com o numero 6: 6

Valores lidos: 5 6 4 0 3 6
*/
