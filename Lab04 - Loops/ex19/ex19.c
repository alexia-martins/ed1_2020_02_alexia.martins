#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){

int bJose, bCarlos, cont=1;

    printf("<<Banco>> \n\n");
bJose=50000;
bCarlos=25000;

while (bCarlos<=bJose){
    bJose=bJose+800;
    bCarlos=bCarlos+3000;
printf("Mes %d -> Saldo Jose R$: %d\t\tSaldo Carlos R$: %d\n",cont, bJose, bCarlos);
cont++;
}
printf ("\nCarlos demorou %d meses para ultrapassar o saldo de Jose. \n", cont-1);
}
/*
José possui no banco R$50.000,00 e Carlos R$ 25.000,00. Carlos poupa R$ 3.000,00 por
mês, enquanto que o José poupa R$800,00. Quantos anos levarão para que o Carlos fique
com mais dinheiro que o José? Faça um algoritmo para mostrar esse cálculo.
*/