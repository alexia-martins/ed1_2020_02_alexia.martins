#include <stdio.h>
#include <string.h>
#include "partida.h"
#include <stdlib.h>
int main()
{   int v, temp;
    char c1[100], c2 [100], s;
 
  printf("\nInforme o clube 1: ");
  fgets (c1, 100, stdin);
  printf ("Informe o clube 2: ");
  fgets (c2, 100, stdin);
  printf ("Informe a serie: ");
  scanf(" %c", &s);
  printf ("Informe o tempo da partida: ");
  scanf ("%d", &temp);
  getchar();
    partida *p;
<<<<<<< HEAD
    printf ("Quantas partidas deseja criar para o campeonato?\n");
    scanf ("%d", &v);
    p = criar_campeonato (v);
    

/*
  altera_preco(p, 10);

  get_prod_info(p,nome, &preco_at, &qtd);
=======
    p = (malloc(1*sizeof(partida)));
    p = criar_campeonato (c1, c2, s, temp);
    imprime_jogos (p);
    excluir_campeonato (p);
>>>>>>> 344d253c886c902dfa89d175fd8c246a2d01dcb4

}