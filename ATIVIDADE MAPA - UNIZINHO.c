/* A regra simples é que se dois dos quatro atributos chegarem à zero numa 
mesma execução da função, o usuário perde o jogo e precisa reiniciar novamente 
se desejar. A cada vez que estudar chega ao valor 10 de aprendizado, sobe um 
nível equivalente a ser aprovado em uma disciplina, e para se formar e ganhar 
o jogo,  precisa completar o nível 23 de aprendizado, equivalente a quantidade 
de disciplinas que tem para cursar até se formar. */
    
#include <stdio.h>
#include <locale.h>
#include <windows.h>

    int energia, alimento, descanso, aprendizado, nivel;
    
    void calcula (int opcao);
    
    void wait(){
	Sleep(400);
	for (int x=0;x<3;x++)
	{
		system("cls");
		printf ("Aguarde");
		Sleep(200);
		for (int y=0;y<3;y++)
		{
			printf(".");
			Sleep(200);
		}
	}
	system("cls");
}
void calcula (int opcao) {
   	switch (opcao)
	   {
	   		case 1:{
	   			wait();
	   			printf ("\n**********************************************************************");
	   			printf("\nUNIZINHO SE ALIMENTA!!!\n\tHUUUMM ERA PIZZA REQUENTADA!!!\n");
	   			Sleep(500);
	   			energia--;
	   			alimento=(alimento+5);
	   			descanso=(descanso-2);
	   			aprendizado--;
	   			system("pause");
				break;
			   }
   			case 2:{
   				wait();
   				printf ("\n**********************************************************************");
	   			printf("\nUNIZINHO VAI PARA SUA CAMA DESCANSAR PARA ENFRENTAR O DIA SEGUINTE!!!\n");
	   			Sleep(500);
	   			energia=(energia+5);
	   			alimento=(alimento-3);
	   			descanso=(descanso+5);
	   			aprendizado=(aprendizado-2);
	   			system("pause");
				break;
			   }
    		case 3:{
    			wait();
    			printf ("\n**********************************************************************");
	   			printf("\nUNIZINHO SENTA-SE EM FRENTE AO COMPUTADOR...\n\tE COMEÇA A ESTUDAR LOUCAMENTE!!!\n");
	   			system("pause");
	   			Sleep(500);
	   			energia=(energia-3);
	   			alimento=(alimento-2);
	   			descanso=(descanso-2);
	   			aprendizado=(aprendizado+5);
	   			system("pause");
				break;
			}
			case 4:{
				wait();
				printf ("**********************************************************************");
	   			printf("\nUNIZINHO SE ARRUMA E VAI TRABALHAR PRA PAGAR A FACULDADE!!!\n");
	   			
	   			Sleep(300);
	   			//COMO O CALCULO DA OPCAO TRABALHAR ESTAVA FREQUENTEMENTE FAZENDO O UNIZINHO PERDER O JOGO, TOMEI A LIBERDADE DE DIMINUIR OS CUSTOS DESSA AÇÃO
	   			energia=(energia-4);
	   			alimento=(alimento-4);
	   			descanso=(descanso-4);
	   			aprendizado=(aprendizado-2);
	   			system("pause");
				break;
			}
			default:{
				wait();
				printf ("\n**********************************************************************");
				printf("\n\nDigite uma opção válida para que UNIZINHO possa agir!!!");
				break;
			}
	}
    	

}

 int verifica (){
    if (energia < 0)
        energia = 0;
    else if (energia > 10)
        energia = 10;

    if (alimento < 0)
        alimento = 0;
    else if (alimento > 10)
        alimento = 10;

    if (descanso < 0)
        descanso = 0;
    else if (descanso > 10)
        descanso = 10;
        
    if ((descanso== 3) &&  ((aprendizado <= 4) && (aprendizado%2) == 0)){
	//ESSA FUNCIONALIDADE EXTRA EU COLOQUEI PRA DEIXAR O JOGO MAIS DIVERTIDO, A PRINCIPIO TINHA COLOCADO RITALINA NO LUGAR DO ENERGETICO, MAS ACHEI QUE PODERIA ESTAR DE ALGUMA FORMA INCENTIVANDO O USO DE MEDICAMENTOS CONTROLADOS.
 		wait();
    		printf("\n**********************************************************************");
    		printf("\nPARA AVANÇAR NOS ESTUDOS,\n\tUNIZINHO TOMA ENERGÉTICO!!!\n");
    		descanso++;
   			aprendizado=(aprendizado+3);
			   }	


    if (aprendizado < 0)
        aprendizado = 0;
    else if (aprendizado >= 10){
        aprendizado = 0;
        wait();
        system("cls");		        
        printf("\n**********************************************************************");
        printf("\n\t\t\tPARABÉNS!!!\n\t\t\t\tUNIZINHO AVANÇOU NOS ESTUDOS!!!\n");
        printf("\n**********************************************************************\n");
        system("pause");
        Sleep(200);
        system("cls");
        nivel++;
    }
    
    if (energia == 0)
        if (alimento == 0 || descanso == 0 || aprendizado == 0)
            return 1;
    if (alimento == 0)
        if (energia == 0 || descanso == 0 || aprendizado == 0)
            return 1;
    if (descanso == 0)
        if (alimento == 0 || energia == 0 || aprendizado == 0)
            return 1;
    if (aprendizado == 0)
        if (alimento == 0 || descanso == 0 || energia == 0)
            return 1;
            
    return 0;
}


int main(void) {
    setlocale(LC_ALL, "Portuguese");
    
    int opcao, resultado;
    int quit;
    nivel = 0; energia=10; alimento=10; descanso=0; aprendizado=0;
    quit=0;

    printf ("**********************************************************************");
    printf ("\nJOGO DO UNIZINHO");
    printf ("\n\nBons Estudos. Tente se formar !");
    printf ("\nO jogo começa com energia=10, alimento=10, descanso=0 e aprendizado=0");
    while (nivel <= 23 && nivel >= 0)
    {
        printf ("\n**********************************************************************");
        printf ("\nO que deseja fazer?");
        printf ("\n1-Comer, 2-Dormir, 3-Estudar, 4-Trabalhar\n");
        scanf("%d", &opcao);
        calcula (opcao);
        resultado = verifica ();
        printf ("\n**********************************************************************");
        printf ("\nEnergia: %d - Alimento: %d ", energia, alimento);
        printf ("\nDescanso: %d - Aprendizado: %d", descanso, aprendizado);
        printf ("\nAté o momento, UNIZINHO concluiu %d disciplina(s).\n\n", nivel);
        if (resultado == 1){
        	Sleep(300);
        	system("pause");
        	wait();
        	system("cls");
            printf ("\n**********************************************************************");
            printf ("\n\nUNIZINHO NÃO SE FORMOU E PERDEU O JOGO !");
            printf ("\n**********************************************************************");
            nivel = -1;
        }
        if (nivel > 23) {
        	Sleep(300);
        	wait();
        	system("cls");
            printf ("\n**********************************************************************");
            printf ("\n\nUNIZINHO SE FORMOU E VENCEU O JOGO !");
            printf ("\nPARABÉNS!!!");
            printf ("\n**********************************************************************");
            nivel = -1;
        }
    }
    printf ("\n\nDigite qualquer tecla para jogar novamente,\n\t\t\t\tou digite 1 para sair. \n\n");
    scanf("%d", &quit);
    while (quit != 1)
    	{
			system("cls");
			main();
		}	
}



