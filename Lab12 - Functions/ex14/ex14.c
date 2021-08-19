#include <stdio.h>

typedef struct ponto {
int x, y;
}ponto;

void ImprimePonto (ponto pontos1, int cons, ponto pontos2){
printf ("Resultado: (%d, %d) * %d = (%d, %d)", pontos1.x, pontos1.y, cons, pontos2.x, pontos2.y);
}
void multi (ponto cord1, int cons, ponto *p){
p->x = cord1.x*cons;
p->y = cord1.y*cons;
}


int main(){
    ponto p1, p2;
    ponto *p = &p2;
    int cons;
    printf("Digite o ponto: ");
    scanf ("%d, %d", &p1.x, &p1.y);
    printf ("Digite a constante: ");
    scanf ("%d", &cons);
    multi (p1, cons, p);
    ImprimePonto (p1, cons, p2);
  
    return 0;

}


/*
=> Faça um procedimento que multiplique o valor de um ponto 
por uma constante e altere o valor do ponto. Deve ser usada 
passagem por referência e retorno void.


-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o ponto: 1,2
Digite a constante: 5
Resultado: (1,2) * 5 = (5,10)
-------------------------------------------------------------------------------
*/