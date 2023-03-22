/*Escreva um programa para ler várias duplas de letras. O programa termina ao serem informadas duas
letras iguais. Ao ser encerrado o programa deve exibir quantas duplas foram digitadas com 2 letras em
sequência crescente. Duas letras são consideradas em sequência crescente se a segunda for sucessora da
primeira (Ex: letras C e D). Neste exercício considere que a letra Z não possui sucessora.
OBS: Considere que serão digitadas apenas letras maiúsculas (não é necessário validar). OK */
#include <stdio.h>
#include <stdlib.h>
int main (){
	char c1, c2;
	int c;
	do {
		printf("digite uma dupla de caracteres: ");
		printf("c1: ");
		scanf(" %c", &c1);
		printf("c2: ");
		scanf(" %c", &c2);
			if(c2==c1+1){
				c++;
			}
	} while (c2!=c1);
		printf("%d duplas em ordem crescente foram digitadas.", c);
}
