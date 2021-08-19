#include <stdio.h>

typedef struct ponto {
int p1, p2;
}ponto;

void ImprimePonto (ponto pontos){
printf ("O ponto digitado eh: (%d, %d)", pontos.p1, pontos.p2);
}
int main(){
    ponto p;
    printf("Digite o valor de x: ");
    scanf ("%d", &p.p1);
    printf("Digite o valor de y: ");
    scanf ("%d", &p.p2);
    ImprimePonto (p);
    return 0;
}

/*
Observação: Para os próximos exercícios, crie uma struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Faça uma função chamada imprime_ponto, que recebe uma 
struct do tipo ponto e mostra na tela o ponto no seguinte formato 
(ponto.x, ponto.y)

Exemplo de chamada da função:
imprime_ponto(p)

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x: 10
Digite o valor de y: 5
O ponto digitado eh: (10,5)
-------------------------------------------------------------------------------
*/