#include <stdio.h>

typedef struct ponto {
float x, y;
}ponto;

void ImprimePonto (ponto pontos1, ponto pontos2, float area){
printf ("A area do retangulo definido por (%.2f, %.2f) e (%.2f, %.2f) eh (%.2f)", pontos1.x, pontos1.y, pontos2.x, pontos2.y, area);
}
float CalculaArea (ponto cord1, ponto cord2, float *p){
*p = ((cord1.x-cord2.x)*-(cord1.y-cord2.y));
return *p;
}
int main(){
    ponto p1, p2;
    float soma;
    float *p = &soma;
    printf("Digite o valor de x: ");
    scanf ("%f", &p1.x);
    printf("Digite o valor de y: ");
    scanf ("%f", &p1.y);
    printf("Digite o valor de x2: ");
    scanf ("%f", &p2.x);
    printf("Digite o valor de y2: ");
    scanf ("%f", &p2.y);
    
    ImprimePonto (p1, p2, CalculaArea (p1, p2, p));
  
    return 0;

}

/*
Observação: Lembre-se de utilizar a struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Faça uma função que calcule a área do retângulo definido por 
dois pontos. 

Cabeçalho: area = calc_area(p1,p2)


-------------------------------------------------------------------------------
Exemplo de Saída:

<< Calculo de Area >>
Digite a coordenada x do ponto 1: 1
Digite a coordenada y do ponto 1: 4
Digite a coordenada x do ponto 2: 4
Digite a coordenada y do ponto 2: 2

A area do retangulo definido por (1.00, 4.00) e (4.00, 2.00) eh 6.00
-------------------------------------------------------------------------------
*/
