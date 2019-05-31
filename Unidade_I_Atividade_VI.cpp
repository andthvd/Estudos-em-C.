#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float dep, taxa, rend, total;
	printf("Informe o valor do deposito: ");
	scanf("%f", &dep);
	printf("\nInforme a taxa de juros: ");
	scanf("%f", &taxa);
	rend = dep * (taxa/100);
	total = dep + rend;
	printf("\nO rendimento e: %.2f", rend);	
	printf("\nO valor total e: %.2f", total);
	return 0;
}
