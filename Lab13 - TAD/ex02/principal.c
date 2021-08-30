#include <stdio.h>
#include <string.h>
#include "partida.h"

int main()
{   int v;
    partida *p;
    printf ("Quantas partidas deseja criar para o campeonato?\n");
    scanf ("%d", &v);
    criar_campeonato (v);
    

/*
  altera_preco(p, 10);

  get_prod_info(p,nome, &preco_at, &qtd);

  imprime_produto(p);
  printf("\n\npreco antes: %f, preco depois: %f", preco_ant, preco_at);
  free(p);
        iniciar_jogo (v);
*/
}