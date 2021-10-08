/*
Utilizando uma ED de Pilha (STACK) que armazena caracteres, 
faça um programa que lê uma string do teclado e, 
**utilizando a pilha**, mostre a string na ordem reversa. 
Entregar somente o código do programa principal. 
Não há necessidade de mostrar o código da pilha

Se a pessoa digitar abcd, o programa vai devolver: dcba

*/
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
stack_create ();
int qtd;
char c;
printf ("Digite quantas letras serão colocadas: ");
scanf ("%d", &qtd);

for (int i =0; i<qtd; i++){
printf ("Digite a letra: ");
scanf ("%c", &c);
stack_push (st, c);
}

  for (int j = li->qtd; j > 0; j-- {
    printf("%c", li->letra[j]);
  }
}