#include <stdio.h>

int main() {
    int diast, diasv=30, vbruto;
    float vliq, ISS, IR;
    printf("<< Pagamento encanador >>\n");
    printf ("Digite o numero de dias trabalhados: ");
    scanf ("%d", &diast);
    vbruto= diast*diasv;
    ISS = vbruto*0.04;
    IR = (vbruto-ISS)*0.08;
    vliq=((vbruto-IR)-ISS);
    printf ("Valor bruto R$ %d\n", vbruto);
    printf ("Valor liquido R$ %.2f\n", vliq);
    printf ("ISS R$ %.0f\nIR R$ %.2f", ISS, IR);
}

/*
=> Um contador percebeu que o cálculo de IR do encanador estava errado, pois estava sendo calculado sobre o valor bruto que ele recebeu. 
Refaça o programa anterior, considerando que o IR é sobre o valor bruto após o desconto do ISS.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 794.88
ISS R$: 36
IR R$: 68.12
-------------------------------------------------------------------------------
*/