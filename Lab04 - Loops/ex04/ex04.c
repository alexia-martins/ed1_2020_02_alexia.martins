#include <stdio.h>

int main(){
int regressiva;
printf("<< Contagem Regressiva>>\n");
printf("Insira o valor de inicio da contagem: ");
scanf("%d", &regressiva);
while (regressiva>=0) {
printf ("%d.. ", regressiva);
regressiva--;
}
printf ("FIM!\n");
}
/*
Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,
iniciando em um valor que o usuário determina e terminando em 0. Mostrar uma mensagem “FIM!”
após a contagem.

Exemplo de saída:

<< Contagem regressiva >>
Qual é o número inicial? 12
12.. 11.. 10.. 9.. 8.. 7.. 6.. 5.. 4.. 3.. 2.. 1.. 0.. FIM!

*/
