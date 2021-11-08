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
struct aluno {
    int matricula;
    char nome[30];
    float n1,n2,n3;
};
struct node {
    struct aluno data;
    struct node *prox;
};

struct TCircList{
    struct node *end;
    struct node *aux;
};

typedef struct node node;
typedef struct aluno aluno;
typedef struct TCircList TCircList;

TCircList *list_create()
{
    TCircList *li = (TCircList *)malloc(sizeof(TCircList));
    if (li != NULL)
    {
        *li->end = NULL;
        *li->aux = *li->end;
    return li;
    }
        return NULL; 
}


// check:<<<erro: faltou teste de lista vazia>>>>
// check:<<<erro: fez o teste para saber se é a primeira vez que chama a função>>>>
// check:<<<erro: não retornou o tipo de dado esperado >>>>

// check:<<<comentário: não entendi qual é para avaliar entre as duas soluções apresentadas>>>>
aluno list_next(TCircList *li)
{
    aluno temp;
    if (li == NULL || li->end == NULL)
    {
        return NULL;
    }
    temp = li->end;
    if (li->end != li->aux)
    {
        li->aux = li->aux->prox;
        temp = li->aux->data;
        return temp;
    }
    else
    {
        return temp;
    }

}
