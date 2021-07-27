#include <stdio.h>

int main(){
    printf("<< Listando um vetor >>\n");
int numeros [6];
printf ("Entre com o numero 1: ");
scanf ("%d", &numeros [0]);
printf ("Entre com o numero 2: ");
scanf ("%d", &numeros [1]);
printf ("Entre com o numero 3: ");
scanf ("%d", &numeros [2]);
printf ("Entre com o numero 4: ");
scanf ("%d", &numeros [3]);
printf ("Entre com o numero 5: ");
scanf ("%d", &numeros [4]);
printf ("Entre com o numero 6: ");
scanf ("%d", &numeros [5]);

printf ("Os valores lidos sao: %d %d %d %d %d %d", numeros [0],numeros [1],numeros [2],numeros [3],numeros [4],numeros [5]);
return 0;
}

/*
Crie um programa que lê 6 valores e em seguida mostra na tela os valores lidos. Não
utilize loops e utilize vetores para armazenar os números.
Exemplo de saída:
<< Listando um vetor >>
Entre com o número 1: 5
Entre com o número 2: 6
Entre com o número 3: 4
Entre com o número 4: 0
Entre com o número 5: 3
Entre com o número 6: 6
Os valores lidos são: 5 6 4 0 3 6
*/