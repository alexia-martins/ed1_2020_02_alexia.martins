#include <stdio.h>
int main() {
float aposta1, aposta2, aposta3, premio, premioap1, premioap2, premioap3, ttAposta;
printf ("<< Loteria >>\n");
    printf("Bolao jogador 1 R$: ");
    scanf ("%f", &aposta1);
    printf("Bolao jogador 2 R$:");
    scanf ("%f", &aposta2);
    printf("Bolao jogador 3 R$:");
    scanf ("%f", &aposta3);
    printf("Informe o valor do premio:");
    scanf ("%f", &premio);
    ttAposta=aposta1+aposta2+aposta3;
    premioap1 = ((aposta1*100)/ttAposta);
    printf("Jogador 1 recebera R$:  %.1f", premio*premioap1/100);
    premioap2 = ((aposta2*100)/ttAposta);
    printf("\nJogador 2 recebera R$:  %.1f", premio*premioap2/100);
    premioap3 = ((aposta3*100)/ttAposta);
    printf("\nJogador 3 recebera R$:  %.1f", premio*premioap3/100);
}


/*
EX 10: 
Três amigos jogaram na loteria.
Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que cada deu para a realização da aposta.
Faça um programa que lê quanto cada apostador investiu, lê o valor do prêmio, e escreve quanto cada um ganharia.
Exemplo de saída: 
<< Loteria >>
Bolão jogador 1 R$: 3
Bolão jogador 2 R$: 3
Bolão jogador 3 R$: 4
Informe o valor do prêmio: 6000.0
Jogador 1 receberá R$: 1800.0
Jogador 2 receberá R$: 1800.0
Jogador 3 receberá R$: 2400.0
*/