/*
Escreva um programa em C que calcule a diferença entre a soma dos
quadrados dos primeiros 100 números naturais e o quadrado da soma 
desses mesmos números.
*/

#include<stdio.h>
void main()
{
  int inicio_um, inicio_dois, soma_um, soma_dois;
	for(inicio_um=0, soma_um=0; inicio_um<=100; inicio_um++){
    soma_um+=inicio_um*inicio_um;
  }
	for(inicio_dois=0, soma_dois=0; inicio_dois<=100; inicio_dois++){
    soma_dois+=inicio_dois;
  }
  soma_dois=soma_dois*soma_dois;
  printf("a soma do primeiro caso eh:%d\n\na soma do segundo caso eh:%d\n\na diferenca eh:%d", soma_um, soma_dois, soma_dois-soma_um);
}
