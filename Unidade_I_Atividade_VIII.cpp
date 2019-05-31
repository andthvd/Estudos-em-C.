#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float base1, base2, A, a;
	printf ("Informe o valor da base maior: ");
	scanf("%f", &base1);
	printf("\nInforme o valor da base menor: ");
	scanf("%f", &base2);
	printf("\nInforme o valor da altura: ");
	scanf("%f", &A);
	a = ((base1 + base2)*A)/2;
	printf("\nA area do trapezio e: %.2f", a);	
	return 0;
}
