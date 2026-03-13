/*
Desenvolva um algoritmo que leia dois valores, n1 e n2. O algoritmo deve 
ser capaz de tratar a entrada para que o processamento comece sempre pelo
menor valor e termine no maior. Utilize um laço de repetição para percorrer 
todos os números desse intervalo e, usando estruturas condicionais, 
acumule a soma dos pares e a soma dos ímpares em variáveis distintas. Imprima os totais acumulados.
*/


#include<stdio.h>
void main(){
	int intervalo, n1, n2, pares, impares, inicio, fim;
  printf("Digite dois numeros");
	scanf("%d %d", &n1, &n2);
	if(n1>n2){
		inicio=n2;
		fim=n1;
	}
	else{
		inicio=n1;
		fim=n2;
	}
	for(pares=0, impares=0; inicio<=fim; inicio++){
    if (inicio%2==0){
      pares+=inicio;
    }
    else{
      impares+=inicio;
    }
  }
  printf("a soma dos pares eh igual a:%d\na soma dos impares eh igual a:%d", pares, impares);
}
