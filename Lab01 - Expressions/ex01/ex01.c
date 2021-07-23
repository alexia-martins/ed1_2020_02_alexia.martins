#include <stdio.h>

int main(){
    float n, quad;
    printf("<< Calculo do Quadrado de n >>\n");
    printf("Digite um numero:");
    scanf("%f", &n);
	quad = n*n;
    printf(" O valor de %.1f ao quadrado e %.2f", n, quad);
}

/*
=> Efetuar a leitura de um número real e apresentar o resultado do quadrado desse número.

-------------------------------------------------------------------------------
Exemplo de saída: 
<< Calculo do Quadrado de n>>
Digite um número: 2.5O 
O valor de 2.5 ao quadrado é 6.25
-------------------------------------------------------------------------------
*/