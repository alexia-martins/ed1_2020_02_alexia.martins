#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int x;
    int y;
}ponto;

void ImprimePonto ( ponto p){
    printf("(%d,%d)", p.x, p.y);
}
void inc_dir (ponto *p, char *direcao){
    switch (*direcao){
    case 'n' : p->y +=1;break;
    case 's' : p->y -=1;break;
    case 'l' : p->x +=1;break;
    case 'o' : p->x -=1;break;
    default: printf("Valor digitado nao correspondente\n");
    }
}
int main(){
    char dir [6];
    ponto p1, p2;
    ponto *p = &p1;
    char *point2 = &dir;
    printf("Digite o x do ponto: ");
    scanf("%d", &p1.x);
    printf("Digite o y do ponto: ");
    scanf("%d", &p1.y);
    getchar();
    p2.x = p1.x;
    p2.y = p1.y;
    printf("Digite o sentido leste, oeste, norte, sul: ");
    fgets (dir, 6, stdin);
    inc_dir(p, point2);
    ImprimePonto (p2);
    printf(" => %s ", dir);
    ImprimePonto (p1);
    return 0;
}


/*
=> Faça um procedimento chamado inc_dir, que faz o ponto 
andar uma unidade para leste, oeste, norte, sul (passar como 
referência e retorno void)

Exemplo de chamada:
inc_dir(p,'l'); // anda uma unidade para o leste (incrementa x)
inc_dir(p,'o'); // anda uma unidade para o oeste (decrementa x)

-------------------------------------------------------------------------------
Exemplo de Saída:

(1,3) norte => (1,4)
(2,4) leste => (3,4)
-------------------------------------------------------------------------------
*/