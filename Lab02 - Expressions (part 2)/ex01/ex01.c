#include <stdio.h>

int main (){

	int provaA, provaB, med;

    printf("<< Calculo da Media >>\n");
    printf("Digite a nota da prova 1: ");
    scanf ("%d", &provaA);
    printf("Digite a nota da prova 2: ");
    scanf ("%d", &provaB);
        med = ((provaA + provaB)/2);
        printf("A nota media eh %d", med);

}

/*
=> Faça um algoritmo que calcula a média das notas de 2 provas.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite a nota da prova 1: 80
Digite a nota da prova 2: 90
A nota media eh 85
-------------------------------------------------------------------------------
*/