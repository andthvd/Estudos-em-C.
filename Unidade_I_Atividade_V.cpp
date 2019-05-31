#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num;
	printf("Digite um numero aleatorio: ");
	scanf("%d", &num);
	printf ("\nO antecessor de %d e %d, e o sucessor de %d e %d", num, num-1, num, num+1);	
	return 0;
}
