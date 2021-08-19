#include <stdio.h>
#include <math.h>

int quadrado (int n){
    int numero;
    int quad;
    quad = sqrt(n);
    if (n%quad==0) return 0;
    else return 1;
}

int main(){
    float numero;
    printf("Digite o valor de n: ");
    scanf ("%f", &numero);
    printf ("%d", quadrado (numero));
}

/*
=> Faça uma função para verificar se um número 
é um quadrado perfeito (retorne Verdadeiro caso seja).   

Ex: QuadradoPerfeito(4) retorna verdadeiro; 
    QuadradoPerfeito(10) retorna falso; 

obs: Pode-se retornar os valores 0 (para verdadeiro) e 1 (para falso).

No programa principal, solicite ao usuário o valor de n.

-------------------------------------------------------------------------------
Exemplo de Saída 1:

Digite o valor de n: 4
O numero 4 eh um quadrado perfeito
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
Exemplo de Saída 2:

Digite o valor de n: 10
O numero 10 não eh um quadrado perfeito
-------------------------------------------------------------------------------
*/