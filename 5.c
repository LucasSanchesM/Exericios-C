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
