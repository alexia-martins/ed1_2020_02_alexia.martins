#include "partida.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Função iniciar jogo
// Desc: inicia um *jogo*
// Entrada:
//    partida
//    tempo total do jogo
//    serie pertencente
// Retorno:
//    0 - sucesso
//    -1 - erro
partida* criar_campeonato (int v){
    partida *p;
    p = ((partida *)malloc(v*sizeof(partida)));
    if (p== NULL) return NULL;
    else {
        for (int i=0; i<v; i++){
        printf("\nInforme o clube 1, clube 2, a serie e o tempo da %d partida:\n", i+1);
        getchar();
        fgets (p->clubeA,100, stdin);
        getchar();
        fgets (p->clubeB,100, stdin);
        getchar();
        scanf ("%c", p->serie);
        getchar();
        scanf ("%d", p->tempo);
        }
    return p;
    }}

int excluir_campeonato (partida *p) {
if (p== NULL) {return -1;}
else {free (p);
return 0;
}}

void imprime_jogos(partida *p){
    printf("\nClube 1: %s\nClube 2: %s\nSerie: %c\nTempo de jogo (min): %d\n", p->clubeA, p->clubeB, p->serie, p->tempo);
}

