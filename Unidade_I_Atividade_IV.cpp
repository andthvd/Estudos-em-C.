#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141593


int main(){
	float A, P, r;
	printf("Digite o raio do circulo: ");
	scanf ("%f", &r);
	A = pow(PI * r, 2);
	P = 2*(PI * r);
	printf ("\nA area do circulo e igual a %.2f", A);
	printf ("\nO perimetro do circulo e igual a %.2f", P);
	return 0;
}
