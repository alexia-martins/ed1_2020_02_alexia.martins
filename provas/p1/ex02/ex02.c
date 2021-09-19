#include <stdio.h>
#include <stdlib.h>

// Definir as estruturas necessárias aqui (copiar do exercício anterior):

// Função:
// Essa função retorna o livro usado mais antigo
// - Entrada: todos os livros cadastrados 
// - Saída: índice do vetor indicando o livro usado mais antigo
// (se houver empate pode ser retornado qualquer um dos livros)

typedef struct {
char nome [50];
float preco;
char estado [10];
int ano;
}livro;

// check:<<<erro: e2.3: Declaração da função com erros de entrada (no tipo, ou falta parâmetros)>>>>
// check:<<<erro: e2.5a: Inicialização errada (deveria ser o maior valor possível) ou o ano do primeiro livro mais antigo>>>>
// check:<<<erro: e2.6aa: Na busca está ocorrendo somente a comparação o menor/maior e este não está sendo atualizado>>>>
// check:<<<erro: e2.7: se todos os livros são novos o programa vai retornar errado>>>>

int buscar (livro *p) {
int i, j, pos, ano;
livro aux;
aux.ano = p[0].ano; 
for (i=0; i<4; i++){
if (p[i].estado[0] == 'u') {
    if (p[i].ano<aux.ano) pos = i; }
}
return pos;}

int main(){
    int i, posi;
    livro *livros;
    livros = (livro *)malloc(5*sizeof(livro));

    strcpy (livros[0].nome, "livro 1");
    strcpy (livros[0].estado, "usado");
    livros[0].preco = 9.99;
    livros[0].ano = 2010;

    strcpy (livros[1].nome, "livro 2");
    strcpy (livros[1].estado, "usado");
    livros[1].preco = 6.99;
    livros[1].ano = 1998;

    strcpy (livros[2].nome, "livro 3");
    strcpy (livros[2].estado, "novo");
    livros[2].preco = 1.99;
    livros[2].ano = 2021;

    strcpy (livros[3].nome, "livro 4");
    strcpy (livros[3].estado, "usado");
    livros[3].preco = 0.99;
    livros[3].ano = 1990;

    strcpy (livros[4].nome, "livro 5");
    strcpy (livros[4].estado, "usado");
    livros[4].preco = 7.99;
    livros[4].ano = 2000;


    printf ("Lista de livros: \n");
    for (i=0; i<5; i++){
    printf ("Nome: %s\n", livros[i].nome);
     printf ("Preco: %.2f\n", livros[i].preco);
      printf ("Estado: %s\n", livros[i].estado);
       printf ("Ano: %d\n\n", livros[i].ano);
    }
    posi = buscar (livros);// check:<<<erro: e2.1b: Não passou o tamanho do vetor para a função>>>>
    printf("Livro usado mais antigo: \n");
    printf ("Nome: %s\n", livros[posi].nome);
    printf ("Preco: %.2f\n", livros[posi].preco);
    printf ("Estado: %s\n", livros[posi].estado);
    printf ("Ano: %d\n\n", livros[posi].ano);

    free (livros);


}






   // Ex02: utilizando a função de buscar, mostre
   // todas as informações do livro *usado* mais antigo

   // Todas as funções de entrada e saída devem estar no programa
   // principal

   // Dica: para testar, crie um vetor estático preenchido com alguns valores (opcional)

