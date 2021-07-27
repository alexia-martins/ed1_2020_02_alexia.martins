#include <stdio.h>

int main(){
int inicial, cont, soma;
printf("<<Soma de n valores naturais>>\n");
printf("Quantos numeros deseja somar? ");
scanf("%d", &cont);
inicial=cont;
while (cont>=0) {
soma=soma+cont;
cont--;
}
printf ("A soma dos %d numeros naturais e: %d", inicial, soma);
}

/*
Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais (faça a soma
utilizando while .

Exemplo de saída:
<< Soma de n valores naturais >>
Quantos números deseja somar? 5
A soma dos 5 primeiros números naturais é : 15
*/