#include<stdio.h>  // está lib tem o printf(), scanf()
#include<stdlib.h> // system()
#include<locale.h> // setlocale()

main(){
	setlocale(LC_ALL,"Portuguese");
	//Declaração das variáveis
	//int-%d, float-%f, double-%lf, char-%c ou %s
	double tempo, km, velocidade_media;
	
	printf("Digite a quantidade de horas: ");
	scanf("%lf",&tempo);
	
	printf("Digite a quantidade Km: ");
	scanf("%lf",&km);
	
	velocidade_media = km / tempo;
	printf("\nA velocidade média é %.0lf km/h",velocidade_media);
	
	printf("\n\n");
	system("pause");
}
