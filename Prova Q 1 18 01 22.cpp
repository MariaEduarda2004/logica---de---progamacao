#include<stdio.h>
#include<stdlib.h>
main(){
	
	int t;
	printf("Digite um valor: ");
	scanf("%d", &t);
	if((
	t % 2) == 0){
        printf("Numero par \n");
    }else{
    printf("Numero impar \n");
}
    if(t >= 0){
    	printf("Numero Positivo \n");
	}else{
	printf("Numero Negativo \n");
	}
	system("pause");
}

