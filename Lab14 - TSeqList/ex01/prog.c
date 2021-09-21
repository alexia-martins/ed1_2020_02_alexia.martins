#include <stdio.h>
#include "TSeqList.h"
#include <string.h>

int main()
{
    Lista *alunos_pet = NULL, *alunos_enade = NULL;
    alunos_pet = cria_lista();
    alunos_enade = cria_lista();

    int matricula, aux1, aux2, aux3;
    char nome[100];
    float n1, n2, n3;
    aluno aux;

    aluno z[7] = {{2, "Luis", 9.7, 9.8, 9.1},
                  {3, "Matheus", 7.5, 8.9, 9.0},
                  {4, "Jorge", 8.9, 9.0, 7.8},
                  {1, "Bruno", 9.5, 7.6, 8.8},
                  {5, "Adao", 9.5, 7.6, 8.8},
                  {6, "Alexia", 9.5, 7.6, 8.8},
                  {7, "Joana", 9.5, 7.6, 8.8}};
/*
    for (int i = 0; i < 2; i++)
    {
        printf("Dados do alunos:\n");
        scanf("%d%s%f%f%f", &matricula, nome, &n1, &n2, &n3);

        aux.matricula = matricula;
        strcpy(aux.nome, nome);
        aux.n1 = n1;
        aux.n2 = n2;
        aux.n3 = n3;
        //insere inicio
        aux1 = insere_lista_inicio(alunos_pet, aux);
        if (aux1 == -1)
        {
            printf("\nErro: lista cheia ou nao alocada.");
        }
    }*/
    //insere final
    for (int j = 0; j < 7; j++)
    {
        aux2 = insere_lista_final(alunos_enade, z[j]);
        if (aux2 == -1)
            printf("\nErro: lista cheia ou nao alocada.");
    }/*
    printf("IMPRIMINDO ALUNOS PET (INSERIDOS MANUALMENTE NO INICIO):\n");
    imprime_lista(alunos_pet);
*/
    printf("\nIMPRIMINDO ALUNOS ENADE (JA SETADOS NO FIM):\n");
    imprime_lista(alunos_enade);
    printf("==============================================\n");
    printf("==============================================\n");
    remove_intervalo_lista (alunos_enade, 3, 5);
    imprime_lista (alunos_enade);
    /*
    printf("==============================================\n");

    printf("USANDO INSERIR ORDENADO NO ALUNOS PET: \n");
    printf("Dados do aluno a ser inserido:\n");
    scanf("%d%s%f%f%f", &matricula, nome, &n1, &n2, &n3);

    aux.matricula = matricula;
    strcpy(aux.nome, nome);
    aux.n1 = n1;
    aux.n2 = n2;
    aux.n3 = n3;
    aux1 = insere_lista_ordenada(alunos_pet, aux);
    if (aux1 == -1)
    {
        printf("Erro: lista cheia ou nao alocada.\n");
    }
    else
    {
        printf("IMPRIMINDO APOS INSERIR ORDENADO:\n");
        imprime_lista(alunos_pet);
        printf("==============================================\n");
        printf("ACESSANDO PELA POSICAO: \n");
        printf("Qual posicao acessar?\n");
        scanf("%d", &aux2);
        printf("Digite 1 para alunos pet ou 2 alunos enade.");
        scanf("%d", &aux1);
    }

    if (aux1 > 2 || aux1 < 1)
    {
        printf("Valor invalido.\n");
    }
    if (aux1 == 1)
    {
        aux3 = consulta_lista_pos(alunos_pet, aux2, &aux);
        if (aux3 == -1)
            printf("Lista nao alocada ou posicao invalida.\n");

        printf("Matricula: %d\nNome: %s\nNota 1: %.1f\nNota2: %.1f\nNota 3: %.1f\n", aux.matricula, aux.nome, aux.n1, aux.n2, aux.n3);
        printf("==============================================\n");
    }
    else
    {
        aux3 = consulta_lista_pos(alunos_enade, aux2, &aux);
        if (aux3 == -1)
            printf("Lista nao alocada ou posicao invalida.\n");

        printf("Matricula: %d\nNome: %s\nNota 1: %.1f\nNota2: %.1f\nNota 3: %.1f\n", aux.matricula, aux.nome, aux.n1, aux.n2, aux.n3);
    }
    printf("==============================================\n");

    printf("ACESSANDO PELA MATRICULA:\n");
    printf("Qual matricula encontrar?\n");
    scanf("%d", &aux2);
    printf("Digite 1 para alunos pet ou 2 alunos enade.\n");
    scanf("%d", &aux1);
    if (aux1 > 2 || aux1 < 1)
    {
        printf("Valor invalido.\n");
    }
    if (aux1 == 1)
    {
        aux3 = consulta_lista_mat(alunos_pet, aux2, &aux);
        if (aux3 == -1)
            printf("Lista nao alocada ou vazia.\n");
        if (aux3 == 1)
            printf("Matricula nao encontrada.\n");
        printf("Matricula: %d\nNome: %s\nNota 1: %.1f\nNota2: %.1f\nNota 3: %.1f\n", aux.matricula, aux.nome, aux.n1, aux.n2, aux.n3);
        printf("==============================================\n");
    }
    else
    {
        aux3 = consulta_lista_mat(alunos_enade, aux2, &aux);
        if (aux3 == -1)
            printf("Lista nao alocada ou vazia.\n");
        if (aux3 == 1)
            printf("Matricula nao encontrada.\n");
        printf("Matricula: %d\nNome: %s\nNota 1: %.1f\nNota2: %.1f\nNota 3: %.1f\n", aux.matricula, aux.nome, aux.n1, aux.n2, aux.n3);
    }
    printf("==============================================\n");

    printf("TAMANHO DA LISTA ALUNOS ENADE: %d\n", tamanho_lista(alunos_enade));
    printf("TAMANHO DA LISTA ALUNOS PET: %d\n", tamanho_lista(alunos_pet));
    printf("Lista enade cheia? 1 = FALSO\t0 = VERDADEIRO\t-1 = ERRO  ---> %d\n", lista_cheia(alunos_enade));
    printf("Lista enade vazia? 1 = FALSO\t0 = VERDADEIRO\t-1 = ERRO  ---> %d\n", lista_vazia(alunos_enade));
    printf("Lista pet cheia? 1 = FALSO\t0 = VERDADEIRO\t-1 = ERRO  ---> %d\n", lista_cheia(alunos_pet));
    printf("Lista pet vazia? 1 = FALSO\t0 = VERDADEIRO\t-1 = ERRO  ---> %d\n", lista_vazia(alunos_pet));

    printf("==============================================\n");

    printf("Removendo aluno matricula 1 alunos enade:\n");
    aux3 = remove_lista(alunos_enade, 1);
    if (aux3 == -1)
    {
        printf("Remocao falhou.\n");
    }

    printf("Lista atualizada:\n");
    imprime_lista(alunos_enade);

    printf("==============================================\n");

    printf("Removendo primeiro aluno da lista de alunos enade:\n");
    aux3 = remove_lista_inicio(alunos_enade);
    if (aux3 == -1)
    {
        printf("Remocao falhou.\n");
    }
    printf("Lista atualizada:\n");
    imprime_lista(alunos_enade);

    printf("==============================================\n");

    printf("Removendo ultimo aluno da lista de alunos enade:\n");
    aux3 = remove_lista_final(alunos_enade);
    if (aux3 == -1)
    {
        printf("Remocao falhou.\n");
    }
    printf("Lista atualizada:\n");
    imprime_lista(alunos_enade);

    printf("==============================================\n");

    printf("Removendo de maneira otimizada e atraves da matricula:\n");
    printf("Digite a matricula: \n");
    scanf("%d", &aux1);
    printf("Digite 1 para alunos pet ou 2 alunos enade.\n");
    scanf("%d", &aux2);
    if (aux2 > 2 || aux2 < 1)
    {
        printf("Valor invalido.\n");
    }
    if (aux2 == 1)
    {
        aux3 = remove_lista_otimizado(alunos_pet, aux1);
        if (aux3 == -1)
        {
            printf("Remocao falhou.\n");
        }
        else
        {
            printf("Lista atualizada:\n");
            imprime_lista(alunos_pet);
        }
    }
    else
    {
        aux3 = remove_lista_otimizado(alunos_enade, aux1);
        if (aux3 == -1)
        {
            printf("Remocao falhou.\n");
        }
        printf("Lista atualizada:\n");
        imprime_lista(alunos_enade);
    }*/
    printf("==============================================\n");

    printf("Liberando lista enade:\n");
    aux3 = libera_lista(alunos_enade);
    if (aux3 == -1)
        printf("Falha na liberacao.\\");

    else
        printf("Enade liberado.\n");

    printf("Liberando lista pet:\n");
    aux3 = libera_lista(alunos_pet);
    if (aux3 == -1)
    {
        printf("Falha na liberacao.\\");
    }
    else
    {
        printf("Pet liberado.\n");
    }
}