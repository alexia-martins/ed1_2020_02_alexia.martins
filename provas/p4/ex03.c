/* ex03) Mostre como uma pilha pode ser usada para resolver a expressão 
matemática abaixo. Não confundir números negativos com subtrações.

Cada número e operador é lido em um passo. 
Para cada passo, mostre o estado da pilha 

Exemplo de como mostrar a pilha
2 2 <topo  // o número 2 está no topo
2 3 4 <topo // o número 4 está no topo

Expressão: 

4 -7 7 * + 5 -
*/


// check:<<<erro: não pedi código!!! era para resolver a equação>>>>

char *infixforposfix (char *inf) {
  int n = strlen (inf);
  char *posf; 
  posf = malloc ((n+1) * sizeof (char));
  struct chars c;
  Stack *st;
  st = stack_create(n);
  c.ch = inf[0];
  stack_push(st, c);
  int j = 0;
  for (int i = 1; inf[i] != '\0'; ++i) {
    switch (inf[i]) {
      char n1;
      case '(':   
        c.ch = inf[i];
        stack_push(st, c);
        break;
      case ')': 
        stack_top(st, &c);
        stack_pop(st);
        while (c.ch != '(') {
          posf[j++] = c.ch;
          stack_top(st, &c);
          stack_pop(st);
        }
        break;
      case '+': 
      case '-': 
        stack_top(st, &c);
        stack_pop(st);
        while (c.ch != '(') {
          posf[j++] = c.ch;
          stack_top(st, &c);
          stack_pop(st);
        }
        stack_push(st,c);
        c.ch = inf[i];
        stack_push(st, c);
        break;

      case '*':
      case '/': 
        stack_top(st, &c);
        stack_pop(st);
        while (c.ch != '(' && c.ch != '+' && c.ch != '-') {

          posf[j++] = c.ch;
          stack_top(st, &c);
          stack_pop(st);

        }
        stack_push(st, c);
        c.ch = inf[i];
        stack_push(st, c);
        break;

      default:  
        posf[j++] = inf[i];
      }
   }
   posf[j] = '\0';   
   return posf;
} 


int calculate (char *inf) {
    int n = strlen (inf);
    int n1;
    int n2;
    int r;
    struct chars c;
    Stack *st;
    st = stack_create(n+1);
    int j = 0;
    for (int i = 0; inf[i] != '\0'; ++i) {
        switch (inf[i]) {
          case '+': 
            stack_top(st, &c);
            stack_pop(st);
            n1 = c.ch - '0';
            stack_top(st, &c);
            stack_pop(st);
            n2 = c.ch - '0';
            r = n2 + n1;
            r = r + '0';
            c.ch = r;
            stack_push(st, c);
            break;
          case '-':
            stack_top(st, &c);
            stack_pop(st);
            n1 = c.ch - '0';
            stack_top(st, &c);
            stack_pop(st);
            n2 = c.ch - '0';
            r = n2 - n1;
            r = r + '0';
            c.ch = r;
            stack_push(st, c);
            break;
          case '*':
            stack_top(st, &c);
            stack_pop(st);
            n1 = c.ch - '0';
            stack_top(st, &c);
            stack_pop(st);
            n2 = c.ch - '0';
            r = n2 * n1;
            r = r + '0';
            c.ch = r;
            stack_push(st, c);
            break;
          case '/': 
            stack_top(st, &c);
            stack_pop(st);
            n1 = c.ch - '0';
            stack_top(st, &c);
            stack_pop(st);
            n2 = c.ch - '0';
            r = n2 / n1;
            r = r + '0';
            c.ch = r;
            stack_push(st, c);
            break;
          default: 
            c.ch = inf[i];
            stack_push(st,c);
        }
    }
    stack_top(st,&c);
    int f = c.ch - '0';     
    return f;
}

int main(void) {
  char form[30];
  char *result;
  int final;
  printf("Digite a equacao: ");
  scanf("%s", form);
  result = infixforposfix(form);
  printf("\nForma Postfix: %s\n", result);
  final = calculate(result);
  printf("\nResultado: %d\n", final);
  return 0;
}
