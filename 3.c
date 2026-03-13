//Um professor, muito legal, fez 3 provas durante

//um semestre mas so vai levar em conta as duas 

//notas mais altas para calcular a media.

//Faça uma aplicação em C que peça o valor

//das 3 notas, mostre como seria a media com essas 

//3 provas, a media com as 2 notas mais altas, bem como sua nota mais alta e sua nota mais baixa.



#include<stdio.h>
#include<locale.h>
float calculodam(float n1,float n2,float n3, float *r1, float *r2, float *r3, float *r4){
*r1=(n1+n2+n3)/3.0;
if (n1>n3 && n2>n3 || n2==n3 || n1==n3){
	*r2=(n1+n2)/2;
	*r4==n3;
	if(n1-n2>=0)
		*r3=n1;
	else
		*r3=n2;
	
}

else if (n1>n2 && n3>n2 || n1==n2){
	*r2=(n1+n3)/2;
	*r4=n2;
	if(n1-n3>=0)
		*r3=n1;
	else
		*r3=n3;
}
else if (n2>n1 && n3>n1){
	*r2=(n2+n3)/2;
	*r4=n1;
	if(n2-n3>=0)
		*r3=n2;
	else
		*r3=n3;
}
	if(n1==n2 && n1==n3 && n2==n3)
		*r4=n1;
return *r1;
return *r2;
return *r3;
return *r4;

}



void main(){
	setlocale(LC_ALL, "portuguese");
	float num1, num2, num3, r1, r2, r3, r4;
	printf("Me fala suas notas ae parceira:");
	scanf("%f %f %f", &num1, &num2, &num3);
	calculodam(num1, num2, num3, &r1, &r2, &r3, &r4);
	printf("A media das tres provas eh:%.2f\na media das duas\
		notas mais altas eh:%.2f\nsua nota mais alta �:%.2f\nsua nota mais baixa eh:%.2f", r1, r2, r3, r4 );

}

