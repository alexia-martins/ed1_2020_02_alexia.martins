#include <stdio.h>
#include <string.h>
struct cadastro {
char nome [100], cpf [15], estadoCivil [13], sexo, id [10];
float salario;
};
struct endereco{
char rua [100];
int num;
char comp [100];
char cidade [30];
char estado [5];
char cep [15];
};
struct telefone{
int ddd;
int numero;
};
struct data {
int dia, ano;
char mes [10];
};

int main(){
int repetir=1, i, menu, aux1, aux2;
struct cadastro cadastros[5];
struct endereco endComercial[5];
struct endereco endResidencial[5];
struct telefone tel [5];
struct telefone telResidencial [5];
struct data dataNasc [5];
struct data dataIng [5];

strcpy(cadastros[0].nome,"Alexia Martins");
strcpy (cadastros[0].cpf, "111-111-111-11");
strcpy (cadastros[0].estadoCivil, "Solteira");
strcpy (cadastros[0].id, "111.111-11");
cadastros[0].salario = 1500.50;
cadastros[0].sexo = 'F';
strcpy (endComercial[0].rua, "Rua 95");
endComercial[0].num = 335;
strcpy(endComercial[0].comp, "Padaria Shalon");
strcpy(endComercial[0].cidade, "Catalao");
strcpy(endComercial[0].estado, "GO");
strcpy(endComercial[0].cep, "75710-210");
strcpy(endResidencial[0].rua, "Rua 96");
strcpy(endResidencial[0].comp, "Nao tem");
endResidencial[0].num = 235;
strcpy(endResidencial[0].cidade, "Catalao");
strcpy(endResidencial[0].estado, "GO");
strcpy(endResidencial[0].cep, "757100-000");
tel[0].ddd = 64;
tel[0].numero = 999999999;
telResidencial[0].ddd = 64;
telResidencial[0].numero = 101010101;
dataNasc[0].dia = 9;
strcpy(dataNasc[0].mes, "Novembro");
dataNasc[0].ano = 1998;
dataIng[0].dia = 1;
strcpy(dataIng[0].mes, "Janeiro");
dataIng[0].ano = 2018;

strcpy(cadastros[1].nome,"Sueli Martins");
strcpy (cadastros[1].cpf, "222-222-222-22");
strcpy (cadastros[1].estadoCivil, "Casada");
strcpy (cadastros[1].id, "222.222-22");
cadastros[1].salario = 1000.50;
cadastros[1].sexo = 'F';
strcpy (endComercial[1].rua, "Rua 95");
endComercial[1].num = 458;
strcpy(endComercial[1].comp, "Shalon");
strcpy(endComercial[1].cidade, "Catalao");
strcpy(endComercial[1].estado, "GO");
strcpy(endComercial[1].cep, "75710-210");
strcpy(endResidencial[1].rua, "Rua 93");
endResidencial[1].num = 467;
strcpy(endResidencial[1].comp, "perto do marinho");
strcpy(endResidencial[1].cidade, "Catalao");
strcpy(endResidencial[1].estado, "GO");
strcpy(endResidencial[1].cep, "757100-000");
tel[1].ddd = 64;
tel[1].numero = 111111111;
telResidencial[1].ddd = 64;
telResidencial[1].numero = 111111111;
dataNasc[1].dia = 3;
strcpy(dataNasc[1].mes, "Fevereiro");
dataNasc[1].ano = 1969;
dataIng[1].dia = 1;
strcpy(dataIng[1].mes, "Fevereiro");
dataIng[1].ano = 2020;

strcpy(cadastros[2].nome,"Joao Carlos");
strcpy (cadastros[2].cpf, "333.333.333-33");
strcpy (cadastros[2].estadoCivil, "Solteiro");
strcpy (cadastros[2].id, "222.222-22");
cadastros[2].salario = 6000;
cadastros[2].sexo = 'M';
strcpy (endComercial[2].rua, "Rua Jose Matias");
endComercial[2].num = 18;
strcpy(endComercial[2].comp, "Proximo ao hospital");
strcpy(endComercial[2].cidade, "Araxa");
strcpy(endComercial[2].estado, "MG");
strcpy(endComercial[2].cep, "34356-000");
strcpy(endResidencial[2].rua, "Rua Joao matias");
endResidencial[2].num = 2366;
strcpy(endResidencial[2].comp, "Nao tem");
strcpy(endResidencial[2].cidade, "Araxa");
strcpy(endResidencial[2].estado, "MG");
strcpy(endResidencial[2].cep, "34356-000");
tel[2].ddd = 34;
tel[2].numero = 12121212;
telResidencial[2].ddd = 34;
telResidencial[2].numero = 12121212;
dataNasc[2].dia = 15;
strcpy(dataNasc[2].mes, "Março");
dataNasc[2].ano = 1996;
dataIng[2].dia = 1;
strcpy(dataIng[2].mes, "Janeiro");
dataIng[2].ano = 2010;

strcpy(cadastros[3].nome,"Carlos alberto");
strcpy (cadastros[3].cpf, "444.444.444-44");
strcpy (cadastros[3].estadoCivil, "Divorciado");
strcpy (cadastros[3].id, "333.333-33");
cadastros[3].salario = 10000;
cadastros[3].sexo = 'M';
strcpy (endComercial[3].rua, "Rua Joaquim");
endComercial[3].num = 322;
strcpy(endComercial[3].comp, "Supermercado Betel");
strcpy(endComercial[3].cidade, "Uberlandia");
strcpy(endComercial[3].estado, "MG");
strcpy(endComercial[3].cep, "34366-333");
strcpy(endResidencial[3].rua, "Rua Jason");
endResidencial[3].num = 1001;
strcpy(endResidencial[3].comp, "Casa branca");
strcpy(endResidencial[3].cidade, "Uberlandia");
strcpy(endResidencial[3].estado, "MG");
strcpy(endResidencial[3].cep, "34366-333");
tel[3].ddd = 34;
tel[3].numero = 13131313;
telResidencial[3].ddd = 34;
telResidencial[3].numero = 1313131313;
dataNasc[3].dia = 30;
strcpy(dataNasc[3].mes, "Junho");
dataNasc[3].ano = 1954;
dataIng[3].dia = 10;
strcpy(dataIng[3].mes, "Dezembro");
dataIng[3].ano = 2001;

strcpy(cadastros[4].nome,"Joana Jose");
strcpy (cadastros[4].cpf, "555.555.555-55");
strcpy (cadastros[4].estadoCivil, "Solteira");
strcpy (cadastros[4].id, "555.555-55");
cadastros[4].salario = 4000.00;
cadastros[4].sexo = 'F';
strcpy (endComercial[4].rua, "Avenida das Americas");
endComercial[4].num = 1001;
strcpy(endComercial[4].comp, "Contabilidade");
strcpy(endComercial[4].cidade, "Ouvidor");
strcpy(endComercial[4].estado, "GO");
strcpy(endComercial[4].cep, "75760-110");
strcpy(endResidencial[4].rua, "Rua 1002");
endResidencial[4].num = 11;
strcpy(endResidencial[4].comp, "Nao tem");
strcpy(endResidencial[4].cidade, "Ouvidor");
strcpy(endResidencial[4].estado, "GO");
strcpy(endResidencial[4].cep, "75760-111");
tel[4].ddd = 64;
tel[4].numero = 15151515;
telResidencial[4].ddd = 64;
telResidencial[4].numero = 14141414;
dataNasc[4].dia = 10;
strcpy(dataNasc[4].mes, "Novembro");
dataNasc[4].ano = 1986;
dataIng[4].dia = 1;
strcpy(dataIng[4].mes, "Janeiro");
dataIng[4].ano = 2000;

while (repetir==1) {printf (" \n Digite uma opcao:\n\t 1 - Listar todos os cadastros.\n\t 2 - Cadastrar/Sobrescrever nova pessoa.\n\t 3 - Listar as pessoas que nasceram depois de 1990.\n\t 4- Copiar dados de um cadastro para outro.\n");
scanf("%d", &menu);
switch (menu) {
    case 1:
system ("cls");
printf ("Lista de usuarios cadastrados:\n");
for (i=0; i<5;i++){
printf ("Posicao: %d\n", i); 
printf ("Informacoes Pessoais:\n"); 
printf ("Nome: %s, CPF: %s, Sexo: %c, Estado Civil: %s\n", cadastros[i].nome,cadastros[i].cpf, cadastros[i].sexo, cadastros[i].estadoCivil);
printf ("Salario: %.2f, Identidade:  %s\n", cadastros[i].salario, cadastros [i].id); 
printf ("Telefone residencial: (%d) %d\n", telResidencial[i].ddd, telResidencial[i].numero); 
printf ("Telefone: (%d) %d\n", tel[i].ddd, tel [i].numero);
printf("Data de Nascimento:  %d de %s de %d\n", dataNasc[i].dia,dataNasc[i].mes, dataNasc[i].ano); 
printf ("Data de Ingresso: %d de %s de %d\n\n", dataIng[i].dia, dataIng[i].mes, dataIng[i].ano); 
printf ("Endereco comercial:\n"); 
printf ("Rua:  %s, Nro %d, Complemento: %s, Cidade: %s\n", endComercial[i].rua, endComercial[i].num, endComercial[i].comp, endComercial[i].cidade);  
printf ("Estado: %s, CEP: %s\n\n", endComercial[i].estado, endComercial[i].cep); 
printf ("Endereco residencial:\n"); 
printf ("Rua:  %s, Nro %d, Complemento: %s, Cidade: %s\n", endResidencial[i].rua, endResidencial[i].num, endResidencial[i].comp, endResidencial[i].cidade);  
printf ("Estado: %s, CEP: %s\n\n", endResidencial[i].estado, endResidencial[i].cep); 
}
break;
    case 2:
printf ("Digite a posicao do vetor que sera cadastrada/sobreescrevida:");
scanf ("%d", &i);
getchar ();
printf ("Nome:");
gets(cadastros[i].nome);
printf ("CPF:");
fgets (cadastros[i].cpf,15, stdin);
printf ("Estado civil:");
fgets (cadastros[i].estadoCivil, 13, stdin);
printf ("Identidade:");
fgets (cadastros[i].id, 10, stdin);
printf ("Salario:");
scanf ("%f", &cadastros[i].salario);
getchar ();
printf ("Sexo F ou M:");
scanf (" %c", &cadastros[i].sexo);
getchar ();
printf ("Endereco comercial:\nRua:");
fgets (endComercial[i].rua, 100, stdin);
printf ("Numero:");
scanf ("%d", &endComercial[i].num);
getchar ();
printf ("Complemento:");
fgets(endComercial[i].comp, 100, stdin);
printf ("Cidade:");
fgets(endComercial[i].cidade, 30, stdin);
printf("Sigla do estado:");
fgets(endComercial[i].estado, 5, stdin);
printf ("Cep:");
fgets(endComercial[i].cep, 15, stdin);
printf ("Endereco residencial:\nRua:");
fgets(endResidencial[i].rua, 100, stdin);
printf ("Numero:");
scanf ("%d", &endResidencial[i].num);
getchar ();
printf ("Complemento:");
fgets(endResidencial[i].comp, 100, stdin);
printf ("Cidade:");
fgets(endResidencial[i].cidade, 30, stdin);
printf("Sigla do estado:");
fgets(endResidencial[i].estado, 5, stdin);
printf ("Cep:");
fgets(endResidencial[i].cep, 15, stdin);
printf ("Telefone:\nDDD:");
scanf ("%d", &tel[i].ddd);
getchar ();
printf ("Numero:");
scanf ("%d", &tel[i].numero);
getchar ();
printf ("Telefone residencial:\nDDD:");
scanf ("%d", &telResidencial[i].ddd);
getchar ();
printf ("Numero:");
scanf ("%d", &telResidencial[i].numero);
getchar ();
printf ("Data de nascimento:\nDia:");
scanf ("%d", &dataNasc[i].dia);
getchar ();
printf ("Mes:");
fgets(dataNasc[i].mes, 10, stdin);
printf ("Ano:");
scanf ("%d", &dataNasc[i].ano);
getchar ();
printf ("Data de ingresso:\nDia:");
scanf ("%d", &dataIng[i].dia);
getchar ();
printf ("Mes:");
fgets(dataIng[i].mes, 10, stdin);
printf ("Ano:");
scanf ("%d", &dataIng[i].ano);
getchar ();
break;
    case 3:
system ("cls");
printf ("Nascidos apos 1990:\n\n");
for (i=0; i<5;i++){
    if (dataNasc[i].ano>1990){
printf ("Posicao: %d\n", i); 
printf ("Informacoes Pessoais:\n"); 
printf ("Nome: %s, CPF: %s, Sexo: %c, Estado Civil: %s\n", cadastros[i].nome,cadastros[i].cpf, cadastros[i].sexo, cadastros[i].estadoCivil);
printf ("Salario: %.2f, Identidade:  %s\n", cadastros[i].salario, cadastros [i].id); 
printf ("Telefone residencial: (%d) %d\n", telResidencial[i].ddd, telResidencial[i].numero); 
printf ("Telefone: (%d) %d\n)", tel[i].ddd, tel [i].numero);
printf("Data de Nascimento:  %d de %s de %d\n", dataNasc[i].dia,dataNasc[i].mes, dataNasc[i].ano); 
printf ("Data de Ingresso: %d de %s de %d\n\n", dataIng[i].dia, dataIng[i].mes, dataIng[i].ano); 
printf ("Endereco comercial:\n"); 
printf ("Rua:  %s, Nro %d, Complemento: %s, Cidade: %s\n", endComercial[i].rua, endComercial[i].num, endComercial[i].comp, endComercial[i].cidade);  
printf ("Estado: %s, CEP: %s\n\n", endComercial[i].estado, endComercial[i].cep); 
printf ("Endereco residencial:\n"); 
printf ("Rua:  %s, Nro %d, Complemento: %s, Cidade: %s\n", endResidencial[i].rua, endResidencial[i].num, endResidencial[i].comp, endResidencial[i].cidade);  
printf ("Estado: %s, CEP: %s\n\n", endResidencial[i].estado, endResidencial[i].cep); 
}
}
break;
    case 4:
printf ("Digite a posicao do cadastro que sera copiado:");
scanf ("%d", &aux1);
printf ("Digite para qual posicao deseja copiar:");
scanf ("%d", &aux2);

strcpy(cadastros[aux2].nome, cadastros[aux1].nome);
strcpy (cadastros[aux2].cpf, cadastros [aux1].cpf);
strcpy (cadastros[aux2].estadoCivil, cadastros [aux1].estadoCivil);
strcpy (cadastros[aux2].id, cadastros[aux1].id);
cadastros[aux2].salario=cadastros[aux1].salario;
cadastros[aux2].sexo = cadastros[aux1].sexo;
strcpy (endComercial[aux2].rua, endComercial [aux1].rua);
endComercial[aux2].num = endComercial[aux1].num;
strcpy(endComercial[aux2].comp, endComercial[aux1].comp);
strcpy(endComercial[aux2].cidade, endComercial[aux1].cidade);
strcpy(endComercial[aux2].estado, endComercial[aux1].estado);
strcpy(endComercial[aux2].cep, endComercial[aux1].cep);
strcpy(endResidencial[aux2].rua, endResidencial[aux1].rua);
endResidencial[aux2].num = endResidencial[aux1].num;
strcpy(endResidencial[aux2].comp, endResidencial[aux1].comp);
strcpy(endResidencial[aux2].cidade, endResidencial[aux1].cidade);
strcpy(endResidencial[aux2].estado, endResidencial[aux1].estado);
strcpy(endResidencial[aux2].cep, endResidencial[aux1].cep);
tel[aux2].ddd = tel[aux1].ddd;
tel[aux2].numero = tel[aux1].numero;
telResidencial[aux2].ddd = telResidencial[aux1].ddd;
telResidencial[aux2].numero = telResidencial[aux1].numero;
dataNasc[aux2].dia = dataNasc[aux1].dia;
strcpy(dataNasc[aux2].mes, dataNasc[aux1].mes);
dataNasc[aux2].ano = dataNasc[aux1].ano;
dataIng[aux2].dia = dataIng [aux1].dia;
strcpy(dataIng[aux2].mes, dataIng[aux1].mes);
dataIng[aux2].ano = dataIng[aux1].ano;

}
printf ("\n Deseja fazer mais alguma operacao? \n\n Digite 1: SIM \n Digite 2: NAO \n");
scanf ("%d", &repetir);
system ("cls");
}
}

