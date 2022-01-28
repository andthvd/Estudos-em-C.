#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int matriz[a][b],keep,opt,a,b;

void imprimir(int *vetor){
	for(int i=0;i<3;i++){
		printf("%d ",vetor[i]);
	}
}

int criaMatriz(){
	int linhas,colunas;
	printf("\nDigite o número de linhas da Matriz: ");
	scanf("%d",&linhas);
	system("cls");
	printf("\nDigite o número de colunas da Matriz: ");
	scanf("%d",&colunas);
	system("cls");
	int matriz[linhas][colunas];
return matriz;
}

int menu(){	
	int opt;
	system("cls");
	printf("Bem vindo ao programa de matrizes!!");
	printf("\n\n");
	printf("1 - Criar Matriz\n");
	printf("2 - Imprimir Matriz\n");
	printf("Digite a opção desejada: ");
	scanf("%d",&opt);
	keep = menuopt(opt);
}

int menuopt(*opt){
	switch(opt){
	case 1:
		matriz = criaMatriz();
		break;
	case 2:
		if matriz{
			imprimir(matriz);
		}
		else{
			printf("\nMatriz não encontrada!");
		}
	default:
		printf("Digite uma opção válida!");
		system("pause");
		menu();
	}	
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	while keep{
		menu();
	}
	return 0;
}


