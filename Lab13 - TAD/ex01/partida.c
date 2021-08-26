#include "partida.h"
#include <stdio.h>

// Função iniciar jogo
// Desc: inicia um *jogo*
// Entrada:
//    partida
//    tempo total do jogo
//    serie pertencente
// Retorno:
//    0 - sucesso
//    -1 - erro
void iniciar_jogo (partida *p){
    if (p->tempo > 0) {
        printf ("Comeca o jogo entre %s e %s pela serie %c! Tempo total de jogo %d minutos", p->clubeA, p->clubeB, p->serie, p->tempo);
    } else printf ("Falha, jogo nao iniciado");
    }
