/*
Escreva um programa em C que auxilie um estudante a praticar matemática. 
O programa deve solicitar que o usuário informe um número inteiro e, 
em seguida, exibir a tabuada de multiplicação desse número, 
indo de 0 até 10, no formato: valor x multiplicador = resultado.
*/

#include<stdio.h>
void main(){
  int num, valor;
  printf("Digite um numero de uma tabuada:");
  scanf("%d", &valor);
  for(num=0;num<=10; num++){
    printf("%d x %d = %d\n", valor, num, valor*num);
  }
}
