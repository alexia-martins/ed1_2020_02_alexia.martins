#include <stdio.h>

int main(){
    printf("<< Universidade X >>\n");
    int alunos [10000], i, j=1, nAlunos;
    printf ("Quantos alunos serao cadastrados? ");
    scanf ("%d", &nAlunos);

    for (i=0; i<=nAlunos; i++) {
    printf ("Entre com o numero %d: ", j);
    scanf ("%d", &numeros[i]);
    j++;
}
for (i=0; i<5; i++){
if (numeros [i]<0) {numeros [i]=0;}
}
printf ("Negativo zerados: ");
for (i=0; i<5; i++){
printf ("%d ", numeros [i]);
}
 return 0;
}
    return 0;
}

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