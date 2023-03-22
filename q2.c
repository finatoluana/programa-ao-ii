/*Escreva um programa para ler vários caracteres e imprimir quantas letras minúsculas foram digitadas,
ou a mensagem “Nenhuma letra minúscula” caso não tenha sido digitada pelo menos uma letra
minúscula. O programa termina ao ser informado a letra F (maiúscula).*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	char car, ter;
	int cmin, cmai; //contador minúsculas, maiúsculas;
	ter = 'F';
	do {
		printf("digite um caractere: ");
		scanf(" %c", &car);
			if(car>=97&&car<=122){  //(car>='a'&&car<='z')
				cmin++;
			}
			if(car==ter){
				break;
			}
	} while (car!=ter);
		if(cmin>0){
			printf("%d letras minusculas foram digitadas.\n", cmin);
		}
		else {
			printf("nenhuma letra minuscula.");
		}
}
