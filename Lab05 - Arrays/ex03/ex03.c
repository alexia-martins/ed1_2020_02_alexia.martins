#include <stdio.h>

int main(){
    printf("<< Listando um vetor em ordem inversa !!! >>\n");
int numeros [6], i, j=1;
for (i=0; i<6; i++) {
    printf ("Entre com o numero %d: ", j);
    scanf ("%d", &numeros [i]);
    j++;
}
printf ("Ordem inversa dos numeros: ");
for (i=5; i>=0; i--){
    printf ("%d ", numeros [i]);
}

return 0;
}

/*
Faça um programa em que o usuário digita 6 números inteiros e o programa mostra
na tela os 6 números digitados na ordem inversa (obrigatório o uso de loops)

Exemplo de saída:
<< Listando um vetor em ordem inversa >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: 3
Entre com o numero 6: 6

Ordem inversa dos numeros: 6 3 0 4 6 5
*/
