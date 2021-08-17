#include <stdio.h>
#include <stdlib.h>

int main (){
    printf("<< Pointers >>\n");

int val[5] = {2,4,5,8,10}, i;
int *p = &val;
printf ("Antes da alteracao:\n");
for (i=0;i<5;i++){
    if (i==4) {printf ("%d", val[i]);}
else {printf ("%d, ", val[i]);}
}
/*Quis mostrar os dois jeitos*/
for (i=0;i<5;i++){
*p = (*p)-1;
p++;
}

printf ("\nApos alteracao: \n");

p = &val;

for (i=0;i<5;i++){
    if (i==4) {printf ("%d", *p);}
else {printf ("%d, ", *p);}
p++;
}}

/*
4) No exercício anterior vimos que o desreferenciamento serve para obtermos o conteúdo da variável
apontada pelo ponteiro. O desreferenciamento serve também para alteramos os valores das variáveis
apontadas pelos ponteiros. Veja um exemplo

int a = 40; // cria uma variável do tipo inteiro, chamada a, e inicializa com valor 40
int *p; // cria uma variável do tipo ponteiro para inteiro, chamada p, e o conteúdo inicial é lixo
p = &a; // faz p receber o endereço de a
*p = 59;

printf("\n O valor da variavel a eh: %d", a);

O resultado do printf é 59. Note que está sendo mostrada a variável a. Utilize o conceito de
desreferenciamento para alterar todo vetor val, subtraindo de cada elemento uma unidade.


*/