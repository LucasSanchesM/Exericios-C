/*
Escreva um programa em C que receba do usuário um número inteiro para 
o qual se deseja calcular a tabuada. O programa também deve solicitar
o valor inicial e o valor final do intervalo dessa tabuada. Ao final,
utilize um laço de repetição para exibir os resultados das 
multiplicações dentro do intervalo definido.
*/

#include<stdio.h>

void main(){
	int valor_tabuada, inicio, fim, cont;
	printf("Digite o valor da tabuada:");
	scanf("%d", &valor_tabuada);
	printf("Digite o inicio e o fim da tabuada:");
	scanf("%d %d", &inicio, &fim);
  for(cont=0; cont<=fim; cont++)
    printf("%d x %d = %d\n", valor_tabuada, inicio++, inicio*valor_tabuada);
}