/*
1) 4.Define a estrutura necessária para armazenar os dados a seguir. 
Use as subestruturas dos   exercícios   anteriores para definir os tipos
dos campos com asterisco. Dê suporte para o cadastro de 5 pessoas:  

Cadastro
+------------+---------------------+--------------------------+------------------------+
| Nome       | Endereço comercial* |         Salário          |       Idade            | 
+------------+---------------------+--------------------------+--------+---------------+
| CPF        | Estado civil        |        Telefone**        | Data de nascimento *** |   
+------------+---------------------+--------------------------+--------+---------------+
| Sexo       |Endereço residencial*|  Telefone residencial ** | Data de ingresso ***   | 
+------------+---------------------+--------------------------+--------+---------------+

(a)Cadastre 5 usuários no seu código (não pedir para digitar – cadastre no próprio código
fonte, utilizando comandos de atribuição). A ideia disso é evitar digitação excessiva
durante o teste do programa.

(b)Crie um menu com as seguintes opções:
    a.Listar todos os cadastros
    b.Cadastrar/Sobrescrever nova pessoa (pedir em qual posição do vetor ela será cadastrada 0,1,2,3, ou 4)
    c.Listar as pessoas que nasceram depois de 1990.
    d.Copiar dados de um cadastro para outro


-------------------------------------------------------------------------------
Exemplo de saída:

=======Exemplo do menu=======

<< Cadastro de Usuários >> 

1 - Listar todos os cadastros  
2 - Cadastrar/Sobrescrever nova pessoa  
3 - Listar as pessoas que nasceram depois de 1990  
4 - Copiar dados de um cadastro para outro   
0 - Sair 
Escolha uma opção: 1

Lista de usuários cadastrados: 

Posição: 0 
Informacoes Pessoais: 
Nome: Cersei Lannister, CPF: 111111111-11, Sexo: F, Estado Civil: Viuva 
Salario: 111111, Identidade:  WE-11.111.111 
Telefone residencial: (11) 11111-1111 
Telefone: (11) 91111-1111 
Data de Nascimento:  1 de janeiro de 262 
Data de Ingresso: 1 de janeiro de 276 

Endereço comercial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Posição: 1 
Informacoes Pessoais: 
Nome:  John Snow, CPF: 222222222-22, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-22.222.222 
Telefone residencial: (11) 22222-2222 
Telefone: (11) 92222-2222 
Data de Nascimento:  2 de fevereiro de 281 
Data de Ingresso: 2 de fevereiro de 295 

Endereço comercial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Posição: 2 
Informacoes Pessoais: 
Nome: Jaime Lannister, CPF: 333333333-33, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-33.333.333 
Telefone residencial: (11) 11111-1111 
Telefone: (11) 91111-1111 
Data de Nascimento:  1 de janeiro de 262 
Data de Ingresso: 1 de janeiro de 276 

Endereço comercial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Posição: 3 
Informacoes Pessoais: 
Nome: Samwell Tarly, CPF: 444444444-44, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-44.444.444 
Telefone residencial: (11) 22222-2222 
Telefone: (11) 92222-2222 
Data de Nascimento:  2 de fevereiro de 283 
Data de Ingresso: 2 de fevereiro de 295 

Endereço comercial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

-------------------------------------------------------------------------------
*/