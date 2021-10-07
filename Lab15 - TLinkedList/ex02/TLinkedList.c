#include <stdio.h>
#include "TLinkedList.h"
#include <stdlib.h>

typedef struct list_node list_node;

struct list_node
{
    struct aluno data;
    list_node *next;
};

typedef struct TLinkedList
{
    list_node *head;
    int size; // quantidade de elementos na lista
    int sorted; // indica se a lista é ordenada por número de matrícula: 0 – não ordenada ; 1 - ordenada 
} TLinkedList;

TLinkedList *list_create()
{
    TLinkedList *list;
    list = malloc(sizeof(TLinkedList));
    if (list != NULL)
    {
        list->head = NULL;
    }
    return list;
}
/*
void nodes_aux(TLinkedList *li){
        list_node *curr; // current - nó atual
        list_node *prev; // previous - nó anterior
        prev = NULL;
        curr = li->head;
}
*/

int list_push_front(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(list_node));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->next = list->head;

        list->head = node;
        return SUCCESS;
    }
}

int list_push_back(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(list_node));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->next = NULL;

        if (list->head == NULL)
        {
            list->head = node;
        }
        else
        {
            list_node *aux;
            aux = list->head;
            while (aux->next != NULL)
            {
                aux = aux->next;
            }
            aux->next = node;
        }
        return SUCCESS;
    }
}

int list_print(TLinkedList *list)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *aux;
        aux = list->head;
        printf("\nImprimindo a lista\n");
        while (aux != NULL)
        {
            printf("\n------------------\n");
            printf("Matricula: %d\n", aux->data.matricula);
            printf("Nome: %s\n", aux->data.nome);
            printf("Notas: %f; %f; %f;\n", aux->data.n1, aux->data.n2, aux->data.n3);

            aux = aux->next;
        }
        printf("\nFim da lista \n");
        return SUCCESS;
    }
}

int list_free(TLinkedList *list)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *aux;
        aux = list->head;

        while (aux != NULL)
        {
            list->head = aux->next;
            // list->head = list->head->next;  (outra opção)
            free(aux);
            aux = list->head;
        }
        // segunda forma
        // while (list->head != NULL)
        // {
        //     aux = list->head;
        //     list->head = list->head->next;
        //     free(aux);
        // }

        free(list);
        return SUCCESS;
    }
}

int list_insert_sorted(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(node));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;

        list_node *curr; // current - nó atual
        list_node *prev; // previous - nó anterior
        prev = NULL;
        curr = list->head;
        while ((curr != NULL) && curr->data.matricula < al.matricula)
        {
            prev = curr;
            curr = curr->next;
        }
        if (prev == NULL) // insere na cabeça (lista vazia ou não)
        {
            node->next = list->head;
            list->head = node;
        }
        else
        { // insere a partir do segundo elemento (incluso)
            prev->next = node;
            node->next = curr;
        }
        return SUCCESS;
    }
}

int list_insert(TLinkedList *li, int pos, struct aluno al)
{
    if (li == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(node));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;

        list_node *curr; // current - nó atual
        list_node *prev; // previous - nó anterior
        prev = NULL;
        curr = li->head;
        int i = 1;
        while ((curr != NULL) && i <= pos)
        {
            prev = curr;
            curr = curr->next;
            i++;
        }
        if (prev == NULL)
        {
            return IMPOSSIBLE_POSITION;
            //Lista está vazia e por isso não podemos inserir em uma posição > 1
        }
        else
        { // insere a partir do segundo elemento (incluso)
            prev->next = node;
            node->next = curr;
            return SUCCESS;
        }
    }
}

int list_size(TLinkedList *li)
{
    if (li == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        int i = 0;
        list_node *curr; // current - nó atual
        list_node *prev; // previous - nó anterior
        prev = NULL;
        curr = li->head;

        while ((curr != NULL))
        {
            prev = curr;
            curr = curr->next;
            i++;
        }
        if (prev == NULL)
            return EMPLY_LIST;
        else
            return i;
    }
}

