#include <stdio.h>
#include <math.h>
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
EX 11: 
Faça um programa que faça operações simples de números complexos:
Crie e leia dois números complexos z e w, compostos por parte real e parte imaginária.
Apresente a soma, subtração e produto entre z e w, nessa ordem, bem como o módulo de ambos.
Obs: faça #include <math.h> e use a função sqrt() para calcular a raiz de um número.

Ex de saida:
<<Numero complexo>>
Informe a parte real de z: 2
Informe a parte imaginária de z:3
Informe a parte real de w: 5
Informe a parte imaginária de w:2
z + w =  7.0 + 5.0i
z - w = -3.0 + 1.0i
z * w = 4.0+19i
|z| = 3.6056
|w| = 5.3852
*/