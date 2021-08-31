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
    
    partida *p;
    p = (malloc(1*sizeof(partida)));
    p = criar_campeonato (c1, c2, s, temp);
    imprime_jogos (p);
    excluir_campeonato (p);
}