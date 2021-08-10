#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data {
int dia, ano;
char mes [10];
};
int main(void)
{
int i;
struct data datas[3];
printf("Digite o dia: \n");
scanf ("%d", &datas[0].dia);
printf("Digite o mes: \n");
scanf ("%s", &datas[0].mes);
printf("Digite o ano: \n");
scanf ("%d", &datas[0].ano);

printf("Digite o dia: \n");
scanf ("%d", &datas[1].dia);
printf("Digite o mes: \n");
scanf ("%s", &datas[1].mes);
printf("Digite o ano: \n");
scanf ("%d", &datas[1].ano);

printf("Digite o dia: \n");
scanf ("%d", &datas[2].dia);
printf("Digite o mes: \n");
scanf ("%s", &datas[2].mes);
printf("Digite o ano: \n");
scanf ("%d", &datas[2].ano);
printf ("Datas cadastradas:\n");
for (i=0; i<3; i++){
    printf ("Dia %d de %s de %d\n", datas[i].dia, datas[i].mes, datas[i].ano);
}

if (datas[0].ano> datas[1].ano && datas[0].ano > datas[2].ano){
printf ("\n%d foi o maior ano cadastrado.", datas[0].ano);
}
else if(datas[1].ano> datas[0].ano && datas[1].ano > datas[2].ano){
printf ("\n%d foi o maior ano cadastrado.", datas[1].ano);
}
else if (datas[2].ano> datas[0].ano && datas[2].ano > datas[1].ano){
printf ("\n%d foi o maior ano cadastrado.", datas[2].ano);
}}



/*
1) Crie uma estrutura chamada data, que armazena o dia, mês e o ano (ilustração abaixo).  
Cadastre 3 datas, mostre as datas e o maior ano cadastrado. 

Data***
+------------+------------+---------------+
| Dia        | Mês        |   Ano         |    
+------------+------------+---------------+

-------------------------------------------------------------------------------
Exemplo de saída:
Digite o dia: 2
Digite o mes: Janeiro
Digite o ano: 2015

Digite o dia: 15
Digite o mes: Maio
Digite o ano: 2018

Digite o dia: 21
Digite o mes: Dezembro
Digite o ano: 2020


Datas cadastradas: 
Dia 2 de Janeiro de 2015
Dia 15 de Maio de 2018
Dia 21 de Dezembro de 2020

2020 foi o maior ano cadastrado.
-------------------------------------------------------------------------------
*/