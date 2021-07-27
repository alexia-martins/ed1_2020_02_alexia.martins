#include <stdio.h>

int main(){
int regressiva;
printf("<< Contagem Regressiva >>\n");
printf("Insira o valor de inicio da contagem: ");
scanf("%d", &regressiva);
do {
printf ("%d.. ", regressiva);
regressiva--;
}while (regressiva>=0);
printf ("FIM!\n");
}
/*
Refaça o exercício anterior utilizando o comando do .. while;
*/