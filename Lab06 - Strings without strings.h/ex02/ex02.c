#include <stdio.h>

int main() {
printf("<<Vetor de Char>>\n\n");
char c, nome[50];
int i, p;
p = 0;
printf("Digite um nome: \n");
while (c != '\n') {
nome[p] = c;
p++;
c = getchar();
}
printf("O nome digitado foi: \n");
for (i=0; i < p; i++){
printf("%c", nome[i]);
}
}

/*
Utilizando os conceitos aprendidos até o momento (vetores e tipo char), crie um
programa que leia o nome de uma pessoa e, em seguida, mostre o nome lido. Utilizar
getchar() para entrada dos dados (veja acima um exemplo de como usar o getchar()).
O nome pode ter no máximo 50 caracteres. Não usar as funções de string.h

Exemplo de saída:
<< Vetor de char>>
Digite um nome: Bruno
O nome digitado é: Bruno

*/