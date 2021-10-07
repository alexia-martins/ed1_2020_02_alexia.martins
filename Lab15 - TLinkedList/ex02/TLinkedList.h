#define SUCCESS 0 //sucesso
#define INVALID_NULL_POINTER -1 //nao alocado
#define OUT_OF_MEMORY -2 //nao tem memoria
#define OUT_OF_RANGE -3 //maior q tamanho da lista
#define ELEM_NOT_FOUND -4 //elemento nao encontrado
#define IMPOSSIBLE_POSITION -5 //deve ser inserido no começo e nao em x posição
#define EMPLY_LIST -6 //lista vazia
#define FAILED_REMOVE -7 //falha na remoção
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct TLinkedList TLinkedList;

TLinkedList *list_create(); //ok
int list_free(TLinkedList *list); //ok
int list_push_front(TLinkedList *list, struct aluno al); //ok
int list_push_back(TLinkedList *list, struct aluno al); //ok
int list_insert(TLinkedList *li, int pos, struct aluno al); //ok
int list_insert_sorted(TLinkedList *li, struct aluno al); //ok
int list_size(TLinkedList *li); //ok
int list_pop_front(TLinkedList *li); // ok
int list_pop_back(TLinkedList *li); // ok
int list_erase_data(TLinkedList *li, int mat); //
int list_erase_pos(TLinkedList *li, int pos); //
int list_find_pos(TLinkedList *li, int pos, struct aluno *al); //
int list_find_mat(TLinkedList *li, int nmat, struct aluno *al); //
int list_front(TLinkedList *li, struct aluno *al); //
int list_back(TLinkedList *li, struct aluno *al); //
int list_get_pos(TLinkedList *li, int nmat, int *pos); //
int list_print(TLinkedList *li); //ok
int list_insert_sorted(TLinkedList *list, struct aluno al); //ok




