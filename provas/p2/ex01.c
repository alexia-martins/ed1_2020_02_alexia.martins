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
    
    if (li == NULL || li->qtd <= 0 || pos1 > li->qtd || pos2 > li->qtd || pos1 <= 0 || pos2 <= 0)
    {// check:<<<erro: e1.2: erro em testes de tamanho da lista com as posições de troca (posições aceitas >=1 <=qtd/ teste de lista null>>>>
        return -1;
    }
    else
    {
        //copiando para meu aluno auxiliar
        // check:<<<erro: e1.3: Uso de funções e comandos excessivos para fazer a cópia do aluno, sendo um simples comando de atribuição funciona para structs. Exemplo: aluno_temp = lista->dados[pos]>>>>
     aluno aux = li->dados [pos-1];
        // copiando os dados da pos 2 pra pos 1
     li->dados[pos1-1] = li->dados[pos2-1];
        // copiando os dados do auxiliar para pos 2
     li->dados [pos2-1] = aux->dados;   
     return 0;
    }
}



