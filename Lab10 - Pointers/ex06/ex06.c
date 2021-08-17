/*
6) Discuta porque no exercício anterior ao somarmos/subtrairmos um valor de ponteiro há um comportamento
diferente para cada variável.

Porque são variaveis de tipos diferentes, v1 é do tipo inteiro que ocupa 4 bytes, v2 é do tipo double
que ocupa 8 bytes e c é do tipo char que ocupa 1 byte. Quando faço soma ou subtração o ponteiro se 
descola a quantidade de bytes correspondente ao tipo de dado que o ponteiro ta apontando.
*/