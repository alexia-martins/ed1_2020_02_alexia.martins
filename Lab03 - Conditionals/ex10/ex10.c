
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("== Operadores Logicos ==\n");
    char condA [2], condB [2], opV [11] = "VERDADEIRO", opF [6] = "FALSO";
	int valorA, valorB, i;
    printf ("Digite 0 para falso e nao 0 para verdadeiro\n");

    printf("Entre com o primeiro valor inteiro (A): ");
    scanf ("%d", &valorA);
        if (valorA == 0){
        condA [0] = 'F';
        condA [1] = '\n';}
        else {
        condA [0]= 'V';
        condA [1] = '\n';}

    printf("Entre com o segundo valor inteiro (B): ");
    scanf ("%d", &valorB);
    if (valorB == 0){
    condB [0] = 'F';
    condB [1] = '\0';}
    else {
    condB [0]= 'V';
    condB [1] = '\0';}

        if (condA[0]!= 'F') {
            if (condB[0]!='F') { printf ("A and B: %s\nA or B: %s\nA xor B: %s\nnot A: %s\n", opV, opV, opF, opF);}
     else {printf ("A and B: %s\nA or B: %s\nA xor B: %s\nnot A: %s\n", opF, opV, opV, opF);

     }
    } else if (condA[0] ='F'){
        if (condB[0] !='F') { printf ("A and B: %s\nA or B: %s\nA xor B: %s\nnot A: %s\n", opF, opV, opV, opV);}
     else {printf ("A and B: %s\nA or B: %s\nA xor B: %s\nnot A: %s\n", opF, opF, opF, opV);

     }
    }
}
/*
Faça um algoritmo que mostre o funcionamento dos operadores lógicos. Peça para o
usuário entrar com dois valores inteiros, sendo que esses valores devem ser
convertidos para o tipo lógico, onde 0 implica em FALSO e qualquer outro número
implica em VERDADEIRO. A saída do programa deve ser como a mostrada abaixo
Exemplo de saída:
== Operadores Booleanos ==
Digite 0 para falso e não 0 para verdadeiro
Entre com o primeiro valor (A): -1
Entre com o segundo valor (B): 3
A and B: VERDADEIRO
A or B: VERDADEIRO
A xor B: FALSO
not A: FALSO
*/