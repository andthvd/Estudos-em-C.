#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (){
	unsigned int A;
	float B;
	printf("Digite um numero inteiro: ");
	scanf ("%d", &A);
	B = sqrt(A);
	printf("O quadrado de %d é: %d \ne a raiz quadrada de %d é:  %.0f", A, (A*A), A, B);
	return 0;
}
