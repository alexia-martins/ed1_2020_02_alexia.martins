#include <stdio.h>
#include <math.h>

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
=> Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distância da origem (0,0).  
Obs: faça #include <math.h> e use a função sqrt() para calcular a raiz de um número

-------------------------------------------------------------------------------
Exemplo de saída:

<< Distancia >>
Entre com a coordenada x: 3
Entre com a coordenada y: 4
A distancia entre os pontos (3,4) e (0,0) eh 5.0
-------------------------------------------------------------------------------
*/

