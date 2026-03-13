/*
Crie um programa em C que receba três notas de um aluno e uma letra que indique o
tipo de média a ser calculada. O programa deve conter uma função que receba as
notas e a letra por parâmetro e, através de um ponteiro, retorne
o resultado do cálculo para a função principal. Os tipos de média são:
A (Aritmética): Média simples das três notas.
P (Ponderada): Pesos 5, 3 e 2, respectivamente.
H (Harmônica): Razão entre a quantidade de notas e a soma dos inversos das notas.
O programa deve tratar a letra de entrada para que aceite tanto maiúsculas quanto
minúsculas e exibir o resultado final com duas casas decimais.
*/

#include<stdio.h>
#include<locale.h>
#include<ctype.h>
void medias(float n1, float n2, float n3, char letra, float *resultado){
  if(letra=='A')
	*resultado=((n1+n2+n3)/3);
  if(letra=='P')
    *resultado=(((n1*5)+(n2*3)+(n3*2))/10);
  if(letra=='H')
    *resultado=(3/((1/n1)+(1/n2)+(1/n3)));
}
main(){
  char letraa;
  float num1, num2, num3, resultado;
  setlocale(LC_ALL, "portuguese");
  printf("Fala as tuas notas ae parceiro:");
  scanf("%f %f %f", &num1, &num2, &num3);
  printf("Agora diga que tipo de media voc� quer atribuir\
  a  essas notas:");
  scanf(" %c", &letraa);
  letraa=toupper(letraa);
  medias(num1, num2, num3, letraa, &resultado);
  printf("As sua media seguindo o \
    padrão %c é:\n%.2f", letraa, resultado );	
}
