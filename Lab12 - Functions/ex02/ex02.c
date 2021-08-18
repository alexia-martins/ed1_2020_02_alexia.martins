#include <stdio.h>
void DesenhaLinha (int qtd){
    int j=0;
    char c = '=';
for (j=0; j<qtd; j++){
    printf ("%c", c);
}
}
int main(){
    int i, linhas, caracteres;
 
    printf("Digite a quantidade de linhas a serem impressas: ");
    scanf ("%d", &linhas);
    printf("Digite o tamanho da linha: ");
    scanf ("%d", &caracteres);

    for (i=0;i<linhas;i++){
    DesenhaLinha(caracteres);
    printf ("\n"); 
    }
    return 0;
}

/*
=> Faça um procedimento chamado DesenhaLinha. Ele deve desenhar 
uma linha na tela usando vários caracteres "=" (Ex: ========). 
O procedimento deve ter como argumento um valor que indica
quantos caracteres "=" serão mostrados. 

Ex: DesenhaLinha(4) tem como saída ====; 
    DesenhaLinha(10) tem  como saída ==========

No programa principal, solicite ao usuário quantas vezes a função 
deverá ser executada e qual o tamanho da linha a ser desenhada.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite a quantidade de linhas a serem impressas: 3
Digite o tamanho da linha: 5
=====
=====
=====
-------------------------------------------------------------------------------
*/