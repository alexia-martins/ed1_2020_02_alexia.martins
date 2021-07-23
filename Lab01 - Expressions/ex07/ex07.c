#include <stdio.h>

int main() {
    int diast, diasv=30, vbruto;
    float vliq, ISS, IR;
    printf("<< Pagamento encanador >>\n");
    printf ("Digite o numero de dias trabalhados: ");
    scanf ("%d", &diast);
    vbruto= diast*diasv;
    IR = vbruto*0.08;
    ISS = vbruto*0.04;
    vliq=((vbruto-IR)-ISS);
    printf ("Valor bruto R$ %d\n", vbruto);
    printf ("Valor liquido R$ %.0f\n", vliq);
    printf ("ISS R$ %.0f\nIR R$ %.0f", ISS, IR);
}

/*
=> Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador 
e imprima o valor bruto, o imposto, e a quantia líquida que deverá ser paga ao encanador, sabendo-se que são descontados 8% para 
imposto de renda e 4% de ISS. 

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 792
ISS R$: 36
IR R$: 72
-------------------------------------------------------------------------------
*/