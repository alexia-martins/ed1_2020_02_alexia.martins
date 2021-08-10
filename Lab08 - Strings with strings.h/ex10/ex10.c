#include <string.h>
#include <stdio.h>

int main()
{
	char string [30];
	int len, j, cont=0;
    printf ("Digite uma palavra: \n");
	gets(string);
	len=strlen(string);
	j=len-1;
	for (int i = 0; i < len	; i++)
	{
		if(string[i]==string[j])
		{
			cont++;
			j--;
		}
	}
	if(cont==len)
	{
		printf("Eh palindrome\n");
	}
	else {printf("Nao eh palindrome\n");}

	return 0;
}

/*
Faça um programa que dado uma string, imprima se ela for palíndromo ou não.
Lembrando que: Um palíndromo é uma palavra que tem a propriedade de poder ser
lida tanto da direita para a esquerda como da esquerda para a direita.
Ex: ovo, arara, Ana, Bob
*/