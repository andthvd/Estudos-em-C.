#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float A, B, C, D, media;
	
	printf ("Digite um valor para A:  ");
	scanf("%f", &A);
	printf ("\nDigite um valor para B:  ");
	scanf("%f", &B);
	printf ("\nDigite um valor para C:  ");
	scanf("%f", &C);
	printf ("\nDigite um valor para D:  ");
	scanf("%f", &D);
	media = (A+B+C+D)/4;
	printf ("\nA media destes numeros e igual a: %.2f", media);
	
	return 0;
};

	


