#include<stdio.h>
#include<stdlib.h>

main(){
	
	int n;
	
	printf("--------------------- \n [1] Menos de 18 anos \n [2] 18 a 34 anos \n [3] 35 a 59 anos \n [4]  60 anos ou mais \n--------------------- \n");
    printf("Escolha o numero que contem a sua idade: ");
	scanf("%d",&n);
	
	switch(n){
		case 1 :
		printf("[1] Voce se encontra no FIM da Fila / Novembro a Dezembro \n");
		break;
		case 2 :
		printf("[2] Voce se encontra em PENULTIMO da Fila / Setembro a Outubro \n");
		break;
		case 3 :    
		printf("[3] Voce se encontra no MEIO da Fila / Junho a Agosto \n");
		break;
		case 4 :
		printf("[4] Voce se encontra no INICIO da Fila / Marco a Maio \n");
		break;
		default:
		printf("Operacao invalida! \n");
		break;
	}
	
	
	
    system("pause");
}
