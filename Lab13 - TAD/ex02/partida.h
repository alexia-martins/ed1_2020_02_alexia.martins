
typedef struct partida {
    char clubeA [100], clubeB [100];
    char serie;
    int tempo;

}partida;

partida* criar_campeonato (char *c1, char *c2, char serie, int tempo);
int excluir_campeonato (partida *p);
void imprime_jogos(partida *p);
