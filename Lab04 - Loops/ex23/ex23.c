#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int i, j, termo=0;
 double fatorial;
 double soma = 1.0;
printf ("<< Numero neperiano >>\n");
printf ("Entre com o numero de termos: ");
scanf ("%d", &termo);
    for(i=1; i<=termo ;i++){
        fatorial = 1;
       for (j= 1; j<=i; j++){
           fatorial *=j;
       }
       soma = soma + (1/fatorial);
}
printf ("e ~ %.14lf", soma);
return 0;
}
/*
Calcule o número neperiano usando uma série (ver foto). Peça para o usuário entrar com o
número de termos que serão somados (note que, quanto maior o número, a resposta estará mais
próxima do valor e)

Exemplo de saída:
<< Número neperiano >>
Entre com o número de termos: 100
e ~ 2.71828182845905*

*/