#include <stdio.h>

int main(){
    printf("<< Pares e Ímpares >>\n");
int numeros [5], nImpar [5], nPar [5], i, j=1,k;
for (i=0; i<5; i++) {
    printf ("Digite o valor %d: ", j);
    scanf ("%d", &numeros[i]);
    j++;
}
j=0;
k=0;
for (i=0; i<5; i++) {
if (numeros[i]%2==0){ nPar [j] = numeros [i]; j++;}
else {nImpar [k] = numeros [i]; k++;}
}
printf ("Impares:");
for (i=0; i<k; i++){ printf ("%d, ", nImpar[i]);
}
printf ("\nPares:");
for (i=0; i<j; i++){ printf ("%d, ", nPar[i]);
}
return 0;
}

/*
Leia 5 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2. Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que cada um dos vetores v1 e v2 tem no máximo 5 elementos, mas nem todos os elementos são utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.  
Exemplo de saída:
<< Pares e Ímpares >>
Digite o valor 1: 51
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60

Ímpares: 51
Pares: 60, 70, 80, 60
*/