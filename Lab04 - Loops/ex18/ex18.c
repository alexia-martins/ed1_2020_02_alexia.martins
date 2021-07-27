#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    char opcao;
	double dadoU, res;
    int i = 0;
    printf("<<Conversor>>");
do{
printf ("\n1- Converter de km/h para m/s.\n2- Converter m/s para km/h.\nq- sair do programa.\nDigite uma opcao: ");
setbuf(stdin,NULL);
scanf ("%c", &opcao);
if(opcao=='1') { printf("Insira o valor a ser convertido: "); scanf ("%lf", &dadoU);
res=dadoU/3.6;
    if (fmod (dadoU,3.6)==i){printf ("\n%lf km/h equivale a %lf m/s.\n", dadoU, res);}
    else {printf ("\n%.f km/h equivale a %lf m/s.\n", dadoU, res);}}
else if (opcao=='2') { printf("Insira o valor a ser convertido: "); scanf ("%lf", &dadoU);
res=dadoU*3.6;
    if (fmod (dadoU,3.6)==i){printf ("\n%lf m/s equivale a %.lf km/h.\n", dadoU, res);}
    else {printf ("\n%.f m/s equivale a %.lf km/h.\n", dadoU, res);}}
else if (opcao!='q'&& opcao!='1'&& opcao!='2'){printf ("\nOpcao invalida, tente novamente. \n");}

}
while (opcao!='q');
}

/*

Faça um algoritmo que converta uma velocidade expressa em km/h para m/s e vice versa. Você deve
criar um menu com as duas opções de conversão e com uma opção para finalizar o programa. O
usuário poderá fazer quantas conversões desejar, sendo que o programa só será finalizado quando a
opção de finalizar for escolhida (no caso, caso ele escolha a opção ‘q’)
Exemplo de saída:
<< Conversor >>
Digite uma opção
 1 - para converter de km/h para m/s
 2 - para converter de m/s para hm/h
 q - para sair
1
Digite a velocidade (km/h): 100
A velocidade em m/s é 27.7777777777778
<< Conversor >>
Digite uma opção
 1 - para converter de km/h para m/s
 2 - para converter de m/s para hm/h
 q - para sair
2
Digite a velocidade (m/s): 30
A velocidade em km/h é 108
<< Conversor >>
Digite uma opção
 1 - para converter de km/h para m/s
 2 - para converter de m/s para hm/h
 q - para sair
q
*/