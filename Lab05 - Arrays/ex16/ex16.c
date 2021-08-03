#include <stdio.h>

int main(){
    printf("<< Valores iguais >>\n");
int j, i, k, numeros [8], nrepetido[8], cont [8], contador, comparador =0;
for (i=0; i<8; i++) {
    printf ("Entre com o numero %d: ", i+1);
    scanf ("%d", &numeros[i]);}

for (i=0; i<8; i++) {
    for (j=0; j<8; j++){ contador =0;
        if (numeros[i]==numeros [j] && i!=j){
        for (k=0; k<8; k++){
            if (nrepetido[k]==numeros [j]){ contador=1;} }
            if (contador ==0){
                nrepetido[comparador]=numeros [i];
                comparador++; }}}}

printf ("Valores repetidos: ");
for (i=0; i<comparador; i++){
printf (" %d aparece %d vezes", nrepetido [i], cont [i]);}
}


/*

Faça um programa que leia um vetor de 8 posições e verifique se existem 
valores iguais e os escreva a quantidade de vezes que eles aparecem na lista

Exemplo de saída:
<< Valores iguais >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 5
Entre com o numero 5: -3 
Entre com o numero 6: -3
Entre com o numero 7: -3
Entre com o numero 8: 6


Valores repetidos: 
5 aparece 2 vezes
6 aparece 2 vezes
-3 aparece 3 vezes

*/