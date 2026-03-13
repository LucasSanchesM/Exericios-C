/*
Escreva um programa em C que solicite ao usuário 
um número inteiro "n", que representará o limite 
superior de um intervalo iniciando em zero.
O programa também deve receber dois números inteiros,
"i" e "j". Utilizando uma estrutura de repetição,
o algoritmo deve percorrer todos os números
de 0 até "n" e exibir apenas aqueles
que forem múltiplos de "i" ou múltiplos de "j".
*/

#include<stdio.h>

void main(){
  int n, i, j, cont;
	printf("Digite a quantidade de numeros:");
	scanf("%d", &n);	
	printf("DIgite os numeros multiplos:");
	scanf("%d %d", &i, &j);	
	for(cont=0; cont<=n; cont++){
    if (cont%i==0 || cont%j==0){
      printf("%d ", cont);
		}
	}	
}
