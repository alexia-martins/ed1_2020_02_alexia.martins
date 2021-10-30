/* ex02
Uma das utilidades das listas circulares dinâmicas é a possibilidade de percorrer
todos os elementos por diversas vezes em um loop. Modifique o TAD para incluir uma
função que retornará sempre o próximo elemento. Por exemplo, se a lista não foi
percorrida ainda, o próximo elemento é a cabeça. Depois, ao chamar a função
novamente, será devolvido o segundo elemento, e assim sucessivamente.
(a) mostrar como fica a estrutura do TAD
(b) mostrar a função que retorna o próximo elemento
*Não é necessário mostrar as outras funções afetadas pela modificação proposta

(c) Qual a diferença entre o vetor de acesso circular usado na
implementação de uma fila estática de uma lista circular?
// responder aqui:
A diferença é que a lista circular não tem um fim,

*/

struct node
{
    struct aluno data;
    struct node *prox;
};

struct TCircList
{
    struct node *head;
    struct node *next;
};

typedef struct node node;

TCircList *list_create()
{
    TCircList *li = (TCircList *)malloc(sizeof(TCircList));
    if (li == NULL)
    {
        *li = NULL;
    }
    li.next = li.head;
    return li;
}

int list_free(TCircList *li)
{
    if (li != NULL && (*li) != NULL)
    {
        node *aux;
        node *atual = *li;
        while ((*li) != atual->prox)
        {
            aux = atual;
            atual = atual->prox;
            free(aux);
        }
        free(atual);
        free(li);
    }
    return SUCCESS;
}

node list_next(TCircList *li)
{
    if (li == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    if (li->next != li->head)
    {
        li->next = li->next->prox;
        return li->next;
    }
    else
    {
        return li->next;
    }

}

/*
int list_next(TClist *li, struct student *sl){
  if(li == NULL)
    return INVALID_NULL_POINTER;
  if(li->end == NULL)
    return OUT_OF_MEMORY;
  Clist_node *aux;
  aux = li->end->next;
  *sl = aux->data;
  return SUCCESS;
}
*/
