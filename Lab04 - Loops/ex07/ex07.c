#include <stdio.h>

int main(){
int prog;
printf("<< Contagem Progressiva >>\n");
printf("Insira o valor de inicio da contagem: ");
scanf("%d", &prog);
while (prog<=0) {
printf ("%d.. ", prog);
prog++;
}
printf ("FIM\n");
}

/*
Faça um algoritmo utilizando o comando while que mostra uma contagem progressiva na tela,
iniciando em um valor que o usuário determina e terminando em 0. Mostrar uma mensagem “FIM!”
após a contagem.

Exemplo de saída:
<< Contagem progressiva até 0 >>
Qual é o número inicial? -5
-5.. -4.. -3.. -2.. -1.. 0.. FIM!
*/