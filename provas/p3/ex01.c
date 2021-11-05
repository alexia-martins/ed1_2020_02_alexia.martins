/*
Considere o TAD TDLinkedList que serve para manipular uma lista duplamente
encadeada de alunos (a lista usada na prática 16 – copiar o código
da SUA PRÁTICA)

Implemente no TAD a função  int list_erase_max_nota_n1(TDLinkedList *li), que
retira da  lista todos os alunos que possuem a maior nota na primeira prova
(elemento n1 da struct aluno; note que mais de um aluno pode possuir
a nota máxima). Pode-se utilizar qualquer funçã ojá implementada na
lista (que estão no .h)


*/

/*
DEFINIÇÃO DA LISTA PARA ME AJUDAR A RACIOCINAR OBG
struct TDLinkedList {
  list_node *start;
  list_node *end;
  int size;
};

struct list_node {
    struct aluno data;
    list_node *next;
    list_node *curr;
};

struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

TDLinkedList* list_create() {
  TDLinkedList *list;
  list = malloc(sizeof(TDLinkedList));

  if (list == NULL) return NULL;

  list->start = NULL;
  list->end = NULL;
  list->size = 0;
}

*/

int list_erase_max_nota_n1(TDLinkedList *li)
{
    if (li == NULL)
    {
        return INVALID_NULL_POINTER;
    }

    else
    {
        list_node *aux;
        int ntmax = 0, aux2;
        int posM = 1; // pos do maior numero na lista (0 no vetor)
        aux = li->start;
        while (aux != NULL)
        {
            if (aux->data.n1 >= ntmax)
            {
                ntmax = aux->data.n1;
            }
        }
        aux = li->start;
        while (aux != NULL)
        {
            if (aux->data.n1 == ntmax)
            {
                aux2 = list_erase_pos(li, posM);
                if (aux2 != 0)
                {
                    posM--;   // nao "existe" item para ser apagado da lista pos zerada
                    return 1; // elemento nao encontrado na lista para apagar
                    
                }
                aux = aux->next;
                posM++;
            }
            return 0; // deu tudo certo;
        }
    }
}