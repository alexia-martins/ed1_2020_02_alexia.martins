#include <stdio.h>

int main (){
    int estado;
	float valor, vimp;
    printf("<<Valor do Produto com imposto>> \n\n");
    printf("Digite o valor do produto: \n");
    scanf ("%f", &valor);
    printf("Insira o codigo do estado\n");
    scanf ("%d", &estado);
        if (estado==1){
        vimp= valor + (valor*0.07);
        printf ("Valor final com impostos R$: %.2f\n", vimp);}
            else if (estado==2){
            vimp= valor + (valor*0.12);
            printf ("Valor final com impostos R$: %.2f\n", vimp);}
            else if (estado==3){
            vimp= valor + (valor*0.15);
            printf ("Valor final com impostos R$: %.2f\n", vimp);}
            else if (estado==4){
            vimp= valor + (valor*0.08);
            printf ("Valor final com impostos R$: %.2f\n", vimp);}
        else {printf ("\nESTADO NAO CADASTRADO TENTE NOVAMENTE!!\n");}
}


/*
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto (1-MG 7%; 2-SP 12%; 3-RJ 15%;
4-MS 8%). Faça um programa em que o usuário entre com o valor e o código do estado
destino do produto e o programa retorne o preço final do produto acrescido do
imposto do estado em que ele será vendido. Se o código do estado digitado não for
válido, mostrar uma mensagem de erro

Exemplo de saída:
<< Valor do Produto com imposto >>
Digite o valor do produto R$: 100.00
Digite a unidade da federação: 1
Valor final com impostos R$: 107.00

*/