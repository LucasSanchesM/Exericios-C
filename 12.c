/*
Implemente um programa que calcule o somatório de 50 termos, 
onde o numerador é formado pelos números ímpares (1 a 99) 
e o denominador pela sequência natural de 1 a 50.
*/

#include<stdio.h>

void main(){
	double num=1, divisor=1, soma=0;
	for(;num<=99 && divisor<=50 ; ){
    soma+=(num/divisor);
		num+=2;
		divisor++;
  }
	printf("%f", soma);
}


