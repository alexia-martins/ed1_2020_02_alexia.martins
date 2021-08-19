#include <stdio.h>

typedef struct ponto {
int x, y;
}ponto;

void ImprimePonto (ponto pontos1, ponto pontos2, ponto pontos3){
printf ("A soma de (%d, %d) e (%d, %d) eh (%d, %d)", pontos1.x, pontos1.y, pontos2.x, pontos2.y, pontos3.x, pontos3.y);
}
ponto soma (ponto cord1, ponto cord2, ponto soma){
soma.x = cord1.x+cord2.x;
soma.y = cord1.y+cord2.y;
return soma;
}


int main(){
    ponto p1, p2, p3;
    printf("Digite o valor de x: ");
    scanf ("%d", &p1.x);
    printf("Digite o valor de y: ");
    scanf ("%d", &p1.y);
    printf("Digite o valor de x2: ");
    scanf ("%d", &p2.x);
    printf("Digite o valor de y2: ");
    scanf ("%d", &p2.y);
    
    ImprimePonto (p1, p2,soma (p1, p2, p3));
  
    return 0;

}

/*
Observação: Lembre-se de utilizar a struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Faca uma função que some dois pontos e retorne o resultado 
da soma. Mostre os 3 pontos usando a função imprime_ponto.

Exemplo:
ponto p1, p2, p3;
p3= soma_ponto(p1,p2);

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x1: 1
Digite o valor de y1: 2
Digite o valor de x2: 3
Digite o valor de y2: 4
A soma de (1,2) com (3,4) eh (4,6)
-------------------------------------------------------------------------------
*/