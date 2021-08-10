#include <stdio.h>
#include <stdlib.h>

int main() {
 char nome[10] = "0123456789";
 int i,tamanho = 6;
 nome[0] = 'B';
 nome[1] = 'r';
 nome[2] = 'a';
 nome[3] = 's';
 nome[4] = 'i';
 nome[5] = 'l';
 nome[6] = '\0';

 for (i=0; i < tamanho; i++){
 printf("%c",nome[i]);
 }
printf("\n");
printf ("%s", nome);
}


/*
O especificador de tipo %s pode ser usado para mostrar strings (vetores de
caracteres). O programa abaixo mostra um texto na tela com a palavra “Brasil”.
Modifique o programa abaixo para exibir o mesmo vetor usando %c e %s. A saída
deve ser como a indicada mais abaixo (obrigatório uma saída com %c e outra com %s).
int main(void) {
 char nome[10] = "0123456789";

 nome[0] = 'B';
 nome[1] = 'r';
 nome[2] = 'a';
 nome[3] = 's';
 nome[4] = 'i';
 nome[5] = 'l';
 int i,tamanho = 6;

 for (i=0; i < tamanho; i++){
 printf("%c",nome[i]);
 }


 return 0;
}
Saída esperada
Usando %c: Brasil
Usando %s: Brasil
*/
