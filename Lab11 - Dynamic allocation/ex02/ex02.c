#include <stdio.h>
//lembre-se de incluir as bibliotecas adequadas

int main() {
    printf("<< Guarda inteiros >>\n");
int *array;
int i;
array = (int *)malloc(5*sizeof(int));

for (i=0;i<5;i++){
printf ("Digite o numero(%d):", i+1);
scanf ("%d", &array[i]);
}
printf ("\n");
array = &array[0];
for (i=0;i<5;i++){
printf ("O numero(%d) eh %d\n", i+1, *array);
array++;
}

free(array);
}

/*
2) Crie um programa que:
    (a) Aloque dinamicamente um array de 5 números inteiros, 
    (b) Peça para o usuário digitar os 5 números no espaço alocado, 
    (c) Mostre na tela os 5 números, 
    (d) Libere a memoria alocada.

Exemplo de saída:
<< Guarda inteiros >>
Digite o numero(1): 4
Digite o numero(2): 6
Digite o numero(3): 8
Digite o numero(4): 3
Digite o numero(5): 9 

O numero(1) eh 4
O numero(2) eh 6
O numero(3) eh 8
O numero(4) eh 3
O numero(5) eh 9
*/