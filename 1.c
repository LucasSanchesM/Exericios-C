#include<stdio.h>



void main()

{

	int num;

	printf("Digite um numero:");

	scanf("%d", &num);

	

	for(; ;num++)

	{

		if (num%3!=0)

		{

			printf("%d ", num);

		}

		if(num%10==0)

		{

			break;			

		}

	}

	

	

	

}


