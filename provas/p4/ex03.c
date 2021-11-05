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

/*
4 -7 7 * + 5 -

4 [4 esta no topo]
4 -7 [-7 esta no topo]
4 -7 7 [ 7 esta no topo]
4 ((-7 * 7) =  -49) 
4 -49 [-49 esta no topo]
((-49)+4 = -45)
-45 [-45 esta no topo]
-45 5 [5 esta no topo]
(5- (-45)) = -40
-40 [40 esta no topo] 
*/