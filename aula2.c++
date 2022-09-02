/*
%d - int
%lf - double
%c - char
%s - string
%p - ponteiro
*/

#include<stdio.h>
#include<stdlib.h>
main(){
	int ano_nasc,ano_atual,idade;
	
	printf("Verificar se pode tirar a CNH\n\n");//monitor
	printf("Digite o ano de nascimento: ");//monitor
	scanf("%d",&ano_nasc);//teclado
	
	printf("Digite o ano atual: ");//monitor
	scanf("%d",&ano_atual);//teclado
	
	idade = ano_atual - ano_nasc;
	
	printf("Idade = %d\n",idade);
	if (idade>=18){	
		printf("CNH liberada!\n\n");
	}else{
		printf("CNH proibida!\n\n");
	}
	
	system("pause");
}