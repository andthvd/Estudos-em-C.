#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
	float n,media;
	int i;
	i = 1;
	do
	{
		printf("\t\tBOLETIM!!!\n\nDigite a nota do %do bimestre: ",i);
		scanf("%f", &n);
		media = media+n;
		system("cls");
		i++;
	}
	while (i<=4);
	system("cls");
	if ((media/4)>=7)
	{
		printf("\t\tBOLETIM!!!\n\nVocê foi aprovado com uma media %.2f.",(media/4));
	}
	else if ((media/4)<7 && (media/4)>=4)
	{
		printf("\t\tBOLETIM!!!\n\nCom uma media de %.2f, voce precisara realizar a prova substituta.", (media/4));
	}
	else if ((media/4)<4)
	{
		printf("\t\tBOLETIM!!!\n\nCom uma media de %.2f, voce foi reprovado.",(media/4));
	}
	system("pause");
		
return 0;
}

