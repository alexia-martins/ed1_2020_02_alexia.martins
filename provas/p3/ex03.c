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
      TStack *pilhaLetras;

int qtd;
char c;
printf ("Digite quantas letras serão colocadas: ");
scanf ("%d", &qtd);
pilhaLetras = stack_create ();// check:<<<erro: quem recebe a pilha>>>>
for (int i =0; i<qtd; i++){
printf ("Digite a letra: ");
getchar();
scanf ("%c", &c);
stack_push (pihaLetras, c); //inserindo na base da pilha
}

// check:<<<erro: não está usando a pilha>>>>
char aux;
  for (int j =0; j < qtd; j++ {
    stack_top (pilhaLetras, &aux);
    stack_pop (pilhaLetras);
    printf ("%c ", aux);
  }
}