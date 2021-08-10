#include <stdio.h>
#include <string.h>
int main(void)
{
 char buff[5];
 int pass = 0;
 printf("\n Entre com a senha : \n");
 gets(buff);
 if (strcmp(buff, "1234")) {
 printf ("\n Senha Errada \n");
 } else {
 printf ("\n Senha Correta \n");
 pass = 1;
 }
 if (pass) { /* O usuário acertou a senha, poderá continuar*/
 printf ("\n Acesso liberado \n");
 } else {
 printf ("\n Acesso negado \n");
 }
 return 0;
}

// a) Verificar se uma senha está correta ou não para poder liberar o acesso
// b) A saída é: senha correta, acesso liberado
// c) a. Senha errada, acesso negado. b. Senha errada, acesso negado. c. Senha errada, acesso liberado.
// c) No caso c. pois mesmo com a senha errada ele liberou acesso, isso se deu porque estourou o numero de posições de memoria do vetor.