#include <stdio.h>
void DesenhaLinha (int qtd){
    int j=0;
    char c = '=';

for (j=0; j<qtd; j++){
    printf ("%c", c);
}
printf ("\n");
}

int CalculaFatorial(int n){
int i;
long long int fator = 1;

    for(i=1; i<=n ;i++){
        fator *=i;
        }
return fator;
}

int main(){
    int numero, caracteres, total;
    printf("Digite o tamanho da linha: ");
    scanf ("%d", &caracteres);

    printf("Digite o numero que deseja calcular o fatorial: ");
    scanf ("%d", &numero);
    DesenhaLinha(caracteres);
    total = CalculaFatorial (numero);
    printf ("O fatorial de %d eh %d", numero, total);
    printf ("\n");
    DesenhaLinha(caracteres);
    return 0;
}

/*
=> Faça uma função para calcular o fatorial de um número. Use essa função
para calcular o fatorial de um número que o usuário digitar.
Colocar todas as funções E/S (entrada e saída) no programa principal.
(use também a função DesenhaLinha – esta pode conter comandos de saída fora do programa principal). 

Ex: Fatorial(5) tem como saída 120 
    DesenhaLinha(10) tem  como saída ==========

No programa principal, solicite ao usuário o tamanho da linha a ser desenhada e o número que se
deseja calcular o fatorial.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho da linha: 10
Digite o numero que deseja calcular o fatorial: 5
==========
O fatorial de 5 eh 120
==========
-------------------------------------------------------------------------------
*/