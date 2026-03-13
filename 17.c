/*
Escreva um programa em C que solicite ao usuário um número inteiro "n",
representando a quantidade de números ímpares que devem ser exibidos 
na tela. O programa deve utilizar uma estrutura de repetição para 
identificar e imprimir os primeiros "n" números ímpares da sequência 
numérica, começando a partir do 1. O controle da exibição deve ser 
feito através de um contador que rastreia quantos números válidos já foram mostrados.
*/

#include<stdio.h>

void main(){
	int n, cont, n2=0;	
	printf("Diigte quantos nummeros impares devem ser exibidos:");
	scanf("%d", &n);	
	for(cont=0; cont<=n; n2++)
	{
		if(n2 % 2 >= 1){
			printf("%d ", n2);
			cont++;
    }
    n2++;
  }
}
