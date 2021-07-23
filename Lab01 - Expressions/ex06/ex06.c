#include <stdio.h>

int main() {
    int premio, valor;
    printf("<< Loteria >>\n");
    printf ("Valor total do premio: ");
    scanf("%d", &premio);
    valor= premio*0.46;
    printf("Primeiro vencedor: %d\n", valor);
    valor= premio*0.32;
    printf("Segundo vencedor: %d\n", valor);
    valor= premio*0.22;
    printf("Terceiro vencedor: %d", valor);

}


/*
=> A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que da quantia total: 
    O primeiro ganhador receberá 46%;
    O segundo receberá 32%;
    O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Loteria >>
Valor total do premio: 780000
Primeiro vencedor: 358800
Segundo vencedor: 249600
Terceiro vencedor: 171600
-------------------------------------------------------------------------------
*/