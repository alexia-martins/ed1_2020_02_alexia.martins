#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
char nome[60], end [60], cep [15], cid [30], est[3], cpf [20], rg [15];
printf ("Digite seu nome completo: \n");
gets(nome);
printf ("Digite seu CPF: \n");
gets(cpf);
printf ("Digite seu RG: \n");
gets(rg);
printf ("Digite a rua e numero do seu endereco: \n");
gets(end);
printf ("Digite a cidade: \n");
gets(cid);
printf ("Digite a sigla do estado: \n");
gets(est);
printf ("Digite o CEP: \n");
gets(cep);

printf ("\t\t\tD E C L A R A C A O\nEu, %s, inscrita sob o RG: %s e CPF: %s\n, residente na: %s, %s - %s, CEP: %s,\n venho atraves desta declarar que irei estudar para a prova.\n", nome, rg, cpf, end, cid, est, cep);
}


/*
Faça um programa em que a pessoa entra com o seu nome, CPF, RG, endereço, CEP,
Cidade, Estado e o programa crie, automaticamente, uma carta de declaração (veja o
modelo abaixo)

Exemplo de saída:

Digite seu nome: Maria de Lurdes
Digite seu CPF: 356.874.875-98
Digite seu RG: 24.565.789-5
Digite seu endereço: Rua Major José, 45
Digite a cidade: Uberlândia
Digite o estado: MG
Digite o CEP: 38400-890

                 D E C L A R A Ç Ã O
Eu, Maria de Lurdes, RG 24.565.789-5, CPF 356.874.875-98,
residente a Rua Major José, 45, Uberlândia-MG,
CEP 38400-890 venho por meio desta declarar que vou estudar para a prova
*/