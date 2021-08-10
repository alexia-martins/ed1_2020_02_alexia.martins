#include <stdio.h>

int main() {

unsigned char nome[50];
unsigned char c;
int i, p=0;
printf("Digite um nome: ");


while (c != '\n') {
nome[p] = c;
p++;
c = getchar();
}
printf("O nome digitado foi: ");
for (i=0; i < p; i++){
if (nome[i]>='A' && nome[i]<='Z') {printf("%c", nome[i]);}
else {
printf("%lc", nome[i]-32);
}}}

/*
 Faça um programa semelhante ao anterior, só que o nome digitado deve ser mostrado
em letras maiúsculas (pense como fazer isso olhando a diferença entre os valores dos
caracteres minúsculos e maiúsculos na tabela ASCII). Não usar as funções de string.h

Exemplo de saída:
<< Vetor de char>>
Digite um nome: Bruno
O nome digitado é: BRUNO
*/