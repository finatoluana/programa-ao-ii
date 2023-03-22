/*Escreva um programa para ler um inteiro N. A seguir ler N letras maiúsculas (considere que serão
informadas apenas letras maiúsculas - não é necessário validar). Para cada letra informada exibir a sua
sucessora (considerando a ordem alfabética). Considere que a sucessora da letra Z é a letra A. OK */
#include <stdio.h>
#include <stdlib.h>
int main (){
	int n, c;
	char car, suc;
	printf("informe o valor de N: ");
	scanf("%d", &n);
	
	for(c=1;c<=n;c++){
		printf("\ninforme uma letra maiuscula: ");
		scanf(" %c", &car);
			if(car>=65&&car<=90&&car!='Z'){
				suc=car+1;
				printf(" %c", suc);
			}
			if(car=='Z'){
				suc='A';
				printf(" %c", suc);
			}
	}
}
