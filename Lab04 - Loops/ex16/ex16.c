#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    int num=2;
	double res, posM=4;
do{
res=posM;
printf("Com %d bits e possivel enderecar %.f posicoes de memoria\n", num, res);
num=num*2;
posM=posM*posM;
}
while (num<=128);

}


/*
Faça um algoritmo que mostre qual a quantidade máxima de endereços de memória que um
computador com 1, 2, 4, 8, 16, 32, 64 e 128 bits pode representar. O programa deve conter um loop
e uma variável. Use a função pow()

pow()
Syntax:
#include <math.h>
double pow( double base, double exp ); 
Description:
The pow() function returns base raised to the exp power. There's a domain error if base is zero and
exp is less than or equal to zero. There's also a domain error if base is negative and exp is not an
integer. There's a range error if there's an overflow.
Observe que esta função retorna um tipo double (use %f no printf).

Exemplo de saída:
Com 2 bits é possível endereçar 4 posições de memória
Com 4 bits é possível endereçar 16 posições de memória
Com 8 bits é possível endereçar 256 posições de memória
Com 16 bits é possível endereçar 65536 posições de memória
Com 32 bits é possível endereçar 4294967296 posições de memória
Com 64 bits é possível endereçar 1.84467440737096E19 posições de memória
Com 128 bits é possível endereçar 3.40282366920938E38 posições de memória

*/