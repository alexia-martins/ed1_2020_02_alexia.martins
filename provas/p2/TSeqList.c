#include <stdio.h>
#include <stdlib.h>
#include "TSeqList.h" //inclui os Protótipos
#include <string.h>

//Definição do tipo lista
struct lista
{
    int qtd;
    struct aluno dados[MAX];
};

Lista *cria_lista()
{
    Lista *li;
    li = (Lista *)malloc(sizeof(struct lista));
    if (li != NULL)
    {
        li->qtd = 0;
    }
    return li;
}

int insere_lista_final(Lista *li, aluno al)
{
    if (li == NULL || li->qtd == MAX)
    {
        return -1;
    }
    li->dados[li->qtd] = al;
    li->qtd++;
    return 0;
}

int consulta_lista_pos(Lista *li, int pos, aluno *al)
{
    if (li == NULL || pos <= 0 || pos > li->qtd)
        return -1;
    *al = li->dados[pos - 1];
    return 0;
}

int consulta_lista_mat(Lista *li, int mat, aluno *al)
{
    if (li == NULL || li->qtd <= 0)
    {
        return -1;
    }
    int i;
    while (i < li->qtd && li->dados[i].matricula != mat)
    {
        i++;
    }
    if (i == li->qtd)
    {
        return 1; //elemento nao encontrado
    }
    al->matricula = li->dados[i].matricula;
    al->n1 = li->dados[i].n1;
    al->n2 = li->dados[i].n2;
    al->n3 = li->dados[i].n3;
    strcpy(al->nome, li->dados[i].nome);
    return 0;
}

int insere_lista_inicio(Lista *li, aluno al)
{
    if (li == NULL)
        return -1;
    if (li->qtd == MAX) //lista cheia
        return -1;
    // deslocando os elementos
    for (int i = li->qtd - 1; i >= 0; i--)
    {
        li->dados[i + 1] = li->dados[i];
    }
    // primeira posição disponivel
    li->dados[0] = al;
    li->qtd++;
    return 0;
}
int insere_lista_ordenada(Lista *li, aluno al)
{
    if (li == NULL || li->qtd == MAX)
    {
        return -1;
    }
    int k, i = 0;

    while (i < li->qtd && li->dados[i].matricula < al.matricula)
    {
        i++;
    }
    for (k = li->qtd - 1; k >= i; k--)
    {
        li->dados[k + 1] = li->dados[k];
    }
    li->dados[i] = al;
    li->qtd++;
    return 0;
}

int imprime_lista(Lista *li)
{
    if (li == NULL || li->qtd == 0)
        return -1;

    for (int i = 0; i < li->qtd; i++)
    {
        printf("\nMatricula: %d\t", li->dados[i].matricula);
        printf("Nome: %s\t", li->dados[i].nome);
        printf("Notas: %.1f, %.1f, %.1f\n", li->dados[i].n1, li->dados[i].n2, li->dados[i].n3);
    }
    return 0;
}

int libera_lista(Lista *li)
{
    if (li != NULL)
    {
        free(li);
        li->qtd = 0;
        return 0;
    }
    else
    {
        return -1;
    }
}

int remove_lista(Lista *li, int mat)
{
    if (li == NULL || li->qtd <= 0)
    {
        return -1;
    }
    else
    {
        int i = 0;
        while (i < li->qtd && li->dados[i].matricula != mat)
        {
            i++;
        }
        if (i == li->qtd)
        {
            return -1; //nao encontrado
        }
        for (int j = i; j < li->qtd; j++)
        {
            li->dados[i] = li->dados[i + 1];
        }
        li->qtd--;
        return 0;
    }
}

int remove_lista_inicio(Lista *li)
{
    if (li == NULL || li->qtd <= 0)
        return -1;
    // deslocando os elementos
    for (int i = 0; i < li->qtd; i++)
    {
        li->dados[i] = li->dados[i + 1];
    }
    li->qtd--;
    return 0;
}
int remove_lista_final(Lista *li)
{
    if (li == NULL || li->qtd <= 0)
        return -1;
    li->qtd--;
    return 0;
}
int tamanho_lista(Lista *li)
{
    if (li == NULL)
    {
        return -1; //para erro
    }
    else
    {
        return li->qtd; //retorna tamanho
    }
}
int lista_cheia(Lista *li)
{
    if (li == NULL || li->qtd < MAX)
    {
        return -1; //para erro
    }
    else
    {
        return 0; // para falso
    }
}
int lista_vazia(Lista *li)
{
    if (li == NULL)
    {
        return -1; // para erros
    }
    else if (li->qtd == 0)
    {
        return 0; // para verdadeiro
    }
    else
    {
        return 1; //1 para // para falso
    }
}

int remove_lista_otimizado(Lista *li, int mat)
{
    if (li == NULL)
        return -1;
    if (li->qtd == 0)
        return -1; //retornos pra erros
    {
        int i;
        while (i < li->qtd && li->dados[i].matricula != mat)
            i++;
        if (i == li->qtd)
            return 1; //elemento nao encontrado
        li->qtd--;
        li->dados[i] = li->dados[li->qtd];
        return 0; //removido com sucesso
    }
}
int troca_pos_lista(Lista *li, int pos1, int pos2)
{
    aluno aux;
    if (li == NULL || li->qtd <= 0 || pos1 > li->qtd || pos2 > li->qtd || pos1 < 0 || pos2 < 0)
    {
        return -1;
    }
    else
    {
        //copiando para meu aluno auxiliar
        aux.matricula = li->dados[pos1 - 1].matricula;
        strcpy(aux.nome, li->dados[pos1 - 1].nome);
        aux.n1 = li->dados[pos1 - 1].n1;
        aux.n2 = li->dados[pos1 - 1].n2;
        aux.n3 = li->dados[pos1 - 1].n3;
        // copiando os dados da pos 2 pra pos 1
        li->dados[pos1 - 1] = li->dados[pos2 - 1];
        // copiando os dados do auxiliar para pos 2
        li->dados[pos2 - 1].matricula = aux.matricula;
        strcpy(li->dados[pos2 - 1].nome, aux.nome);
        li->dados[pos2 - 1].n1 = aux.n1;
        li->dados[pos2 - 1].n2 = aux.n2;
        li->dados[pos2 - 1].n3 = aux.n3;
        return 0;
    }
}
int remove_intervalo_lista(Lista *li, int start, int end)
{
    if (li == NULL || li->qtd <= 0 || start > li->qtd || end > li->qtd || start < 0 || end < 0 || start > end)
    {
        return -1;
    }
    else
    {
        int i;


            
            for (int j = li->qtd; j >=0; j--)
            {
                if (j>=(start-1) && j < end){
                for (i = j; i < li->qtd; i++)
        {
                li->dados[i] = li->dados[i + 1];
            }
            
        }
    }
    li->qtd -= ((end - start) + 1);
    }
}
