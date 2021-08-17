#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
char nome[] = ("Jose Augusto");
char *p = &nome;
int i;

for (i=0; nome[i]!='\0'; i++){
printf ("%c", *p);
p++;
}
return 0;
}

/*
7) Utilizando aritmética de ponteiros, mostre na tela o conteúdo da string char nome[] = “José Augusto”. Utilize
o printf com %c e não %s
*/