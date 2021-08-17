#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
int num1;
double num2;
void *p;

p= &num1;
printf ("Digite um inteiro:");
scanf ("%d", p);

p= &num2;
getchar ();
printf ("Digite um double:");
scanf ("%lf", p);
p = &num1;
printf ("Numero inteiro lido: %d\n", *(int *)p);
p = &num2;
printf ("Numero double lido: %.2lf\n", *(double *)p);

}

/*
8) Ponteiros void: é um ponteiro genérico, que aponta para qualquer tipo. Sua declaração é deste tipo:

void *nome_ponteiro

Um ponteiro void pode apontar para qualquer tipo. Entretanto, antes de usá-los, é necessário fazer um type
cast para o tipo que ele aponta. Por exemplo: (int *) ou (float *) ou (double *).
Faça um programa com dois números, um inteiro e um double. Crie um ponteiro void e use-o para ler os
valores desses dois números com o comando scanf. Após a leitura, mostre na tela os números lidos, mas use
no printf somente o ponteiro para mostrar os valores.
*/