#include<stdio.h>
#include<stdlib.h>
main(){
	int idade, anon, anoat;
	printf("Digite  o ano de nascimento :");
	scanf("%d", &anon);
	printf("Digite o ano atual");
	scanf("%Dd", &anoat);
	idade = (anon * anoat) * 365;
	printf("Voce ja viveu aproximadamente: %d dias \n\n",idade);	

system("pause");



}
