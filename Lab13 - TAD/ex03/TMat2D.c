#include <stdlib.h>
#include "TMat2D.h"
#include <stdio.h>

struct TMat2D
{
    int nRows;    // número de linhas
    int nColumns; // número de colunas
    double *data; // ponteiro para os dados da matriz
};

// mat = mat2D_create(4,3);

TMat2D *mat2D_create(int nrows, int ncolumns)
{
    TMat2D *mat;
    mat = malloc(sizeof(TMat2D));
    if (mat != NULL)
    {
        mat->data = malloc(nrows * ncolumns * sizeof(double));
        if (mat->data != NULL)
        {
            mat->nColumns = ncolumns;
            mat->nRows = nrows;
        }
        return mat;
    }

    else
        return NULL;
}
int mat2D_free(TMat2D *mat)
{

    if (mat != NULL)
    {
        free(mat);
        return 0;
    }
    else
        return -1;
}

int mat2D_fill(TMat2D *mat, int start, int end)
{
    int i = 0, j = 0;
    for (i = 0; i < mat->nRows; i++)
    {
        for (j = 0; j < mat->nColumns; j++)
        {
            if (start < end)
            {
                mat2D_set_value(mat, i, j, start);
                start++;
            }
            else {
                mat2D_set_value (mat, i, j, end);
            }
        }
    }
}

int mat2D_get_value(TMat2D *mat, int nrows, int ncolumns, double *val)
{
    if (mat == NULL || mat->data == NULL || nrows > mat->nRows || ncolumns > mat->nColumns)
        return -1;

    else
    {
        int index = nrows * mat->nColumns + ncolumns;
        *val = mat->data[index];
        return 0;
    }
}

int mat2D_set_value(TMat2D *mat, int nrows, int ncolumns, double value)
{
    if (mat == NULL || mat->data == NULL || nrows > mat->nRows || ncolumns > mat->nColumns)
        return -1;

    else if (nrows > mat->nRows || ncolumns > mat->nColumns)
        return -1;

    else
    {
        int aux = nrows * mat->nColumns + ncolumns;

        mat->data[aux] = value;

        return 0;
    }
}
int mat2d_increase_size(TMat2D *mat, int nrows, int ncolumns)
{
    if (mat->nRows >= nrows || mat->nColumns >= ncolumns || mat == NULL)
    {
        return -1;
    }
    else
    {
        TMat2D *aux;
        aux =  mat2D_create (mat->nRows, mat->nColumns);
        aux->data = mat->data;
        mat->data = realloc(mat->data, nrows * ncolumns * sizeof(double));
        if (mat->data != NULL)
        {
            int cont = 0;
            for (int i = 0; i < mat->nRows; i++)
            {
                for (int j = 0; j < mat->nColumns; j++)
                {
                    int aux2 = (i * mat->nColumns) + j;
                    if (j == aux->nRows || i == aux->nColumns)
                    {
                        mat->data[aux2] = 0;
                    }
                    else
                    {
                        mat->data[aux2] = aux->data[cont];
                        cont++;
                    }
                }
            }
        free (aux);
           return 0;
    
        }
    }

}
void mat2D_print_everything (TMat2D *mat){
int i, j, aux;
if (mat->data!=NULL) {
for (i=0; i<mat->nRows; i++){
    for (j=0; j<mat->nColumns; j++){
aux = i * mat->nColumns + j;
printf ("%.2lf", mat->data[aux]);
}}}
else printf ("Incompatible indexs.\n");
}
int mat2D_adding (TMat2D *mat1, TMat2D *mat2, TMat2D *mat3){
    int i, j, k;
    for (i =0; i< mat1->nColumns; i++){
    for (j = 0; j< mat2->nRows; j++)
    {
        for (k = 0; k<mat3->nColumns; k++){
        //mat2D_set_value ()
        }
    }
}}
