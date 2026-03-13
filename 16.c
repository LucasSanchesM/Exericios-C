/*
Escreva um programa em C que utilize uma função específica para calcular o valor 
de Delta (discriminante) de uma equação do segundo grau. O programa deve solicitar 
ao usuário os coeficientes "a", "b" e "c", passar esses valores como parâmetros 
para a função e, ao final, exibir o resultado do cálculo na tela com duas casas
decimais. A fórmula a ser implementada na função é: Delta = b^2 - 4ac.
*/

#include <stdio.h>
#include<locale.h>

float delta(float a, float b, float c)
{
  float resultado;
  resultado=(b*b)-4*a*c;
  return resultado;
}
main(){
  setlocale(LC_ALL, "Portuguese");
  float a, b, c;
  printf("informe os valores de a, b e c respectivamente:");
  scanf("%f %f %f", &a, &b, &c);
  //resultado da equacao:
  printf("O resultado do delta é: %.2f", delta(a, b, c));
}
