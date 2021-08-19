#include <stdio.h>

void imprime_vet_int (int *p2){
for (int i=0; i<5; i++){
printf ("%d ", *p2);
p2++;
}
}

void imprime_vet_double (double *p2){
for (int i=0; i<5; i++){
printf ("%.4lf ", *p2);
p2++;
}
}

void imprime_vet_float (float *p3){
for (int i=0; i<5; i++){
printf ("%.2f ", *p3);
p3++;
}
}

int main(){
    int vet1 [5] = {1, 2, 3, 4, 5}; 
    int *p1;
    p1 = vet1;

    double vet2[5] = {2.222, 1.11, 9.99, 10.231, 3.0114};
    double *p2;
    p2 = vet2;

    float vet3[5] = {2.1, 1.0, 9.9, 10.3, 3.1};
    float *p3;
    p3 = vet3;

    printf("\nOs valores inseridos neste vetor de inteiros eh: ");
    imprime_vet_int (p1);

    printf("\nOs valores inseridos neste vetor de float eh: ");
    imprime_vet_float (p3);

    printf("\nOs valores inseridos neste vetor de double eh: ");
    imprime_vet_double (p2);


    return 0;
}

/*
=> Crie três funções chamadas imprime_vet_int, 
imprime_vet_double, imprime_vet_float que mostra o conteúdo de 
um vetor de inteiros, double, e float, respectivamente. Use essas 
funções sempre que precisar mostrar um vetor.


Exemplo de Chamada:

    imprime_vet_int(vetori,n);
    imprime_vet_double(vetord,n);
    imprime_vet_float(vetorf,n);

-------------------------------------------------------------------------------
Exemplo de Saída:

Os valores inseridos neste vetor de inteiros eh: 1 2 3 4 5 
Os valores inseridos neste vetor de float eh: 1.20 2.30 3.40 4.50 5.50 
Os valores inseridos neste vetor de double eh: 1.20 2.30 3.40 4.50 5.50 
-------------------------------------------------------------------------------
*/