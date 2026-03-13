//Escreva um programa em C que solicite ao usuário um número inteiro n. 
//O programa deve imprimir todos os números inteiros de 0 até n (inclusive) e,
//ao final, exibir a soma total de todos esses números.

#include<stdio.h>

void main()

{

	int n,cont, soma=0;

	printf("Digite o n:");

	scanf("%d", &n);

	

	for(cont=0; cont<=n; cont++)

	{

		printf("%d ", cont);

		soma+=cont;

	}

	printf("\n%d", soma);

}


