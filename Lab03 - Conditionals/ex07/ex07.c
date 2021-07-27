#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
  float ladoA, ladoB, ladoC;
  printf("Insira o tamanho do primeiro lado:");
  scanf("%f", &ladoA);
    printf("Insira o tamanho do segundo lado:");
    scanf("%f", &ladoB);
        printf("Insira o tamanho do terceiro lado:");
        scanf("%f", &ladoC);
  if (ladoA < 0 || ladoB < 0 || ladoC < 0) {printf("Tente novamente, valor inserido e negativo! \n");}

  else if (ladoA > ladoB + ladoC || ladoB > ladoA + ladoC || ladoC > ladoA + ladoB) {printf("A forma inserida nao e compativel com um triangulo. \n");}
  else if (pow(ladoA, 2) == pow(ladoB, 2) + pow(ladoC, 2)) {printf("Voce formou um triangulo retangulo. \n");}
  else if (pow(ladoA, 2) > pow(ladoB, 2) + pow(ladoC, 2)) {printf("Voce formou um triangulo obtusangulo. \n");}
  else {printf("Voce formou um triangulo acutangulo. \n");}
}

/*
Ler o comprimento dos três lados de um triângulo (A,B,C) e determinar o tipo de
triângulo, com base nos seguintes casos:
(i) Se algum dos lados for maior que a soma dos outros dois, nenhum triângulo é
formado
(ii) Se A2 = B2 + C2 é formando um triângulo retângulo
(iii) Se A2 > B2 + C2 é formando um triangulo obtusângulo
(iv) Se A2 < B2 + C2 é formando um triangulo acutângulo
Caso um número negativo seja digitado, mostrar uma mensagem de erro
*/