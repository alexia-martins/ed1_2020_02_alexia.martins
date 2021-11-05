#include <stdio.h>
#include <string.h>
#include "TMat2D.h"
#include <stdlib.h>
int main()
{
    int nrows[4], ncolumns[4], rtemp, ctemp, i, j, option, repeat = 1, info;
    int quant[4];
    double temp = 0.0;
    TMat2D *pMat1 = NULL, *pMat2 = NULL, *pMat3 = NULL, *pMat4 = NULL;
    while (repeat == 1)
    {
        printf("Enter an option: \n1- Create the TAD.\n2 - Destroy the TAD\n3 - Write i,j element\n4 - Access i,j element\n5 - Fill in with random numbers between a minimum and maximum value\n6 - Adding two matrices\n7 - Multiply two matrices\n8 - Multiply a matrix by a scalar value\n9 - Calculate the Matrix Trace\n10 - Return a vector with the sum of lines\n11 - Return a vector with the sum of columns\n12 - Return the number of rows in the matrix\n13 - Return the number of columns of the matrix\n14 - Print one matrix\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Which of the matrices to creat? (1, 2, 3 or 4)\n");
            scanf("%d", &info);

            if (info == 1)
            {
                printf("Inform the number of lines: \n");
                scanf("%d", &nrows[0]);
                printf("Inform the number of columns: \n");
                scanf("%d", &ncolumns[0]);
                pMat1 = mat2D_create(nrows[0], ncolumns[0]);
                quant[0] = ncolumns[0] * nrows[0];
                if (pMat1 != NULL)
                    printf("Successful created!\n");
                else
                    ("Error\n");
            }
            else if (info == 2)
            {
                printf("Inform the number of lines: \n");
                scanf("%d", &nrows);
                printf("Inform the number of columns: \n");
                scanf("%d", &ncolumns);
                pMat2 = mat2D_create(nrows[1], ncolumns[1]);
                quant[1] = ncolumns[1] * nrows[1];
                if (pMat2 != NULL)
                    printf("Successful created!\n");
                else
                    ("Error\n");
            }
            else if (info == 3)
            {
                printf("Inform the number of lines: \n");
                scanf("%d", &nrows);
                printf("Inform the number of columns: \n");
                scanf("%d", &ncolumns);
                pMat3 = mat2D_create(nrows[2], ncolumns[2]);
                quant[3] = ncolumns[3] * nrows[3];
                if (pMat3 != NULL)
                    printf("Successful created!\n");
                else
                    ("Error\n");
            }
            else if (info == 4)
            {
                printf("Inform the number of lines: \n");
                scanf("%d", &nrows);
                printf("Inform the number of columns: \n");
                scanf("%d", &ncolumns);
                pMat4 = mat2D_create(nrows[3], ncolumns[3]);
                quant[4] = ncolumns[4] * nrows[4];
                if (pMat4 != NULL)
                    printf("Successful created!\n");
                else
                    ("Error");
            }
            else
            {
                printf("Incorret value\n");
            }
            break;
        case 2:
            printf("Which of the matrices to destroy? (1, 2, 3 or 4)\n");
            scanf("%d", &info);
            if (info == 1)
            {
                printf("%d\n", mat2D_free(pMat1));
            }
            else if (info == 2)
            {
                printf("%d\n", mat2D_free(pMat2));
            }
            else if (info == 3)
            {
                printf("%d\n", mat2D_free(pMat3));
            }
            else if (info == 4)
            {
                printf("%d\n", mat2D_free(pMat4));
            }
            else
                printf("Matrix doesn't exist\n");
            break;
        case 3:
            printf("Which of the matrices to insert?");
            scanf("%d", &info);
            printf("Value of element to be inserted:");
            scanf("%lf", &temp);

            if (info == 1)
            {
                if (pMat1 != NULL)
                {
                    printf("Which line?");
                    scanf("%d", &rtemp);
                    printf("Which column?");
                    scanf("%d", &ctemp);
                    printf("%d", mat2D_set_value(pMat1, rtemp, ctemp, temp));
                }
                else
                {
                    printf("Matrix not allocated\n");
                }
                break;
            }
            else if (info == 2)
            {
                if (pMat2 != NULL)
                {
                    printf("Which line?");
                    scanf("%d", &rtemp);
                    printf("Which column?");
                    scanf("%d", &ctemp);
                    printf("%d", mat2D_set_value(pMat2, rtemp, ctemp, temp));
                }
                else
                {
                    printf("Matrix not allocated\n");
                }
                break;
            }
            else if (info == 3)
            {
                if (pMat3 != NULL)
                {
                    printf("Which line?");
                    scanf("%d", &rtemp);
                    printf("Which column?");
                    scanf("%d", &ctemp);
                    printf("%d", mat2D_set_value(pMat3, rtemp, ctemp, temp));
                }
                else
                {
                    printf("Matrix not allocated\n");
                }
                break;
            }
            else if (info == 4)
            {
                if (pMat4 != NULL)
                {
                    printf("Which line?");
                    scanf("%d", &rtemp);
                    printf("Which column?");
                    scanf("%d", &ctemp);
                    printf("%d", mat2D_set_value(pMat4, rtemp, ctemp, temp));
                }
                else
                {
                    printf("Matrix not allocated\n");
                }
                break;
            }
            else
                printf("Matrix doesn't exist\n");
            break;
        case 4:
            printf("Which the matrix to acess?");
            scanf("%d", &info);
            printf("Which line to acess?");
            scanf("%d", &rtemp);
            printf("Which column to acess?");
            scanf("%d", &ctemp);
            double vtemp;
            if (info == 1)
            {
                if (mat2D_get_value(pMat1, rtemp, ctemp, &vtemp) == 0)
                    printf("Value on position: %.2lf\n", vtemp);
                else
                    printf("Try again.\n");
            }

            else if (info == 2)
            {
                if (mat2D_get_value(pMat2, rtemp, ctemp, &vtemp) == 0)
                    printf("Value on position: %.2lf\n", vtemp);
                else
                    printf("Try again.\n");
            }

            else if (info == 3)
            {
                if (mat2D_get_value(pMat3, rtemp, ctemp, &vtemp) == 0)
                    printf("Value on position: %.2lf\n", vtemp);
                else
                    printf("Try again.\n");
            }

            else if (info == 4)
            {
                if (mat2D_get_value(pMat4, rtemp, ctemp, &vtemp) == 0)
                    printf("Value on position: %.2lf\n", vtemp);
                else
                    printf("Try again.\n");
            }

            break;
        case 5: 
                printf("Which matrix to fill 1 or 2?");
                scanf("%d", &info);
                printf ("What is the start of the break?");
                scanf ("%d", &rtemp);
                printf ("What is the end of the break");
                scanf ("%d", &ctemp);
                if (info == 1) {
                mat2D_fill (pMat1, rtemp, ctemp);
}
               else if (info == 2) {
                mat2D_fill (pMat2, rtemp, ctemp);
}
                else printf ("Matrix doesn't exist\n");
            break;
        case 6:
                mat2D_adding (pMat1, pMat2, pMat3);
            break;
        case 7:
                printf("Inform the number of lines: \n");
                scanf("%d", &nrows);
                printf("Inform the number of columns: \n");
                scanf("%d", &ncolumns);
                mat2d_increase_size (pMat1, nrows[1], ncolumns[1]);
                mat2D_print_everything (pMat1);
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            break;
        case 13:
            break;
        default:
            printf("Invalid option\n");
            break;
        }

        printf("Another operation? 1 for yes, 0 for no.\n");
        scanf("%d", &repeat);
    }
}

