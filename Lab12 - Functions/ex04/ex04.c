#include <stdio.h>

int calculo (int x, int n){
int i, res=x;
for (i=1; i<n; i++){
res *=x;
}
return res;
}

int main(){
    int  num1, num2;
    printf("Digite o valor de x: ");
    scanf ("%d", &num1);
    printf("Digite o valor de n: ");
    scanf ("%d", &num2);
    printf ("O valor de %d elevado a %d eh %d:", num1, num2, calculo (num1, num2));

    return 0;
}

/*
=> Faça uma função para calcular xn. Não utilizar o operador pow (nem ^ - que não existe em C).
No programa principal permita ao usuário informar o valor de x e de n (inteiro). 
Lembre que n pode assumir valor negativo.

Ex: Elevado(2,4) tem como saída 16; 
    

No programa principal, solicite ao usuário o valor de x e o valor de n.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x: 2
Digite o valor de n: 4
O valor de 2 elevado a 4 eh 16
-------------------------------------------------------------------------------
*/