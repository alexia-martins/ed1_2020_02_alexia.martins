#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct ponto {
int p1, p2;// check:<<<erro: use valores reais>>>>
}ponto;

typedef struct circulo {
ponto p;
int raio;
}circulo;

int main(){
float area, distancia;
   // Ex04: Um círculo pode ser definido com duas informações
   // - um ponto central; que é sua coordenada x,y no espaço cartesiano
   // - um raio; que é a distância da borda ao centro

   // Crie uma estrura Circulo. Para isso, crie uma estrutura chamada Ponto, que armazenará as
   // coordenadas reais (x,y) de um ponto. Em seguida, crie uma estrutura chamada Circulo,
   // que define o círculo, isto é, armazena um ponto e um raio.
   
   // No programa principal crie uma variável para definir um círculo e a partir dessa variável
   // e mostre a área e a distância do centro do círculo até a origem. 
   // fórmulas:
   // area = 3,14*r*r
   // distancia d = sqtr(x*x + y*y)
   
   // Exemplo de saída: Circulo: Centro (3,5); Raio 2; Área: 12.56; Distancia: 5.0
circulo c;
printf ("Digite o ponto x do ponto central: ");
scanf ("%d", &c.p.p1);
printf ("Digite o ponto y do ponto central: ");
scanf ("%d", &c.p.p2);
printf ("Digite o raio: ");
scanf ("%d", &c.raio);
area = 3.14*(c.raio*c.raio);
distancia = sqrt ((c.p.p1*c.p.p1)+(c.p.p2*c.p.p2));
printf ("Circulo: (%d, %d); Raio: %d; Area: %.2f; Distancia: %.1f", c.p.p1, c.p.p2, c.raio, area, distancia);

/* PROFESSOR O VALOR DO SEU EXEMPLO DE DISTANCIA TA ERRADO, O CERTO É 5,8 MESMO*/
// check:<<<comentário: obrigado!, na verdade errei o centro, que era para ser (3,4) e não (3,5)>>>>
    return 0;
}