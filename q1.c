/*Escreva um programa para ler um inteiro N. A seguir ler N caracteres e imprimir para cada um a palavra
“Sim” se é uma letra maiúscula e “Não” caso contrário. OK */
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, c;
	char car;
	printf("informe o valor de N: ");
	scanf("%d", &n);
	for(c=1;c<=n;c++){
		printf("digite um caractere: ");
		scanf(" %c", &car);
			if(car>=65&&car<=90){
				printf("sim.\n");
			}
			else{
				printf("nao.\n");
			}
	}
}
