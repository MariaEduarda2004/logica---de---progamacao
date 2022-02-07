#include<stdio.h>
#include<stdlib.h>

main(){
	int v1,v2,v3;
	printf("Digiti a idade de Lucas: ");
	scanf("%d",&v1);
	printf("Digiti a idade de Amanda: ");
	scanf("%d",&v2);
	printf("Digiti a idade de Rodrigo: ");
	scanf("%d",&v3);
	if (v1 > v2){
		printf("Lucas e mais velho que Amanda %d \n", v1 - v2);
		}else{
			printf("Lucas e mais novo que Amanda %d \n", v2 - v1);
			
		}
		if (v1 > v3){
			printf("Lucas e mais velho que Rodrigo %d \n", v1- v3);
			}else{
				printf("Lucas e mais novo que Rodrigo %d \n", v3 - v1);
				
	
			}
			if (v2 > v3){
		printf("Amanda e mais velha que Rodrigo %d \n", v2 - v3);
		}else{
			printf("Amanda e mais nova que Rodrigo %d \n", v3 - v2);
			
		}
		if (v2 > v1){
			printf("Amanda e mais velha que Lucas %d \n", v2- v1);
			}else{
				printf("Amanda e mais nova que Lucas %d \n", v1 - v2);
}
				if (v3 > v1){
		printf("Rodrigo e mais velho que Lucas %d \n", v3 - v1);
		}else{
			printf("Rodrigo e mais novo que Lucas %d \n", v1 - v3);
			
		}
		if (v3 > v2){
			printf("Rodrigo e mais velho que Amanda %d \n", v3- v2);
			}else{
				printf("Rodrigo e mais novo que Amanda %d \n", v2 - v3);
}
}
