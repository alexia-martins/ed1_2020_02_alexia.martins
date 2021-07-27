#include <stdio.h>

int main(){
    printf("<< Probabilidades >>\n");
char verde [6] = "Verde";
char azul [5] = "Azul";
char amarela [8] = "Amarela";
char vermelha [9] = "Vermelha";
int bolinhas [4], i, pos, maior;
float somador =0, prob [4];
printf ("Digite a quantidade de bolinhas");
printf ("\nVerde: ");
scanf ("%d", &bolinhas [0]);
printf ("\nAzul: ");
scanf ("%d", &bolinhas [1]);
printf ("\nAmarela: ");
scanf ("%d", &bolinhas [2]);
printf ("\nVermelha: ");
scanf ("%d", &bolinhas [3]);
maior = bolinhas [0];
for (i=0; i<5; i++){
if (maior < bolinhas [i]){
maior = bolinhas [i]; pos=i;}
somador = somador + bolinhas [i];
}

for (i=0; i<5; i++){
prob [i] = (bolinhas [i]*100)/somador;
}
printf ("Probabilidades");
for (i=0; i<5; i++){
if (pos==0 && i== pos) {printf ("\n%s: %.1f%% << Maior probabilidade", verde, prob [i]);}
else if (pos==1 && i== pos) {printf ("\n%s: %.1f%% << Maior probabilidade", azul, prob [i]);}
else if (pos==2 && i== pos) {printf ("\n%s: %.1f%% << Maior probabilidade", amarela, prob [i]);}
else if (pos==3 && i== pos) {printf ("\n%s: %.1f%% << Maior probabilidade", vermelha, prob [i]);}
else if (pos==0 ) {printf ("\n%s: %.1f%%", verde, prob [i]);}
else if (pos==1) {printf ("\n%s: %.1f%%", azul, prob [i]);}
else if (pos==2) {printf ("\n%s: %.1f%%", amarela, prob [i]);}
else if (pos==3) {printf ("\n%s: %.1f%%", vermelha, prob [i]);}
}

    return 0;
}

/*
Uma piscina de bolinhas possui bolas azuis, verdes, amarelas e vermelhas. 
Faça um programa em que o usuário digita a quantidade de bolinhas de cada
cor existente em uma piscina e mostra a probabilidade de ocorrência de cada 
cor, indicando qual possui a maior probabilidade

Exemplo de saída:
<< Probabilidades >>

Digite a quantidade de bolinhas
Verde: 51
Azul: 60
Amarela: 70
Vermelha: 80

Probabilidades
Verde: 19.5%
Azul: 22.9%
Amarela: 26.8%
Vermelha: 30.6% << Maior probabilidade
*/