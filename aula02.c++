main(){
	int i=0, a=0;
	
	while(i<3){		
		a += 2;	
		i++;
	}
	if (a==2){
		printf("Chile");
	}else if (a==4){
		printf("Argentina");
	}else if (a==6){
		printf("Brasil");
	}else{
		printf("Colômbia");
	}	
	printf("\n\n");	
	system("pause");	
}