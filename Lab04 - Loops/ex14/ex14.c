#include <stdio.h>

int main(){
int num, cont=2, div=0;
printf ("<< Numeros primos >>\n");
printf("Entre com o valor: ");
scanf("%d", &num);
for (cont; cont<=num; cont++) {
if (num%cont==0){ div++;}
}
if (div==1) {printf("O numero %d e primo. ", num);}
else { printf("O numero %d nao e primo. ", num);}
}
/*
Dado um inteiro positivo p, verificar se p é primo.
Exemplo de saída:

<< Números primos >>
Entre com o valor: 15
O número 15 não é primo

Exemplo de saída:

<< Números primos >>
Entre com o valor: 7
O número 7 é primo

*/