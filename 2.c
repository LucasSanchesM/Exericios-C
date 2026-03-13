//Escreva um programa em C que solicite ao usuário a digitação de 
//5 números inteiros, um de cada vez. O programa deve calcular a 
//soma apenas dos números que forem pares. Ao final das 5 leituras, 
//exiba o valor total acumulado da soma.

#include<stdio.h>

void main(){
	int num, soma=0, cont;
	for(cont=1; cont<=5; cont++){
	   printf("Digite um algarismos:");
       scanf(" %d", &num);

	   if (num%2==0){
	    	soma+=num;
	   }
	}
	printf("soma=%d", soma);
}


