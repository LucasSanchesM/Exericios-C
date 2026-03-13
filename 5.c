/*
Construa um programa em C que solicite ao usuário um valor inteiro n.
O programa deve exibir na tela os primeiros n números ímpares positivos,
começando a partir do 1. Utilize uma estrutura de repetição que controle a
quantidade de números exibidos,
independentemente de quantas iterações sejam necessárias para encontrá-los.
*/

#include<stdio.h>

void main(){
  int n, cont, n2=0;
  printf("Digte quantos nummeros impares devem ser exibidos:");
  scanf("%d", &n);
	for(cont=0; cont<n; n2++){
    if(n2%2>0)
    {
      printf("%d ", n2);
      cont++;
    }
  }
}
