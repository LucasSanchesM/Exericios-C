/*
Desenvolva um programa em C que receba dois números inteiros quaisquer. 
O programa deve identificar o intervalo entre esses dois valores e
imprimir, em ordem crescente, todos os números inteiros situados 
exclusivamente entre eles (sem incluir os números digitados). 
O algoritmo deve ser capaz de processar as entradas corretamente, 
independentemente de qual número seja o maior, e não deve exibir 
nada caso os números sejam iguais ou adjacentes.
*/

#include<stdio.h>



void main(){
  int n1, n2, ee, inicio;
  printf("Digite dois numeros:");
  scanf("%d %d", &n1, &n2);
	if (n1>n2){
    ee=n1-n2-1;
		inicio=n2+1;
	}
	else if(n2>n1){
    ee=n2-n1;
		inicio=n1+1;
	}
	else{
    ee=0;
  }
  for(; ee>0; ee--){
    printf("%d ", inicio++);
  }
}
