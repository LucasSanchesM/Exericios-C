/*
Crie um programa em C que permita ao usuário digitar uma sequência indeterminada
de números inteiros positivos. O programa deve processar cada número lido para
identificar qual foi o maior e qual foi o menor valor informado até o momento. 
A entrada de dados deve ser encerrada assim que o usuário digitar um número negativo. 
Ao final, o programa deve exibir o maior e o menor número da sequência digitada.
*/

#include<stdio.h>
void main(){
	int num, maior, menor;
	printf("Digite numeros em sequencia:");
	for(num=0; ; ){
		scanf("%d", &num);
		if(num<0){
			break;
		}
		if(num<menor){
			menor=num;
    }
    if(num>maior){
      maior=num;
    }
  }
		printf("O maior numero foi:%d\nO menor numero foi:%d", maior, menor);
}
