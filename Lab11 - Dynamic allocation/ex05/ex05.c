#include <stdio.h>
//lembre-se de incluir as bibliotecas adequadas
typedef struct
{
    int x, y;
}ponto;

int main(){
    int i, tam, esquerda=0, direita=0, cima=0, baixo=0;

    printf("<< Vetor de pontos alocados dinamicamente >>\n");
    printf("Quantos pontos deseja digitar: ");
    scanf ("%d", &tam);
ponto *pontos = (ponto *)malloc(tam*sizeof(ponto));
ponto *pe = (ponto *)malloc(1*sizeof(ponto));
ponto *pd = (ponto *)malloc(1*sizeof(ponto));
ponto *pc = (ponto *)malloc(1*sizeof(ponto));
ponto *pb = (ponto *)malloc(1*sizeof(ponto));

for (i=0;i<tam;i++){
    printf ("Entre com a coordenada x do ponto %d:", i+1);
    scanf ("%d", &pontos[i].x);
    printf ("Entre com a coordenada y do ponto %d:", i+1);
    scanf ("%d", &pontos[i].y);

}

for (i=0;i<tam;i++){
    if (pontos[esquerda].x>pontos[i].x) esquerda =i;
    if (pontos[direita].x<pontos[i].x) direita =i;
    if (pontos[cima].y<pontos[i].y) cima =i;
    if (pontos[baixo].y>pontos[i].y) baixo =i;
}
pe->x = pontos[esquerda].x;
pe->y = pontos[esquerda].y;
pd->x = pontos[direita].x;
pd->y = pontos[direita].y;
pc->x = pontos[cima].x;
pc->y = pontos[cima].y;
pb->x = pontos[baixo].x;
pb->y = pontos[baixo].y;

printf ("Pontos digitados: ");
for (i=0;i<tam;i++){   
    if (i==0)
    printf ("(%d, %d)", pontos[i].x, pontos[i].y);
    else  printf ("; (%d, %d)", pontos[i].x, pontos[i].y);

}

printf ("\n");

printf ("Ponto mais a esquerda: (%d,%d)\n", pe->x, pe->y);
printf ("Ponto mais a direita: (%d,%d)\n", pd->x, pd->y);
printf ("Ponto mais a cima: (%d,%d)\n", pc->x, pc->y);
printf ("Ponto mais a baixo: (%d,%d)\n", pb->x, pb->y);


free (pontos);

return 0;
}

/*
5) Modifique o programa anterior incluindo quatro ponteiros, que apontarão para
os seguintes pontos: mais a esquerda, mais a direita, mais acima, mais abaixo.
Mostre quem são esses pontos utilizando esses ponteiros.

Exemplo de saída:
<< Vetor de pontos alocados dinamicamente >>
Digite a quantidade de pontos a serem armazenados: 5

Digite o valor da coordenada x do ponto 1: 2
Digite o valor da coordenada y do ponto 1: 5

Digite o valor da coordenada x do ponto 2: 4
Digite o valor da coordenada y do ponto 2: 8

Digite o valor da coordenada x do ponto 3: 3
Digite o valor da coordenada y do ponto 3: 4

Digite o valor da coordenada x do ponto 4: 6
Digite o valor da coordenada y do ponto 4: 7

Digite o valor da coordenada x do ponto 5: 23
Digite o valor da coordenada y do ponto 5: 25


Os pontos digitados sao: (2,5); (4,8); (3,4); (6,7); (23,25)

Ponto mais a esquerda: (2,5)
Ponto mais a direita: (23,25)
Ponto mais acima: (23,25)
Ponto mais abaixo: (3,4)

*/