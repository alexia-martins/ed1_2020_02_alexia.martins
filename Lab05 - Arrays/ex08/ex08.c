#include <stdio.h>
#include <math.h>
int main(){
printf("<< Media e desvio-padrao amostral>>\n");
int numeros [5], distancia[5], i, j=1;
float somador, dp, media;
for (i=0; i<5; i++) {
    printf ("Digite o valor %d: ", j);
    scanf ("%d", &numeros [i]);
    somador = somador + numeros [i];
    j++;
}
media = somador/5;
somador = 0;
for (i=0; i<5; i++){
distancia [i] = pow ((numeros [i]-media),2); 
somador = somador + distancia [i];
}
dp = (sqrt(somador/4));
printf ("A media eh %.2f e o desvio-padrao eh %.2f", media, dp);
return 0;
}


/*
Calcular a média e o desvio padrão amostral de 5 números informados pelo usuário.
obs: desvio-padrão (amostral, normalizado por N-1)

Exemplo de saída:
<< Media e desvio-padrao >>
Digite o valor 1: 50
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60
A media eh 64 e o desvio-padrao eh 11.40
*/
