//Arquivo ListaSequencial.h
#define MAX 100

typedef struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
}aluno;

typedef struct lista Lista;

Lista* cria_lista();
int libera_lista(Lista* li);

int consulta_lista_pos(Lista* li, int pos, aluno *al);
int consulta_lista_mat(Lista* li, int mat, aluno *al);
int insere_lista_final(Lista* li, aluno al);
int insere_lista_inicio(Lista* li, aluno al);
int insere_lista_ordenada(Lista* li, aluno al);
int remove_lista(Lista* li, int mat);
int remove_lista_inicio(Lista* li);
int remove_lista_final(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);
int imprime_lista(Lista* li);
int remove_lista_otimizado(Lista* li, int mat);
int troca_pos_lista (Lista* li, int pos1, int pos2);
int remove_intervalo_lista(Lista *li, int start, int end);