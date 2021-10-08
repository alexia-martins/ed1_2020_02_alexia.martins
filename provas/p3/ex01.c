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
        list_node *auxAl;
        aux = li->start;
        aux2 = li->start;
        auxAl = aux->next;
        auxAlPrev = NULL;
        counter = 1;
        while (counter > 0)
        {
            for (int i = 1; i <= li->size; i++)
            {
                if (auxAl->data.n1 > aux->data.n1)
                {
                    aux = aux->next;
                }
                else
                {
                    if (auxAl->data.n1 == aux->data.n1)
                    {
                        counter += 1;
                    }
                    else
                    {
                        auxAl->data = aux->data;
                    }
                    aux = aux->next;
                }
            }
            while (aux2->next != NULL)
            {
                list_node *auxAl2;
                auxAl2 = aux2->next;
                for (int i = 1; i <= li->size; i++)
                {
                    if (auxAl->data.n1 > aux->data.n1)
                    {
                        aux = aux->next;
                    }
                    else
                    {
                        auxAl->data = aux2->data;
                    }
                }
                auxAlPrev = auxAl->next;
                free(auxAl2);
                counter--;
            }
        }
        return SUCCESS;
    }
}