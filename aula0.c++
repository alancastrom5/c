#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	int numero;
	setlocale(LC_ALL,"Portuguese");
	printf("Informar se o número é par ou ímpar\n\n");
	
	printf("Digite o número: ");
	scanf("%d",&numero);
	// operadores relacionais >, <, >=, <=, !=, ==
	
	if (numero % 2 == 0){
		printf("O número é par!!!");	
	}else{
		printf("O número é ímpar!!!");
	}
	
	printf("\n\n");
	system("pause");
	
}