int list_pop_front(TLinkedList *li)
{
    if (li == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        int i = 0;
        list_node *curr; // current - nó atual
        list_node *prev; // previous - nó anterior
        prev = NULL;
        curr = li->head;

        li->head = curr->next;
        free(curr);
        return SUCCESS;
    }
}

int list_pop_back(TLinkedList *li)
{
    if (li == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *curr; // current - nó atual
        list_node *prev; // previous - nó anterior
        prev = NULL;
        curr = li->head;

        while (curr != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        free(prev);
    }
}
int list_erase_data(TLinkedList *li, int mat)
{
    if (li == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *curr; // current - nó atual
        list_node *prev; // previous - nó anterior
        prev = NULL;
        curr = list->head;
        while ((curr != NULL) && curr->data.matricula != mat)
        {
            prev = curr;
            curr = curr->next;
        }

        if (curr->data.matricula == mat)
        {   
            prev->next = curr->next;
            free (curr);
            return SUCCESS;
            //compara se é a matricula solicitada
        }
        else
        {
            return ELEM_NOT_FOUND;
        }

        
    }
}
int list_erase_pos(TLinkedList *li, int pos){
if (li == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *curr; // current - nó atual
        list_node *prev; // previous - nó anterior
        prev = NULL;
        curr = list->head;
        i=1;
        while ((curr != NULL) && i != pos)
        {
            prev = curr;
            curr = curr->next;
            i++;
        }

        if (i == pos)
        {   
            prev->next = curr->next;
            free (curr);
            
            //compara se é a posicao solicitada
            return SUCCESS;
        }
        else
        {
            return ELEM_NOT_FOUND;
        }  
    }
}
int list_find_pos(TLinkedList *li, int pos, struct aluno *al){
if (li == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *curr; // current - nó atual
        list_node *prev; // previous - nó anterior
        prev = NULL;
        curr = list->head;
        i=1;
        while ((curr != NULL) && i != pos)
        {
            prev = curr;
            curr = curr->next;
            i++;
        }

        if (i == pos)
        {   
           al->data = curr->data;
            
            //compara se é a posicao solicitada
            return SUCCESS;
        }
        else
        {
            return ELEM_NOT_FOUND;
        }  
    }
}
int list_find_mat(TLinkedList *li, int nmat, struct aluno *al){
 if (li == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *curr; // current - nó atual
        list_node *prev; // previous - nó anterior
        prev = NULL;
        curr = list->head;
        while ((curr != NULL) && curr->data.matricula != nmat)
        {
            prev = curr;
            curr = curr->next;
        }

        if (curr->data.matricula == nmat)
        {   
            al->data = curr->data;
            return SUCCESS;
            //compara se é a matricula solicitada
        }
        else
        {
            return ELEM_NOT_FOUND;
        }
    }
}

int list_front(TLinkedList *li, struct aluno *al){
 if (li == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
  
            al->data = li->head.data;
            return SUCCESS;
    }
}

int list_back(TLinkedList *li, struct aluno *al){
 if (li == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *curr; // current - nó atual
        list_node *prev; // previous - nó anterior
        prev = NULL;
        curr = list->head;
        while ((curr != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
    al->data = prev->data;
    return SUCCESS;
    }

}
int list_get_pos(TLinkedList *li, int nmat, int *pos){
 if (li == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *curr; // current - nó atual
        list_node *prev; // previous - nó anterior
        prev = NULL;
        curr = list->head;
        i=1;
        while ((curr != NULL) && curr->data.matricula != nmat)
        {
            prev = curr;
            curr = curr->next;
            i++;
        }
        if (curr->data.matricula == nmat){
            *pos = i;
        return SUCCESS;
        }
        else
        {
            return ELEM_NOT_FOUND;
        }
    }
}              
