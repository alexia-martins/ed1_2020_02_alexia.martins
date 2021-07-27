#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    char var='y', letra;
	int i;

    printf("<<Forca de uma letra>> \n");
for (i=5; i>0; i--
){
printf("\nQual e a letra? ");
setbuf(stdin,NULL);
scanf("%c", &letra);
if (letra==var) {
    printf ("Parabens voce acertou!!! ");
    break;
}
else if(i==2){printf("Ultima chance!!! ");}
else if(i==1) {printf ("Acabaram suas chances. A letra correta era '%c'. \n",var);}
else{
    printf("Errado! Voce ainda tem %d chances. ", i-1);
}
}
}
/*
) Faça um programa que seja semelhante ao jogo de forca, mas com uma única letra. A letra que o
usuário deve adivinhar deve ser definida no código do programa. O usuário tem 5 chances de acertar
a letra. O programa finaliza sua execução quando o usuário acerta a letra ou quando acabam suas
chances

Exemplo de saída:
<<Forca de uma letra só>>
Qual a letra? o
Errado! Você tem mais 4 chances
Qual a letra? d
Errado! Você tem mais 3 chances
Qual a letra? w
Errado! Você tem mais 2 chances
Qual a letra? q
ACERTOU!
Exemplo de saída 2:
<<Forca de uma letra só>>
Qual a letra? d
Errado! Você tem mais 4 chances
Qual a letra? g
Errado! Você tem mais 3 chances
Qual a letra? k
Errado! Você tem mais 2 chances
Qual a letra? r
Última chance!!!
Qual a letra? o
Acabaram suas chances. A letra correta é 'q'
*/