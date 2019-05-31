#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(){
	int n1,n2;
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	system("cls");
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	system("cls");
	if (n1>n2){
		printf("O primeiro numero e maior que o segundo.");
		}else if (n2>n1){
		printf("O primeiro numero e menor que o segundo.");
		}
	if (n1==n2){
		printf("Os dois numeros sao iguais.");
	}
	return 0;
}


