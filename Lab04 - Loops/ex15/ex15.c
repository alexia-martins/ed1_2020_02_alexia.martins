#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){

	int tt, i, qtd, num, bin;

    printf("<<Conversor binario-decimal>> \n");
    printf("Digite a quantidade de bits do numero: ");
    scanf ("%d", &qtd);
for(i=1; i<=qtd; i++) {
printf("Digite o # %d bit: ", i);
scanf ("%d", &num);
tt=tt+(num * pow (2, qtd-i));
bin=bin+(num * pow (10, qtd-i));
}
printf ("O numero %d em binario equivale a %d em decimal.\n", bin, tt);
}
/*
Faça um conversor binário – decimal. O usuário deve digitar o número de bits do número
binário e um bit deve ser lido por vez
Exemplo de saída:

<< Conversor binário-decimal >>
Entre com o número de bits: 3
Digite o bit # 1: 1
Digite o bit # 2: 0
Digite o bit # 3: 0
O número binário 100 em decimal é 4
*dica para juntar os bits para mostrar na tela: 101 = 1*(10^2) + 0*(10^1) + 1*(10^0)
*/
