/*
Este erro ocorre porque apos fazer a multiplicação ultrapassou o numero de bits reservados 
pelo tipo "int" o que causou invasão de memória.
Para solucionar basta que alterar a variavel fator do tipo int para o tipo double que não terá invasão de memória.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){
int i;
int fator = 1; 
/*      double fator = 1;     */
    for(i=1; i<=15 ;i++){
        if (i>10){
        printf("%d! = %d \n",i,fator);
        /*      printf("%d! = %.lf \n",i,fator);      */
        fator = fator+(fator*i);}
    else {
        fator = fator+(fator*i);}

    }
}

/*
Altere o programa anterior para calcular o10! até 15!. É esperado que ocorra um erro.
Explique o motivo do erro e qual a solução.
Exemplo de saída:
<< Fatorial >>
11 ! = 39 916 800
12 ! = 479 001 600
13 ! = 6 227 020 800
14 ! = 87 178 291 200
15 ! = 1 307 674 368 000
*/