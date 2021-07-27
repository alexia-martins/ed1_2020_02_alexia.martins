#include <stdio.h>
#include <stdlib.h>

int main (){

	float provaA, provaB, provaC, med;
    char aluno;
    printf("<<Calculo media>> \n\n");
    printf("Digite a inicial do aluno: \n");
    scanf (" %c", &aluno);
    printf("Insira a nota da primeira prova:\n");
    scanf ("%f", &provaA);
    printf("Insira a nota da segunda prova:\n");
    scanf ("%f", &provaB);
    printf("Insira a nota da terceira prova:\n");
    scanf ("%f", &provaC);
    med = (((provaA*1) + (provaB*1) + (provaC*2))/4);
        if (med>=60) {
        printf("\nA media do aluno %c e: %.2f => APROVADO!\n", aluno, med); }
        else {
            printf("\nA media do aluno %c e: %.2f => REPROVADO!\n", aluno, med);
        }
}

/*
Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e
a segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário entrar com as
notas do aluno ele entre com a inicial do nome do aluno (mais adiante aprenderemos
como entrar com o nome completo do aluno – por enquanto nesta lista vamos
identificar o aluno somente com uma letra). Ao final, mostrar o nome do aluno
juntamente com a sua média e indicar se o aluno foi aprovado ou reprovado.
Exemplo de saída:

<< Cálculo da Média >>
Digite a inicial do nome do aluno: T
Digite a nota da prova 1: 40
Digite a nota da prova 2: 40
Digite a nota da prova 3: 80
A nota média do aluno T. é 60 => APROVADO!
*/