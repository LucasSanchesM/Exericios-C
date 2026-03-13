/*
Escreva um programa em C que calcule a média aritmética de todos os 
números inteiros compreendidos no intervalo entre 15 e 100 (inclusive). 
O programa deve utilizar uma estrutura de repetição para somar
os valores desse intervalo e, ao final, dividir o total acumulado 
pela quantidade de elementos somados. O resultado deve ser exibido 
como um valor de ponto flutuante com duas casas decimais.
*/

#include<stdio.h>
void main(){
	float soma;
	int cont=15, divisor;
	divisor=100-15+1;
	for(soma=0; cont<=100; cont++){
		soma+=cont;
	}
	printf("o resultado da media aritmetica eh: %.2f", soma/(float)divisor);			
}
