/*
1) Considerando o TAD ListaSequencial¹, implemente uma nova 
função chamada troca_pos_lista, que troca dois elementos da
lista de posição. Na chamada da função o usuário deverá informar
os dois elementos que devem ser trocados. Por exemplo, na chamada
abaixo, é feita a troca dos elementos na posição 4 e 10, isto é,
o elemento da posição 4 vai para a posição 10, e o da  posição 10
vai para a posição 4. Nas situações inválidas a função deverá
retornar como código de erro o número -1. Sucesso retornar 0. 
Mantenha o padrão pré-definido do TAD, que diz que a
posição 1 corresponde ao primeiro elemento da lista.

Exemplo da chamada da função
troca_pos_lista( lista, 4, 10)


¹struct lista
 {
    int qtd;
    struct aluno dados[MAX];
 };

*/

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
        aux.matricula = li->dados[pos1-1].matricula;
        strcpy(aux.nome, li->dados[pos1-1].nome);
        aux.n1 = li->dados[pos1-1].n1;
        aux.n2 = li->dados[pos1-1].n2;
        aux.n3 = li->dados[pos1-1].n3;
        // copiando os dados da pos 2 pra pos 1
        li->dados[pos1-1] = li->dados[pos2-1];
        // copiando os dados do auxiliar para pos 2
        li->dados[pos2-1].matricula = aux.matricula;
        strcpy(li->dados[pos2-1].nome, aux.nome);
        li->dados[pos2-1].n1 = aux.n1;
        li->dados[pos2-1].n2 = aux.n2;
        li->dados[pos2-1].n3 = aux.n3;
        return 0;
    }
}



