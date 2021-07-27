#include <stdio.h>

int main() {
    printf("== Operadores Booleanos ==\n");

	int valorA, valorB;
    printf ("Digite 0 para falso e nao 0 para verdadeiro");
            printf("Entre com o primeiro valor (A): ");
    scanf ("%d", &valorA);
        printf("Entre com o segundo valor (B): ");
    scanf ("%d", &valorB);
    if (valorA!=0) {
            if (valorB!=0) { printf ("A and B: 1\nA or B: 1\nA xor B: 0\nnot A: 0\n");}
     else {printf ("A and B: 0\nA or B: 1\nA xor B: 1\nnot A: 0\n");

     }
    } else if (valorA==0){
        if (valorB!=0) { printf ("A and B: 0\nA or B: 1\nA xor B: 1\nnot A: 1\n");}
     else {printf ("A and B: 0\nA or B: 0\nA xor B: 0\nnot A: 1\n");

     }
    }
    }
/*
=> Faça um algoritmo que mostre o funcionamento dos operadores lógicos. Peça para o usuário entrar com dois valores inteiros, 
onde 0 implica em FALSO e qualquer outro número implica em VERDADEIRO.
Obs: XOR = (p || q) && !(p && q)

-------------------------------------------------------------------------------
Exemplo de saída:

== Operadores Booleanos ==
Digite 0 para falso e nao 0 para verdadeiro
Entre com o primeiro valor (A): -1
Entre com o segundo valor (B): 3
A and B: 1
A or B: 1
A xor B: 0
not A: 0
-------------------------------------------------------------------------------
*/