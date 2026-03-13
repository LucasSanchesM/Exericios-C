/*
Construa um programa em C que permita ao usuário realizar uma análise 
estatística de um conjunto de números inteiros. O programa deve:
Perguntar inicialmente quantos números serão digitados.
Ler cada um dos números informados pelo usuário.
Ao final, identificar e exibir qual foi o maior valor inserido.
Calcular e exibir a média aritmética de todos os números lidos, com precisão de duas casas decimais.
*/

#include<stdio.h>
void main()
{
  int quantidade_numeros, maior, soma, numero, numeros_memoria;
	printf("Digite a quantidade de numero que ira digitar");
	scanf("%d", &quantidade_numeros);
	numeros_memoria=quantidade_numeros;
	for(maior=0, soma=0; quantidade_numeros!=0; quantidade_numeros--){
    printf("\ndigite um numero:");
    scanf("%d", &numero);
		if(maior<numero){
			maior=numero;
    }
    soma+=numero;
  }
	printf("\nO maior numero lido foi: %d\nA media de todos o numeros lidos: %.2	f", maior, (float)soma/(float)numeros_memoria);
}
