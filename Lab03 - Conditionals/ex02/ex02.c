#include <stdio.h>

int main (){

	float temp, conversor;
    char unMed;
    printf("<<Conversor de temperatura>> \n\n");
    printf("Digite a temperatura: \n");
    scanf ("%f", &temp);
    printf("Insira a unidade de medida\n");
    scanf (" %c", &unMed);
        if (unMed=='c'){
        conversor=(temp*1.8)+32;
        printf ("A temperatura de %.1f celsius equivale a %.1f fahrenheit.\n", temp, conversor);
        }
        else if (unMed=='f') {
        conversor=((temp-32)*5)/9;
        printf ("A temperatura de %.1f fahrenheit equivale a %.1f celsius.\n", temp, conversor);
        }
        else {printf ("UNIDADE DE MEDIDA INVALIDA TENTE NOVAMENTE!!\n");
}
}


/*
Faça um algoritmo que realiza a conversão entre de graus Celsius para Fahrenheit e
vice-versa. O usuário deve digitar o valor da temperatura e a unidade de medida
usada. O programa se encarrega de converter de uma unidade para a outra. Se a
unidade digitada não for válida, mostrar uma mensagem de erro.

Exemplo de saída:
<< Conversor de Temperatura >>
Digite a temperatura: 30
Digite a unidade: c
30 graus Celsius equivale a 86 graus Fahrenheit

Exemplo de saída:
<< Conversor de Temperatura >>
Digite a temperatura: 86
Digite a unidade: f
86 graus Fahrenheit equivale a 30 graus Celsius 
*/