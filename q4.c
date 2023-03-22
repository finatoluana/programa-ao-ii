/*Escreva um programa para ler vários caracteres. Se o caractere lido for uma letra maiúscula escrever a
sua posição dentro do alfabeto (ex: A --> 1, B --> 2, ..., Z --> 26). O programa termina ao ser
informado o caractere $. Caso seja informado outro caractere qualquer nenhuma mensagem deve ser
impressa e o programa deve continuar lendo caracteres. OK */
#include <stdio.h>
#include <stdlib.h>
int main (){
	char car;
	int cal;
	do {
		printf("\ndigite um caractere: ");
		scanf(" %c", &car);
			if (car>=65&&car<=90){
				cal=car-64;
				printf("a posicao do caractere dentro do alfabeto e %d", cal);
			}
	} while (car!='$');
}
