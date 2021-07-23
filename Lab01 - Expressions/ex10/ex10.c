#include <stdio.h>
int main() {
    int cordx, cordy, origem=0;
    float raiz;
    printf("<< Distancia >>\n");
    printf ("Entre com a coordenada x: ");
    scanf("%d", &cordx);
    printf ("Entre com a coordenada y: \n");
    scanf("%d", &cordy);
    raiz = (pow(origem-cordx,2)+ pow(origem-cordy, 2));
    printf ("A distancia entre os pontos (%d,%d) e (0,0) eh %.1f\n", cordx, cordy, sqrt (raiz));
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
/*