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
A diferença é que a lista circular não tem um fim, ela sempre irá girar em torno de si
ja a lista normal possui um.

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

// check:<<<erro: faltou teste de lista vazia>>>>
// check:<<<erro: fez o teste para saber se é a primeira vez que chama a função>>>>
// check:<<<erro: não retornou o tipo de dado esperado >>>>

// check:<<<comentário: não entendi qual é para avaliar entre as duas soluções apresentadas>>>>
node list_next(TCircList *li)
{
    if (li == NULL || li->head == NULL)
    {
        return NULL;
    }
    if (li->next != li->head)// check:<<<erro: faltou teste de lista vazia>>>>
    {
        li->next = li->next->prox;
        return li->next->data;
    }
    else
    {
        return li->next->data;// check:<<<erro: tem que retornar o aluno>>>>
    }

}
