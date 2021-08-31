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
partida* criar_campeonato (char *c1, char *c2, char s, int tempo){
    partida *p;
    p = (malloc(1*sizeof(partida)));
    if (p== NULL) return NULL;
    else {
    strcpy(p->clubeA,c1);
    strcpy(p->clubeB,c2);
    getchar ();
    p->serie = s;
    getchar ();
    p->tempo = tempo;
    return p;
    }};
int excluir_campeonato (partida *p) {
if (p== NULL) {return -1;}
else {free (p);
return 0;
}};

void imprime_jogos(partida *p){
    printf("\nClube 1: %s\nClube 2: %s\nSerie: %c\nTempo de jogo (min): %d\n", p->clubeA, p->clubeB, p->serie, p->tempo);
};

