#include <stdio.h>

int main(){
    printf("<< Five Values >>\n");
int numeros [5], i, j=1, maior, menor;
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
printf ("\nMaior valor: %d\nMenor valor: %d\nMedia: %.1f\n", maior, menor, somador/5);
return 0;
}

/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores

Exemplo de saída:
<< Five Values >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6
Min. Value: 0
Mean: 3.6
*/