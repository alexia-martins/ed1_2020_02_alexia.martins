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

int calculaVenda (float Compra, float Venda, float *p){
    
    if(Compra <= 0 || Venda <= 0){return -1;}
    
    *p = ((Venda/Compra)-1)*100;
    
    if(*p <= 0)        return 1;
    
    else if(*p > 0 && *p <= 20 )      return 2;
    
    else if(*p > 20 && *p <= 40)      return 3;

    else if(*p > 40)   return 4;   
}
int main(){

   // Ex03: utilizando a função de cálculo de lucro, leia o preço de compra e venda
   // e mostre o percentual de lucro ou prejuízo e a classificação de acordo com
   // a tabela acima. 
   // exemplo de saída:
   // Preço de compra: 10; Preco de venda:11; Lucro Pequeno de 10%
   // Preço de compra: 10; Preco de venda: 9; Prejuízo de 10%
    float r;
    float *p= &r;
    float Compra, Venda;
    int resultado;

    printf("Digite o preco de compra:");
    scanf("%f", &Compra);
    printf("Digite o preco de venda:");
    scanf("%f", &Venda);

    resultado = calculaVenda(Compra, Venda, p);

    switch(resultado){
        case -1:  printf("Valores Invalidos\n"); break;
        case 1:
            printf("\nPreco de compra: %.f;\nPreco de venda: %.f;\nPrejuizo de %.1f%%\n", Compra, Venda, *p);
            break;
        case 2:
            printf("\nPreco de compra: %.f;\nPreco de venda: %.f;\nLucro pequeno de %.1f%%\n", Compra, Venda, *p);
            break;
        case 3:
            printf("\nPreco de compra: %.f;\nPreco de venda: %.f;\nLucro bom de %.1f%%\n", Compra, Venda, *p);
            break;  
        case 4:
            printf("\nPreco de compra: %.f;\nPreco de venda: %.f;\nLucro otimo de %.1f%%\n", Compra, Venda, *p);
            break;
    }
}