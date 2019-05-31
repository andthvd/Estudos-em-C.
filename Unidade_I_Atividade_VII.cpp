#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float num1,num2;
	printf("Digite o primeiro numero: ");
	scanf("%f",&num1);
	printf("\nDigite o segundo numero: ");
	scanf("%f",&num2);
	printf("\nO %.2f elevado a %.2f e igual a %.2f", num1, num2, (pow (num1, num2)));
	return 0;
}
