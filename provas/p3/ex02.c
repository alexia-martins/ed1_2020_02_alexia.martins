/*
Considere o TAD TDLinkedList que serve para manipular uma lista duplamente
encadeada de alunos (a lista usada na prática 16 – copiar o código da
SUA PRÁTICA)

Implemente uma função chamada concat3, cuja funcionalidade é concatenar
(juntar) 3 listas. Seu cabeçalho é o seguinte:

int list_concat3(TDLinkedList *pre, TDLinkedList *in, TDLinkedList *pos)

pre  - lista a ser concatenada e que vai ficar no início (antes de /in/).
      É também a lista de destino final (lista que receberá a concatenação
      de todas as listas).
in – lista a ser concatenada e que vai ficar entre as listas /pre/ e /pos/.
pos – lista a ser concatenada no final (depois de /in/)

Retorno da função: 0 para sucesso; -1 para qualquer tipo de erro
Na implementação do list_concat3, *nenhum elemento é copiado ou movido*,
somente os ponteiros internos das três listas são rearranjados.
Após a concatenação, as listas continuarão existindo, no entanto,
as listas in e pos ficarão sem elementos (vazia).
O resultado final da concatenação ficará na lista /pre/.

Saída concatenada (armazenada em \pre\):
pre <-> in <-> pos
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

// check:<<<erro: creio que faltou compreender o que o exercício pediu, pois nao foi atendido>>>>
int list_concat3(TDLinkedList *pre, TDLinkedList *in, TDLinkedList *pos)
{
      if (pre->dados == NULL || in->dados == NULL || pos->dados == NULL || pre->size == 0 || pos->size == 0 || in->size == 0)
      {
            return -1; // se listas vazias/nao alocadas
      }
      else
      {
            list_node *nodeaux;
            nodeaux = pos->end;
            pre->size += pos->size + in->size;
            in->end->next = pos->start;
            pos->start->curr = in->end;
            pre->end->next = in->start;
            in->start->curr = pre->end;
            pre->end = nodeaux;

            in->start = NULL;
            in->end = NULL;
            pos->start = NULL;
            pos->end = NULL;
            in->size = 0;
            pos->size = 0;
            return 0;
      }
}
