/*
Porque o do-while executa o programa ao menos uma vez antes de verificar a condição no while, por isso utilizei if. 
*/
#include <stdio.h>
int main(){
int prog;
printf("<<Contagem Progressiva>>\n");
printf("Insira o valor de inicio da contagem: ");
scanf("%d", &prog);
do {
if (prog>0) {       }
else {printf ("%d.. ", prog);
prog++;}}
while (prog<=0);
printf ("FIM!\n");
}

/*
Refaça o exercício anterior utilizando o comando do .. while; Discuta por que o do-while não é a
melhor estrutura para resolver este exercício.
*/