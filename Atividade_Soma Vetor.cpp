#include <stdio.h>
#include <windows.h>

int main()
{
	int A,B,i,j, flag=0;
	int Vet[5];
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&Vet[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",Vet[i]);
	}

	while (flag==0)
	{
		flag =1;
		for (i=0;i<5;i++)
		{
			if(Vet[i]>Vet[i+1])
			{
				A = Vet[i+1];
				Vet[i+1] = Vet[i];
				Vet[i] = A;
				flag=0;
			}
		}
	}
	printf ("\n\nOrdenando...");
	for(i=0;i<5;i++)
	{
		printf("%d ",Vet[i]);
	}
	
system("pause");
main();
return 0;
}
