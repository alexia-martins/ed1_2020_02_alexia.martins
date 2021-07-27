#include <stdio.h>

int main() {
    printf("<< Calculo da Media >>\n");
	float provaA, provaB, med;
    char aluno;
    printf("Digite o nome do aluno: ");
    scanf ("%c", &aluno);
    printf("Digite a nota da prova 1: ");
    scanf ("%f", &provaA);
    printf("Digite a nota da prova 2: ");
    scanf ("%f", &provaB);
        med = ((provaA + provaB)/2);
        printf("A nota media do aluno %c eh %.1f", aluno, med);

}
/*
=> Altere o algoritmo anterior para que, antes de o usuário entrar com as 
notas do aluno ele entre com a inicial do nome do aluno. Ao final, 
mostrar a inicial do nome do aluno juntamente com a sua média.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite o nome do aluno: C
Digite a nota da prova 1: 70
Digite a nota da prova 2: 85
A nota media do aluno C. eh 77.5
-------------------------------------------------------------------------------
*/