#include <stdio.h>

void alterar (float *y, float percente){
float soma;

if (*y>0) soma = *y+(*y*percente);
else soma = *y-((-(*y))*percente);
*y = soma;
}

int main(){
    float y;
    float *p= &y;
    float percente;
    printf("Digite o valor de y: ");
    scanf ("%f", p);
    printf("Digite o percentual de alteracao x: ");
    scanf ("%f", &percente);
    alterar (p, percente);
    printf ("O valor alterado eh: %.f", *p);
}

/*
Crie um procedimento idêntico ao exercício anterior, mas que mude o valor da
variável passada por parâmetro (ou seja, o retorno deve ser void)

Para os próximos exercícios crie uma struct chamada ponto, que armazena dois
números reais que representam coordenadas cartesianas.
*/