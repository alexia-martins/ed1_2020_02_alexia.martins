#include <stdio.h>

int main (){
    char alunoA, alunoB, alunoC;
	float notaA, notaB, notaC;
    printf("<<Notas da turma>> \n\n");
    printf("Digite a inicial do aluno #1: \n");
    scanf (" %c", &alunoA);
    printf("Insira a nota do aluno #1: \n");
    scanf ("%f", &notaA);
    printf("Digite a inicial do aluno #2: \n");
    setbuf(stdin, NULL);
    scanf ("%c", &alunoB);
    printf("Insira a nota do aluno #2: \n");
    scanf ("%f", &notaB);
    printf("Digite a inicial do aluno #3: \n");
    scanf (" %c", &alunoC);
    printf("Insira a nota do aluno #3: \n");
    scanf ("%f", &notaC);
        if (notaA>=notaB||notaA>=notaC) {
            if (notaA>=notaB&&notaA>=notaC) {
if (notaB>=notaC){printf ("O aluno: %c tem a maior nota: %.2f\nO aluno: %c tem a menor nota: %.2f", alunoA, notaA, alunoC, notaC);}
else {printf ("O aluno: %c tem a maior nota: %.2f\nO aluno: %c tem a menor nota: %.2f", alunoA, notaA, alunoB, notaB);}}
    }    if (notaB>=notaA||notaB>=notaC) {
            if (notaB>=notaA&&notaB>=notaC) {
if (notaA>=notaC){printf ("O aluno: %c tem a maior nota: %.2f\nO aluno: %c tem a menor nota: %.2f", alunoB, notaB, alunoC, notaC);}
else {printf ("O aluno: %c tem a maior nota: %.2f\nO aluno: %c tem a menor nota: %.2f", alunoB, notaB, alunoA, notaA);}}
       }
       if (notaC>=notaA||notaC>=notaB) {
            if (notaC>=notaA&&notaC>=notaB) {
if (notaA>=notaB){printf ("O aluno: %c tem a maior nota: %.2f\nO aluno: %c tem a menor nota: %.2f", alunoC, notaC, alunoB, notaB);}
else {printf ("O aluno: %c tem a maior nota: %.2f\nO aluno: %c tem a menor nota: %.2f", alunoC, notaC, alunoA, notaA);}}
       }

}
/*
4) Faça um programa que tem como entrada as iniciais do nome de três alunos e suas
respectivas notas. Ao final, o programa deve mostrar o nome e a nota do aluno que
tirou a maior nota e o nome e a nota do aluno que tirou a menor nota (em caso de
notas iguais mostrar somente um nome)

Exemplo de saída:

<< Notas da Turma >>
Entre com o nome do aluno #1: M
Entre com a nota do aluno #1: 10.0
Entre com o nome do aluno #2: J
Entre com a nota do aluno #2: 6.5
Entre com o nome do aluno #3: R
Entre com a nota do aluno #3: 7.0
M. tem a maior nota (10.0) e J. a menor (6.5)
*/