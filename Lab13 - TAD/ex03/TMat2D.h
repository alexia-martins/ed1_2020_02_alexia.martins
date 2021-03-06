
typedef struct TMat2D TMat2D; 

TMat2D *mat2D_create(int nrows, int ncolumns);
int mat2D_free(TMat2D *mat);
int mat2D_set_value(TMat2D *mat, int nrows, int ncolumns, double value);
int mat2D_get_value(TMat2D *mat, int nrows, int ncolumns, double *index);
void mat2D_acess_row_column (TMat2D *mat, int nrow, int ncolumn);
void mat2D_print_everything (TMat2D *mat);
int mat2D_adding (TMat2D *mat1, TMat2D *mat2, TMat2D *mat3);
int mat2d_increase_size(TMat2D *mat, int nrows, int ncolumns);
int mat2D_fill(TMat2D *mat, int start, int end);