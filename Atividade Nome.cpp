#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){
	char nome[10];
	printf("Digite um nome");
	gets(nome);
	for (int i=0;i<10;i++)
	{
		if ((i+1)%2==0)
		{
			printf("%c", nome[i]);
		}		
	}	
	system("pause");
	return 0;
}
