#include <stdio.h>

int main(){
    printf("<< Universidade X >>\n");
    char classe [10000];
    int mat [10000], i, nAlunos;
    float CRA [10000];
    printf ("Quantos alunos serao cadastrados? ");
    scanf ("%d", &nAlunos);

    for (i=0; i<nAlunos; i++) {
    printf ("Entre com o numero do aluno: ");
    scanf ("%d", &mat[i]);
    printf ("Entre com a classe social do aluno: ");
    scanf (" %c", &classe[i]);
    printf ("Entre com o CRA do aluno: ");
    scanf ("%f", &CRA[i]);}

printf ("\n==== Alunos Cadastrados ====\n");
for (i=0; i<nAlunos; i++){
printf ("Numero: %d Classe Social: %c CRA: %.2f\n", mat [i], classe [i], CRA [i]);
}}

/*
Faça um programa que armazene informações sobre os alunos de uma universidade. 
O número máximo de alunos que o sistema pode cadastrar é 10000. Os dados a 
serem armazenados são: número de matrícula (inteiro); 
classe social (A, B, C, D ou E); CRA (real). Ao iniciar o programa, informe 
quantos usuários serão cadastrados. Depois de realizado o cadastro, mostre 
todos os dados lidos. A saída do programa deve ser como o exemplo abaixo.
* Proibido o uso de structs

Exemplo de saída:
<< Universidade X >>
Quantos alunos serão cadastrados: 2

Entre com o número do aluno: 5
Entre com a classe social do aluno 5: B
Entre com o CRA do aluno 5: 70

Entre com o número do aluno: 7
Entre com a classe social do aluno 7: B
Entre com o CRA do aluno 7: 60

==== Alunos Cadastrados ====
Número: 5 Classe Social: B CRA: 70.00
Número: 7 Classe Social: B CRA: 60.00
*/