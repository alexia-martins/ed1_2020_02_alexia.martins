#include <stdio.h>
#include <stdlib.h>

// Função: Cálculo do lucro
// Crie um função que calcula qual foi o lucro (ou prejuízo) de uma venda
// A função recebe como entrada o preço de compra e o preço de venda
// Ela calcula e retorna o porcentual de lucro ou prejuízo obtido
//
// A função deve retornar um valor inteiro de acordo com a classificação listada na tabela abaixo.
// Valores inválidos correspondem a números negativos e zeros
// Todos os comandos de entrada e saída devem estar no programa principal
// Todos os cálculos devem ser feitos na função.

/*
+-------------------+-----------------------------------------------+----------------+
| Retorno da Função | Porcentual de lucro                           | Classificação  |
+-------------------+-----------------------------------------------+----------------+
| -1                | -                                             | Valor invalido |
+-------------------+-----------------------------------------------+----------------+
| 1                 | abaixo ou igual 0%                            | Prejuízo       |
+-------------------+-----------------------------------------------+----------------+
| 2                 | acima de 0% e menor ou igual a 20%            | Lucro pequeno  |
+-------------------+-----------------------------------------------+----------------+
| 3                 | acima de 20% e menor ou igual a 40%           | Lucro bom      |
+-------------------+-----------------------------------------------+----------------+
| 4                 | acima de 40%                                  | Lucro alto     |
+-------------------+-----------------------------------------------+----------------+

*/

int calculaVenda (float valorCompra, float valorVenda, float *porcentagem){
    
    if(valorCompra <= 0 || valorVenda <= 0){return -1;}
    
    *porcentagem = ((valorVenda/valorCompra)-1)*100;
    
    if(*porcentagem <= 0)        return 1;
    
    else if(*porcentagem > 0 && *porcentagem <= 20 )      return 2;
    
    else if(*porcentagem > 20 && *porcentagem <= 40)      return 3;

    else if(*porcentagem > 40)   return 4;   
}
int main(){

   // Ex03: utilizando a função de cálculo de lucro, leia o preço de compra e venda
   // e mostre o percentual de lucro ou prejuízo e a classificação de acordo com
   // a tabela acima. 
   // exemplo de saída:
   // Preço de compra: 10; Preco de venda:11; Lucro Pequeno de 10%
   // Preço de compra: 10; Preco de venda: 9; Prejuízo de 10%
    float percentual;
    float valorCompra, valorVenda;
    int retorno;

    printf("Digite o preco de compra:");
    scanf("%f", &valorCompra);
    printf("Digite o preco de venda:");
    scanf("%f", &valorVenda);

    retorno = calculaVenda(valorCompra, valorVenda, &percentual);

    switch(retorno){
        case -1:  printf("Valores Invalidos\n"); break;
        case 1:
            printf("Preco de compra: %.f; Preco de venda: %.f; Prejuizo de %.1f%%\n", valorCompra, valorVenda, percentual);
            break;
        case 2:
            printf("Preco de compra: %.f; Preco de venda: %.f; Lucro pequeno de %.1f%%\n", valorCompra, valorVenda, percentual);
            break;
        case 3:
            printf("Preco de compra: %.f; Preco de venda: %.f; Lucro bom de %.1f%%\n", valorCompra, valorVenda, percentual);
            break;  
        case 4:
            printf("Preco de compra: %.f; Preco de venda: %.f; Lucro otimo de %.1f%%\n", valorCompra, valorVenda, percentual);
            break;
    }
}