
typedef struct partida {
    char clubeA [100], clubeB [100];
    char serie;
    int tempo;

}partida;

partida* criar_campeonato (int v);
int excluir_campeonato (partida *p);
void imprime_jogos(partida *p);
