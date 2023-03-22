/*Escreva um programa para ler um inteiro N. A seguir ler N caracteres. Para cada letra minúscula lida
escrever a respectiva letra convertida para maiúscula. Caso tenha sido informado um caractere diferente de
uma letra minúscula exibir a mensagem “Não é letra minúscula”. OK */
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, c;
	char car, conv;
	printf("informe o valor de N: ");
	scanf("%d", &n);
	
	for (c=1;c<=n;c++){
		printf("\ndigite um caractere: ");
		scanf(" %c", &car);
			if(car>=97&&car<=122){
				conv=car-32;
				printf(" %c", conv);
			}
			else {
				printf("nao e letra minuscula.");
			}
	}
}
