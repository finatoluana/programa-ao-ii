/*Escreva um programa para ler dois inteiros (N e T). A seguir ler N caracteres representando cada um
deles um dígito hexadecimal (considere que ao ser informada uma letra ela será sempre maiúscula). Para
cada caractere informado escrever o seu respectivo valor na base decimal e o resultado da soma com o
valor T. Caso o caractere lido não seja um dígito hexadecimal válido, escreva a mensagem “Dígito inválido”.
Dica: Realize um cálculo com o código do caractere para obter o valor numérico.
Ex: Se a variável ch armazena o caractere '1', o cálculo ch – 48 (código do '0') produz o valor numérico
1.
Observe que para os caracteres de 'A' a 'F' o cálculo é diferente.*/
#include <stdio.h>
#include <stdlib.h>
int main (){
	int n, t, c;
	char car;
	int s, sub, sn;
	printf("informe o valor de N: ");
	scanf("%d", &n);
	printf("informe o valor de T: ");
	scanf("%d", &t);
	for(c=1;c<=n;c++){
		printf("\ninforme um caractere: ");
		scanf(" %c", &car);
			if(car>='0'&&car<='9'){
				sn=car-48;
				printf("%d ", sos);
				s=sn+t;
				printf("%d", s);
			}
			else if(car>='A'&&car<='F'){
				sub=car-55;
				printf("%d ", sub);
				s=sub+t;
				printf("%d", s);
			}
			else {
				printf("digito invalido.");
			}
	}
}
