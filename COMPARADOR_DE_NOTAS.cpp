#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

/*char cria_vetor(int n_questoes){	
	char acertos[n_questoes], valor;
	
	for(int i=0;i<n_questoes;i++){
		system("cls");
		printf("Questão %d)\nDigite a resposta: ", i+1);
		scanf("%c",valor);
		acertos[i] = valor;	
	}	
	return acertos[];
}*/





int main(){
	int n_questoes, i;
	setlocale(LC_ALL,"Portuguese");
	printf("\nDigite o número de questões no teste: ");
	scanf("%d",&n_questoes);
	//char acertos_aluno = cria_vetor(n_questoes);
	/*char acertos[n_questoes], valor;
	for(i=0; i<n_questoes; i++){
		system("cls");
		printf("Questão %d)", i+1);
		printf("\nDigite a resposta: ");
		scanf("%s", &valor);
		acertos[i] = valor;	
	}*/
	char acertos[] = "aebcd";
	for(i=0; i</*n_questoes*/5; i++){
		printf("\n%c", acertos[i]);
	}
	return 0;
}
