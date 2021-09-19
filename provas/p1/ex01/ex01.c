#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Fazer um programa para cadastro de livros. As informações para cadastro são: 
// - o nome do livro
// - O preço
// - Indicação se o livro é novo ou usado
// - ano de compra


// Definir as estruturas necessárias aqui:
typedef struct {
char nome [50];
float preco;
char estado [10];// check:<<<erro: e1.01a: Novo/Usado deve ser booleano (no caso, int) ; Pode-se usar um char, mas com isso exige-se sempre uma comparação de valores>>>>
int ano;
}livro;


int main(){
    // Ex 01: permitir que o usuário cadastre quantos livros quiser
    //  - ler do teclado a quantidade de livros que o usuário escolheu
    //  - ler do teclado as informações dos livros
    int qtd, i;
    livro *livros;
    printf("Informe quantos livros deseja cadastrar: ");
    scanf ("%d", &qtd);

    livros = (livro *)malloc(qtd*sizeof(livro));
    getchar ();
    for (i=0; i<qtd; i++){
    printf ("Digite o nome do livro: ");
    fgets (&livros[i].nome, 50, stdin);

    printf ("Digite o estado do livro: ");
    fgets (&livros[i].estado, 10, stdin);
// check:<<<comentário: não precisa do & para string>>>>
    printf ("Digite o preco do livro: ");
    scanf ("%f", &livros[i].preco);
    printf ("Digite o ano: ");
    scanf ("%d", &livros[i].ano);
    getchar();
    }
    printf ("Livros: \n")
    // check:<<<erro: o print abaixo está errado pois só mostra o primeiro livro>>>>
    for (i=0; i<qtd; i++){
    printf ("Nome: %s", livros->nome);
     printf ("Preco: %.2f\n", livros->preco);
      printf ("Estado: %s", livros->estado);
       printf ("Ano: %d\n\n", livros->ano);
    }

    free (livros);

    return 0;
}