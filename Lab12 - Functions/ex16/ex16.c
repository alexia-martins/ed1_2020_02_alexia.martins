#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int x;
    int y;
}ponto;

void ImprimePonto ( ponto p){
    printf("(%d,%d)", p.x, p.y);
}
void ind_diag (ponto *p, int aux){
    switch (aux){
    case 1 : p->x +=1; p->y -=1; break;
    case 2 : p->x -=1; p->y -=1; break;
    case 3 : p->x +=1; p->y +=1; break;
    case 4 : p->x -=1; p->y +=1; break;
    default: printf("Valor digitado nao correspondente\n"); exit (0);
    }
}
int main(){
    char dir [10];
    int aux=0;
    ponto p1, p2;
    ponto *p = &p1;
    printf("Digite o x do ponto: ");
    scanf("%d", &p1.x);
    printf("Digite o y do ponto: ");
    scanf("%d", &p1.y);
    getchar();
    p2.x = p1.x;
    p2.y = p1.y;
    printf("Digite o sentido sudeste, sudoeste, nordeste, noroeste:\n");
    fgets (dir, 10, stdin);
    if ((strcmp (dir, "sudeste"))==0) aux +=1;
    if ((strcmp (dir, "sudoeste"))==0) aux +=2;
    if ((strcmp (dir, "nordeste"))==0) aux +=3;
    if ((strcmp (dir, "noroeste"))==0) aux +=4;
    else printf ("Sentido nao cadastrado\n"); exit (0);

    ind_diag(p, aux);
    ImprimePonto (p2);
    printf(" => %s ", dir);
    ImprimePonto (p1);
    return 0;
}

/*
=> Crie um procedimento para andar na diagonal (sudeste, 
sudoeste, nordeste, noroeste). Use obrigatoriamente as funções do 
exercício anterior.

Exemplo de chamada:
ind_diag(p,"sudeste"); 
ind_diag(p,"sudoeste");

-------------------------------------------------------------------------------
Exemplo de Saída:

(1,3) sudeste => (2,2)
(2,4) sudoeste => (1,3)
-------------------------------------------------------------------------------
*/