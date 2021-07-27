#include <stdio.h>
#include <math.h>
int main (){
	float peso, altura, imc;
    printf("<<Calculo IMC>> \n\n");
    printf("Digite o peso: \n");
    scanf ("%f", &peso);
    printf("Digite o a altura em metros (exemplo: 1.72): \n");
    scanf ("%f", &altura);
    altura= pow (altura,2);
    imc = (peso/altura);
   if (imc<18.5) { printf ("Voce esta com magreza.\n");}
   else if (imc>=18.5&&imc<=24.9) { printf ("Voce esta com saudavel.\n");}
   else if (imc>=25.0&&imc<=29.9) { printf ("Voce esta com sobrepeso.\n");}
   else if (imc>=30.0&&imc<=34.9) { printf ("Voce esta com obesidade grau 1.\n");}
   else if (imc>=35.0&&imc<=39.9) { printf ("Voce esta com obesidade grau 2.\n");}
    else { printf ("Voce esta com obesidade grau 3. \n");}
}

/*
5) Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação de
acordo com a tabela dada no pdf.
*/