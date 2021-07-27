#include <stdio.h>
/*



sistema de teste ta com valor errado, esta mostrando a soma dos valores
multiplicados pelo peso e nao a media



*/





int main() {
    printf("<< Calculo da Media >>\n");
	float provaA, provaB, provaC, pesA, pesB, pesC, med;
    char aluno;
    printf("Digite o nome do aluno: ");
    scanf ("%c", &aluno);
    printf("Digite a nota da prova 1: ");
    scanf ("%f", &provaA);
    printf("Digite a nota da prova 2: ");
    scanf ("%f", &provaB);
    printf("Digite a nota da prova 3: ");
    scanf ("%f", &provaC);
    printf ("Digite o peso da prova 1: ");
    scanf ("%f", &pesA);
        printf ("Digite o peso da prova 2: ");
    scanf ("%f", &pesB);
        printf ("Digite o peso da prova 3: ");
    scanf ("%f", &pesC);

        med = (((provaA*pesA) + (provaB*pesB) + (provaC*pesC))/(pesA+pesB+pesC));
        printf("A nota media do aluno %c eh %.2f", aluno, med);

}

/*
=> Altere o algoritmo anterior para permitir que o usuário entre com os pesos da prova.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite o nome do aluno: M
Digite a nota da prova 1: 70
Digite a nota da prova 2: 50
Digite a nota da prova 3: 65
Digite o peso da prova 1: 1
Digite o peso da prova 2: 2
Digite o peso da prova 3: 3
A nota media do aluno M. eh 60.83
-------------------------------------------------------------------------------
*/