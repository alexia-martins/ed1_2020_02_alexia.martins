#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct telefone {
int ddd;
int numero;
};
int main(void)
{
struct telefone telefone1, telefone2, telefone3;
printf("Digite o DDD: \n");
scanf ("%d", &telefone1.ddd);
printf("Digite o telefone: \n");
scanf ("%d", &telefone1.numero);
printf("Digite o DDD: \n");
scanf ("%d", &telefone2.ddd);
printf("Digite o telefone: \n");
scanf ("%d", &telefone2.numero);
printf("Digite o DDD: \n");
scanf ("%d", &telefone3.ddd);
printf("Digite o telefone: \n");
scanf ("%d", &telefone3.numero);
printf ("Telefones cadastrados:");
printf ("DDD: (%d) Telefone: %d\n", telefone1.ddd, telefone1.numero);
printf ("DDD: (%d) Telefone: %d\n", telefone2.ddd, telefone2.numero);
printf ("DDD: (%d) Telefone: %d", telefone3.ddd, telefone3.numero);
}
/*
1) Crie uma estrutura chamada telefone, que armazena o DDD e o telefone (ilustração abaixo).  
Cadastre 3 telefones e mostre na tela os telefones cadastrados. 

Telefone**
+------------+------------+
| DDD        | Telefone   |  
+------------+------------+

-------------------------------------------------------------------------------
Exemplo de saída:
Digite o DDD: 34
Digite o telefone: 991501111
Digite o DDD: 31
Digite o telefone: 991502222
Digite o DDD: 64
Digite o telefone: 991503333

Telefones cadastrados: 
34 991501111
31 991502222
64 991503333
-------------------------------------------------------------------------------
*/