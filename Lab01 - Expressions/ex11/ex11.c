#include <stdio.h>
#include <math.h>
int main() {
float num1, num2, imag1, imag2, mod1, mod2, mreal, mimag;
printf ("<<Numero complexo>>\n");
    printf("Informe a parte real de z:");
    scanf ("%f", &num1);
    printf("Informe a parte imaginaria de z:");
    scanf ("%f", &imag1);
    printf("Informe a parte real de w:");
    scanf ("%f", &num2);
    printf("Informe a parte imaginaria de w:");
    scanf ("%f", &imag2);
mod1 = sqrt((num1*num1)+(imag1*imag1));
mod2 = sqrt((num2*num2)+(imag2*imag2));
mreal = ((num1*num2)-(imag1*imag2));
mimag = ((num1*imag2)+(num2*imag1));

printf ("z + w = %.1f + %.1fi\nz - w = %.1f + %.1fi\n", num1+num2, imag1+imag2,num1-num2, imag1-imag2);
printf ("z * w = %.1f + %.1fi\n|z| = %.4f\n|w| = %.4f", mreal, mimag, mod1, mod2);
}


/*
EX 11: 
Faça um programa que faça operações simples de números complexos:
Crie e leia dois números complexos z e w, compostos por parte real e parte imaginária.
Apresente a soma, subtração e produto entre z e w, nessa ordem, bem como o módulo de ambos.
Obs: faça #include <math.h> e use a função sqrt() para calcular a raiz de um número.

Ex de saida:
<<Numero complexo>>
Informe a parte real de z: 2
Informe a parte imaginária de z:3
Informe a parte real de w: 5
Informe a parte imaginária de w:2
z + w =  7.0 + 5.0i
z - w = -3.0 + 1.0i
z * w = 4.0+19i
|z| = 3.6056
|w| = 5.3852
*/