#include<stdio.h>
#include<stdlib.h>

int global_inicio, global_fim;

void exibir(){	
	if (global_inicio % 2 == 1)
		printf("%d\n",global_inicio);
	global_inicio++;
	if (global_inicio<=global_fim){
		exibir();
	}	
}

main(){
	printf("Digite o início: ");
	scanf("%d",&global_inicio);
	printf("Digite o fim...: ");	
	scanf("%d",&global_fim);
	
	exibir();
		
	printf("\n\n");
	system("pause");
}