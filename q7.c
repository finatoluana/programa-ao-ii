/*Escreva um programa para dois inteiros L, C e um caractere. A seguir imprimir um retângulo, de L linhas
e C colunas, formado pelo caractere lido conforme os exemplos abaixo. Considere que os valores
informados para L e C são positivos (não é necessário validar). OK */
#include <stdio.h>
#include <stdlib.h>
int main (){
	int l, c;
	char car;
	int cont, contd;
	
	printf("informe o valor de L: ");
	scanf("%d", &l);
	printf("informe o valor de C: ");
	scanf("%d", &c);
	printf("digite um caractere: ");
	scanf(" %c", &car);
	
	for(contd=1;contd<=l;contd++){
		printf("\n");
		for(cont=1;cont<=c;cont++){
		printf(" %c", car);
		}
	}
}
