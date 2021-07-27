#include <stdio.h>

int main() {
    printf("<< Calculo da Media >>\n");
	float provaA, provaB, provaC, med;
    char aluno;
    printf("Digite o nome do aluno: ");
    scanf ("%c", &aluno);
    printf("Digite a nota da prova 1: ");
    scanf ("%f", &provaA);
    printf("Digite a nota da prova 2: ");
    scanf ("%f", &provaB);
    printf("Digite a nota da prova 3: ");
    scanf ("%f", &provaC);
        med = (((provaA*1) + (provaB*1) + (provaC*2))/4);
        printf("A nota media do aluno %c eh %.1f", aluno, med);

}

/*
=> Faça um algoritmo que calcule a média ponderada das notas de 3 provas. 
A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário 
entrar com as notas do aluno ele deve informar a letra inicial do nome do aluno. 
Ao final, mostrar o a letra inicial do nome do aluno juntamente com a sua média.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite o nome do aluno: T
Digite a nota da prova 1: 40
Digite a nota da prova 2: 40
Digite a nota da prova 3: 80
A nota media do aluno C. eh 60
-------------------------------------------------------------------------------
*/