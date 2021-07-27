#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
  float vendaM, comissao;
  printf ("Insira o valor vendido no mes: \n");
  scanf("%f", &vendaM);
    if (vendaM<20000) {comissao = 400+(vendaM*0.14);
    printf ("A comissao a ser recebida e R$: %.2f\n", comissao);}
else if (vendaM>=20000&&vendaM<40000) {comissao = 500+(vendaM*0.14);
    printf ("A comissao a ser recebida e R$: %.2f\n", comissao);}
else if (vendaM>=40000&&vendaM<60000) {comissao = 550+(vendaM*0.14);
    printf ("A comissao a ser recebida e R$: %.2f\n", comissao);}
else if (vendaM>=60000&&vendaM<80000) {comissao = 600+(vendaM*0.14);
    printf ("A comissao a ser recebida e R$: %.2f\n", comissao);}
else if (vendaM>=80000&&vendaM<100000) {comissao = 650+(vendaM*0.14);
    printf ("A comissao a ser recebida e R$: %.2f\n", comissao);}
else if (vendaM>=100000) {comissao = 700+(vendaM*0.16);
    printf ("A comissao a ser recebida e R$: %.2f\n", comissao);}
}

/*
Considere a tabela e escreva um programa que, dado o valor da venda, imprima a comissão que deverá
ser paga ao vendedor.
*/