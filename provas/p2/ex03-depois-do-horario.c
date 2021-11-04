/*
 3) Considerando o TAD Matriz implementado em aula², crie uma nova 
função que permite aumentar o tamanho da matriz (mat2d_increase_size).
Os elementos da matriz original devem continuar na mesma posição que
estavam antes do aumento. Os novos elementos devem receber valor 0.
Por exemplo, caso o usuário tenha uma matriz 2x2 e queria que ela vire uma 
matriz 3x3, ele poderá usar a função de aumento de tamanho como
abaixo:

// criando matriz 2x2
mat = mat2D_create(2,2);

// Exemplo de preenchimento
// |2 7|
// |4 5|

// aumentando o tamanho da matriz para 3x3
mat2d_increase_size(mat,3,3)

// Exemplo após o aumento de tamanho
// |2 7 0|
// |4 5 0|
// |0 0 0|



²struct TMat2D
 {
  int nrows; // número de linhas
  int ncolumns; // número de colunas
  double *data; // ponteiro para os dados da matriz
 };

*/

TMat2D mat2d_increase_size(TMat2D * mat, int nrows, int ncolumns)
{
if (mat->nrows >= nrows || mat->ncolumns >= ncolumns || mat == NULL)
    else
    {
        TMat2D aux = mat2D_Create (mat->nrows, mat->ncolumns);
        aux->data = mat->data;
        mat->data = realloc(nrows * ncolumns * sizeof(double));
     // mat->data += calloc (mat, (nrows * ncolumns * sizeof(double)));
        
        
        if (mat->data != NULL)
        {
        for (i=0; i<mat->nRows; i++){
    for (j=0; j<mat->nColumns; j++){
     cont = 0;
    int aux2 = i * mat->nColumns + j;
    if (j == aux->nrows || i == aux->ncolumns) {
    mat->data [aux2] = 0;
    }
     else {
     mat->data [aux2] = aux->data[cont];
     cont++;}
}}}
        }}}
        return mat;
    }
 }
                 
                 
                 /*
                     if (mat == NULL || mat->data == NULL || nrows > mat->nRows || ncolumns > mat->nColumns)d
        return -1;

    else if (nrows > mat->nRows || ncolumns > mat->nColumns)
        return -1;

    else
    {
        int aux = nrows * mat->nColumns + ncolumns;

        mat->data[aux] = value;

        return 0;
    }
                 */
