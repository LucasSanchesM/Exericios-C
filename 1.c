//Desenvolva um programa em C que receba um número inteiro inicial.
//O programa deve imprimir uma sequência numérica crescente a partir desse 
//número, respeitando as seguintes regras:
//Filtro: Não devem ser impressos os números que sejam múltiplos de 3.
//Parada: A sequência deve ser interrompida imediatamente após o programa 
//encontrar o primeiro número que seja múltiplo de 10 (este último número deve ser testado, mas só será impresso se não for múltiplo de 3)."
#include<stdio.h>

void main(){
	int num;
	printf("Digite um numero:");
	scanf("%d", &num);
	for(; ;num++){
		if (num%3!=0){
			printf("%d ", num);
		}
		if(num%10==0){
			break;
		}
	}
}


