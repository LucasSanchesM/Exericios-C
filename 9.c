/*
Escreva um programa em C que solicite ao usuário um valor inteiro denominado limite.
O programa deve exibir duas colunas de números que percorram o intervalo de 1 até o
limite informado. A primeira coluna deve ser exibida em ordem crescente 
(de 1 até o limite) e a segunda coluna em ordem decrescente (do limite até 1),
garantindo que ambas as sequências sejam impressas lado a lado em cada linha.
*/

#include<stdio.h>
void main(){
  int dec, crec, limite;
  printf("informe o numero limite:");
  scanf("%d", &limite);
  for(crec=1, dec=limite; dec>=1 && crec<=limite; crec++, dec--){
    printf("%d %d\n", crec, dec);
  }
}
