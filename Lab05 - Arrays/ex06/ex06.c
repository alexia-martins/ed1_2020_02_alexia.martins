#include <stdio.h>

int main(){
    printf("<< Five Values with index >>\n");
int numeros [5], i, j=1, k, maior, menor;
float somador;
for (i=0; i<5; i++) {
    printf ("Valor #%d: ", j);
    scanf ("%d", &numeros [i]);
    somador = somador + numeros [i];
    j++;
}
maior = numeros [0];
menor = numeros [0];
for (i=0; i<5; i++){
if (maior < numeros [i]){ maior = numeros [i];}
else if (menor > numeros [i]) { menor = numeros [i];}
}
printf ("Valores lidos: ");
for (i=0; i<5; i++){
    printf ("%d ", numeros [i]);
}
j = 0;
for (i=0;i<5;i++){
if (numeros [i]==menor){ j = i;}
else if (numeros [i] == maior) { k = i;}
}
printf ("\nMaior valor: %d, localizado na posicao %d do array\nMenor valor: %d, localizado na posicao %d do array\nMedia: %.1f\n", maior,k, menor ,j, somador/5);
return 0;
}

/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores
Mostrar o índice (index) do vetor associado ao maior número e ao menor número 

Exemplo de saída:
<< Five Values with index >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6, index 1 of the array
Min. Value: 0, index 3 of the array
Mean: 3.6
*/