/*
2) Considerando o TAD ListaSequencial¹, implemente uma nova função
chamada remove_intervalo_lista, que retira da lista todos os elementos
de uma posição inicial até uma posição final.  Por exemplo,
na chamada abaixo, são retirados da lista os elementos das
posições 5,6,7,8 e 9. Não é permitido chamar outras funções do TAD Lista. 
Nas situações inválidas a função deverá retornar como código de erro
o número -1. Sucesso retornar 0. Mantenha o padrão pré-definido do
TAD, que diz que a posição 1 corresponde ao primeiro elemento da lista.

Exemplo de chamada da função:
remove_intervalo_lista(lista,5,9)

*/

int remove_intervalo_lista(Lista *li, int start, int end)
{
    if (li == NULL || li->qtd <= 0 || start >= li->qtd || end > li->qtd || start <= 0 || end <= 0 || start > end)
    {// check:<<<erro: <=0>>>>
        return -1;
    }
    else
    {
        int i;

// check:<<<erro: e2.3: Um só laço deve ser usado O(n). Da forma como está envolve deslocar os mesmos elementos várias vezes O(N²)>>>>
            
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
