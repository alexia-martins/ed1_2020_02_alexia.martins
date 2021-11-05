/* ex03
Crie uma função que faz a junção de dois vetores inteiros.
A função deve ter como entrada os dois vetores e seus
respectivos tamanhos. A alocação de espaço necessário para
o vetor concatenado deve ser feita dentro da função
(a função então deve devolver para o programa principal
o vetor alocado e também o tamanho desse novo vetor).
A função deve retornar um valor inteiro: (0 - zero)
se a junção ocorreu de forma correta; (-1) em caso de erro.
Mostre o uso da função no programa principal. Não é
permitido criar novos tipos de dados para a solução
do exercício (ou seja, sem uso de structs).


Vetor 1: [1, 5, 2]
Vetor 2: [10, 30]
Concatenção Vetor 1, Vetor 2

Vetor Concatenado = [ 1, 5, 2, 10, 30]

*/

#include <stdio.h>
#include <stdlib.h>

// check:<<<erro: vetor resultante deve ser passado como ponteiro de ponteiro>>>> -4

int contaneta(int *p1, int tam1, int *p2, int tam2, int *res, int *tres)
{
    int n = tam1 + tam2;
    if (tam1 == 0 || tam2 == 0)
    {
        return -1;
    }

    else
    {
        
        int *p3 = malloc(n*sizeof (int));
        if (p3 != NULL){
        for (int i = 0; i < tam1; i++)
        {
            p3[i] = p1[i];
        }
        for (int j = 0; j < tam2; j++)
        {
            p3 [j+tam1] = p2 [j]; 
        }

        *tres = n;
        res = p3;
    }
    return 0;
}

int main()
{

    int v1[5] = {10, 11, 13, 15, 13};
    int v2[3] = {1, 5, 2};
    int qtd, aux;
    int *p1 = v1, *p2 = v2;
    int *v3 = NULL;// check:<<<erro: variavel quantidade deve ser alocada (esttática mesmo, depois é só usar &)>>>>
    aux = contaneta (p1, 5, p2, 3, v3, &qtd);
    int cont;
    if(aux == -1){
        printf("Nao foi possivel concatenar\n");}
else {
    for (cont = 0; cont < *qtd; cont++)
    {
        printf("%d ", v3[cont]);
        printf ("Quantidade: %d", qtd);
    }

    free(v3);
}
}