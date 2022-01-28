#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char linha[200];
	FILE *arquivo;
	
	arquivo = fopen("untitled.txt", "w+");
	if (arquivo == NULL)
	{
		printf("Erro ao iniciar o arquivo!\n");
		system("pause");
		exit (-1);
	}
	rewind(arquivo);
	while(!feof(arquivo)){
		fgets(linha,200,arquivo);
		printf("\n%s", linha);
	}
	fclose(arquivo);
}
