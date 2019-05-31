#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
	int n1;
	printf("Informe um numero e voce descobrira se ele e par! \n\n\tHAHAHAHAHA!");
	scanf("%d", &n1);
	if ((n1 % 2) != 0){
		printf("\n\nO numero e impar, seu IDIOTA!!!");
	}
	else{
		printf("\n\nO numero e par!!! PARABENS\n\n\tPOR NADA...\n\n\n");
	}
	system("pause");
	return 0;
}
