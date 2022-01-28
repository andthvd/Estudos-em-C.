#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <windows.h>
#include <math.h>
#include <conio.h>

//Recursividade - Caso Base - Chamada recursiva

int fat(int n){
	if (n==0||n==1){
		return 1; //Caso Base
	}
	else
	{
		return n*fat(n-1);//Chamada recursiva
	}
}

void fib(){
	int k=0,c=1,e;
	
	for(int i=0;i<100;i++)
	{
		e=k+c;
		k=c;
		c=e;		
		printf ("\n%d ", e);
						
	}	
}

int main(){
	int numero;
	printf("Digite um numero a ser calculado a fatorial: ");
	scanf("%d", &numero);
	printf("\nA fatorial deste numero e igual a %d\n", (fat(numero)));
	system("pause");
	fib();
	return 0;
}
