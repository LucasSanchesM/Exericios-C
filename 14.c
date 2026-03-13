/*
Crie um programa em C que receba um número 
inteiro do usuário e calcule a soma de todos
os seus divisores, excluindo o próprio número. 
O programa deve utilizar um laço de repetição 
para testar quais números inteiros, partindo de 1, 
dividem o valor de entrada sem deixar resto 
(divisão exata). O processo deve ser interrompido 
assim que o divisor atingir o valor do número digitado,
exibindo ao final o total acumulado da soma.

*/

#include<stdio.h>

void main(){
  int num, divisor, soma=0;
  printf("Digite um numero:");
  scanf("%d", &num);
  for(divisor=1; ; divisor++){
    if (num/divisor==1 || num/divisor==-1){
      break;
    }
    if(num%divisor==0)
    {
      soma+=divisor;
    }
  }
  printf("A soma dos divisores eh: %d", soma);
}
