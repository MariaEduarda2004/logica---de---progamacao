#include<stdio.h>
#include<stdlib.h>
main(){
	int n1, n2, n3, n4, media;
    printf("Digite um valor: ");
    scanf("%d", &n1);
    printf("Digite um outro valor: ");
    scanf("%d", &n2);
    printf("Digite um outro valor: ");
    scanf("%d",&n3);
    printf("Digite um outro valor: ");
    scanf("%d",&n4);
    media = (n1 + n2 + n3 + n4) / 4;
    system("cls");// limpar tela
    printf("A MEDIA dos valor: %d\n",media);
    system("pause");
}
	

		

