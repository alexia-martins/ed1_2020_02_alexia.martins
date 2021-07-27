#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int i,fator = 1;
printf ("<< Fatorial >>\n");
    for(i=1; i<=15 ;i++){printf("%d! = %d \n",i,fator);
        fator = fator+(fator*i);}
}


/*
Faça um programa que mostre o valor de 1!, 2!, 3!, até 10!. Utilize somente variáveis inteiras
Exemplo de saída:
<< Fatorial >>
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
6! = 720
7! = 5040
8! = 40320
9! = 362880
10! = 3628800
*/