#include <stdio.h>
struct aluno {
int matricula, faltas;
char nome [100];
float notas [3], media;
};

int main(){
struct aluno alunos [3];
    printf("\t\t<<MENU>>\n");
int repetir=1, menu, i, j=1, pos, posMedia, posMenor, aux;
int presenca [3];
float maior, menor;
while (repetir==1) {printf (" \n\tDigite uma opcao:\n\t 1 - Cadastrar 3 alunos.\n\t 2 - Aluno com maior nota na primeira prova.\n\t 3 - Maior media geral.\n\t 4 - Menor media geral.\n\t 5 - Situacao final.\n");
scanf("%d", &menu);
switch (menu) {
    case 1:
system ("cls");
for (i=0; i<3; i++) {
    getchar();
    printf ("Nome do aluno:\n");
    fgets (alunos[i].nome, 100, stdin);
    printf ("Matricula:\n");
    scanf ("%d", &alunos[i].matricula);
    printf ("Numero de faltas:");
    scanf ("%d", &alunos[i].faltas);
   for (aux=0; aux<3; aux++){
   printf ("Entre com %d nota do aluno %d: ", j, i+1);
   scanf ("%f", &alunos[i].notas[aux]);
    j++;
   }
alunos[0].media= ((alunos[0].notas[0]+alunos[0].notas[1]+alunos[0].notas[2])/3);
alunos[1].media= ((alunos[1].notas[0]+alunos[1].notas[1]+alunos[1].notas[2])/3);
alunos[2].media= ((alunos[2].notas[0]+alunos[2].notas[1]+alunos[2].notas[2])/3);


}
break;
    case 2:
maior = alunos[0].notas[0];
for (i=0; i<3; i++){
if (maior < alunos[i].notas [0]){pos = i;}
}
printf ("Aluno %s possui a maior nota na primeira prova: %.2f", alunos[pos].nome, alunos [pos].notas[0]);
break;
    case 3:
maior = alunos[0].media;
for (i=0; i<3; i++){
if (maior < alunos[i].media){posMedia = i;}
}
printf ("Aluno %s possui a maior media geral: %.2f", alunos[posMedia].nome, alunos [posMedia].media);
break;
    case 4:
menor = alunos[0].media;
for (i=0; i<3; i++){
if (menor > alunos[i].media){posMenor = i;}
}
printf ("Aluno %s possui a menor media geral: %.2f", alunos[posMenor].nome, alunos [posMenor].media);
break;
    case 5:
    for (i=0;i<3;i++){
        presenca[i] = (72- (alunos [i].faltas));
    }
for (i=0; i<3; i++){
if (alunos[i].media>=60&& presenca [i] >=54){
    printf ("Aluno %s foi aprovado com a media: %.2f\n", alunos [i].nome, alunos[i].media);}

else if (alunos[i].media >=60&& presenca [i]<54){
    printf ("Aluno %s foi reprovado por falta com a media: %.2f e com %d faltas.\n", alunos [i].nome, alunos[i].media, alunos[i].faltas);}

else if (alunos[i].media<60 && presenca [i]>=54){
    printf ("Aluno %s foi reprovado por nota com a media: %.2f\n", alunos[i].nome, alunos[i].media);}

else {
    printf ("Aluno %s foi reprovado por nota e por falta com a media: %.2f e com %d faltas\n", alunos [i].nome, alunos[i].media, alunos[i].faltas);}
}
break;
}
}
printf ("\n Deseja fazer mais alguma operacao? \n\n Digite 1: SIM \n Digite 2: NAO \n");
scanf ("%d", &repetir);
system ("cls");
}


/*
5.Crie uma estrutura representando os alunos de um curso de graduação. 
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, 
nota da segunda prova, nota da terceira prova, média e número de faltas.

    (a) Permita ao usuário entrar com os dados de 3 alunos. 
    (b) Encontre o aluno com maior nota da primeira prova.
    (c) Encontre o aluno com maior média geral.
    (d) Encontre o aluno com menor média geral.
    (e) Mostre a situação final do aluno. Para ser aprovado o aluno precisa ter nota média final 
        maior ou igual a 60 e ter presença maior ou igual a 75% (considere um total de 72 aulas). 
        No caso de reprovação, mostrar o motivo da mesma, isto é, caso o aluno foi reprovado por 
        falta, mostrar “Reprovado por falta”. Caso tenha sido reprovado por nota, mostrar “Reprovado por nota”. 
        Se um aluno foi reprovado por falta e por nota, prevalece, como motivo para reprovação, as faltas. Assim,
        mostrar a mensagem “Reprovado por falta”. 


-------------------------------------------------------------------------------
Exemplo de saída:
Entre com os dados do 1º aluno: 
Matricula: 1
Nome: Paulo
Nota da prova 1: 50
Nota da prova 2: 70
Nota da prova 3: 60
Numero de faltas: 12

Entre com os dados do 2º aluno: 
Matricula: 2
Nome: Gustavo
Nota da prova 1: 95
Nota da prova 2: 90
Nota da prova 3: 100
Numero de faltas: 19

Entre com os dados do 3º aluno: 
Matricula: 3
Nome: Luis
Nota da prova 1: 50
Nota da prova 2: 60
Nota da prova 3: 58
Numero de faltas: 2

Aluno com maior nota na prova 1 foi Gustavo com 95,0 pontos.
Aluno com maior media geral foi Gustavo com 95,0 pontos.
Aluno com menor media geral foi Luis com 56,0 pontos.

Situacao dos Alunos: 
1- Paulo. Aprovado.
2- Gustavo. Reprovado por falta.
3- Luis. Reprovado por nota.
-------------------------------------------------------------------------------
*/