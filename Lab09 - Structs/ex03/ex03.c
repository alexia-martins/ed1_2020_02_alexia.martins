#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco {
char rua [50];
int numero;
char comp [50];
char cidade [30];
char estado [3];
char cep [15];
};
int main(void)
{
int i, compara;
struct endereco ends[3];
char compEst [3] = "MG";

for (i=0; i<3; i++){
printf("Rua: \n");
fgets (ends[i].rua, 50, stdin);
ends[i].rua[strcspn(ends[i].rua, "\n")] = '\0';
printf("Numero: \n");
scanf ("%d", &ends[i].numero);
setbuf(stdin, NULL);
printf("Complemento: \n");
fgets (ends[i].comp, 50, stdin);
ends[i].comp[strcspn(ends[i].comp, "\n")] = '\0';
printf("Cidade: \n");
fgets (ends[i].cidade, 30, stdin);
ends[i].cidade[strcspn(ends[i].cidade, "\n")] = '\0';
printf("Estado \n");
gets (ends[i].estado);
ends[i].estado[strcspn(ends[i].estado, "\n")] = '\0';
printf("CEP \n");
fgets (ends[i].cep, 15, stdin);
ends[i].cep[strcspn(ends[i].cep, "\n")] = '\0';
}
printf ("Enderecos cadastrados que sao de ""MG"": \n");
for (i=0; i<=3; i++){
compara = stricmp (ends [i].estado, compEst);
if (compara == 0)
{
printf("%s, %d, %s, %s, %s, %s.\n", ends [i].rua, ends [i].numero, ends [i].comp, ends [i].cidade, ends [i].estado, ends [i].cep);
}
}}



/*
1) Crie uma estrutura chamada endereco, que armazena Rua, Número, Complemento,
Cidade, Estado e CEP (ilustração abaixo).  
Cadastre 3 endereços. Mostre ao final, todos os dados dos endereços cadastrados que são do estado “MG”

Endereco*
+------------+------------+---------------+
| Rua        | Número     |  Complemento  |    
+------------+------------+---------------+
| Cidade     | Estado     |     CEP       | 
+------------+------------+---------------+


-------------------------------------------------------------------------------
Exemplo de saída:
Rua: Joao
Numero: 32
Complemento: casa A
Cidade: Uberlandia
Estado: MG
CEP: 38400034


Rua: Almeida
Numero: 43
Complemento: Sem
Cidade: Araguari
Estado: MG
CEP: 38400045


Rua: Coronel Pedro
Numero: 25
Complemento: apto 40
Cidade: Caldas Novas
Estado: GO
CEP: 75780023


Enderecos cadastrados que sao de "MG":
Joao, 32. casa A. Uberlandia-MG, 38400034.
Almeida, 43. Sem. Araguari-MG, 38400045.
-------------------------------------------------------------------------------
*/