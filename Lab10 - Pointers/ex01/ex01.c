#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
int val[5] = {2,4,5,8,10}, i;
int *p = &val[2];
printf ("Antes da alteracao:\n");
for (i=0;i<5;i++){
    if (i==4) {printf ("%d", val[i]);}
else {printf ("%d, ", val[i]);}
}
*p = 6;
printf ("\nApos alteracao: \n");

p = &val;

for (i=0;i<5;i++){
    if (i==4) {printf ("%d", *p);}
else {printf ("%d, ", *p);}
p++;
}}

/*
Crie um programa que contenha a seguinte variável
int val[5] = {2,4,5,8,10};
                  ^
Utilizando a função scanf, altere o valor de 5 para 6. 
Não use o operador & no scanf. Utilize uma variável do tipo inteira*
para guardar o endereço da posição do vetor.

*obs:
unsigned int (para programas em 32bit)
unsigned long int (para programas em 64)

*/