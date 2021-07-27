#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
  float varA, varB, varC, del, rdel, raiz1, raiz2;
printf("Insira o valor de a: \n");
scanf("%f", &varA);
printf("Insira o valor de b: \n");
scanf("%f", &varB);
printf("Insira o valor de c: \n");
scanf("%f", &varC);
del= (pow (varB, 2))- 4*(varA*varC);
rdel= sqrt(del);
  if (varA==0) {printf("O valor de 'a' nao pode ser igual a 0, tente novamente! \n");}
  else {
        if (del>=0){
raiz1=((-varB + rdel)/(2*varA));
raiz2=((-varB - rdel)/(2*varA));
printf ("Raiz real 1: %.2f\nRaiz real 2: %.2f", raiz1, raiz2);
        }
    else {
del= -del;
rdel = sqrt (del);
raiz1=(-varB/(2*varA));
raiz2=(-varB/(2*varA));
printf ("Raiz complexa 1: %.2f + i*%.2f \nRaiz complexa 2: %.2f - i*%.2f \n", raiz1, (rdel)/(2*varA), raiz2, (rdel)/(2*varA));
    }
}
}


/*
Determinar as raízes, reais ou complexas, de uma equação de segundo grau
*/