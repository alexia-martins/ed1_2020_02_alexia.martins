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
                    //0 * 3 + 2 
                    int aux2 = (i * mat->nColumns) + j;
                    if (j >= aux->nRows || i >= aux->nColumns)
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