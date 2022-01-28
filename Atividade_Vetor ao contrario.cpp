#include <stdio.h>

int main(){
	int V[10];
	
	for (int i=0; i<10; i++)
	{
		V[i] = i;
	}
	
		for (int i=9; i!=-1; i--)
	{
		printf ("\n%d ", V[i]);
	}
	return 0;
}
