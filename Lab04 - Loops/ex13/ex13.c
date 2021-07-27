#include <stdlib.h>
#include <stdio.h>

int main(){
int varn, vari, varj, cont=0, mult=0;
printf("<<Multiplos>>\n");
printf("Insira o valor de n: ");
scanf("%d", &varn);
printf("Insira o valor de i: ");
scanf("%d", &vari);
printf("Insira o valor de j: ");
scanf("%d", &varj);
printf("Os multiplos de i ou j sao: ");

while (cont!=varn){
if ((mult%vari)==0 || (mult%varj) == 0 || (mult%vari)==0 && (mult%varj) == 0)
{
printf ("%d, ", mult);
cont ++;
mult ++;
}
else {
    mult ++;
}
} 
}

/*
 Dados n e dois números inteiros positivos i e j diferentes de 0, imprimir em ordem crescente os n
primeiros naturais que são múltiplos de i ou de j e ou de ambos.
Exemplo: Para n = 6 , i = 2 e j = 3 a saída deverá ser : 0,2,3,4,6,8.

Exemplo de saída:
<< Múltiplos >>
Entre com o valor de n: 6
Entre com o valor de i: 2
Entre com o valor de j: 3
Os múltiplos de i ou j são : 0,2,3,4,6,8

*/