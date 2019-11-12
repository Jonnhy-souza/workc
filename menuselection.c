#include <stdio.h>
#include <stdlib.h>

void main(){
	

	//variavel
	int opcao;
	
	// Confere e valida a opcao
	while (opcao < 1 || opcao > 3){

	printf("Escolha uma opção: ");	
	printf ("\n1-Opção 1");
	printf ("\n2-Opção 2");
	printf ("\n3-Opção 3");

	scanf("%d", &opcao);

	switch (opcao){
		case 1:
			printf("\n opção 1 foi escolhida");
			break;
	
		case 2:
			printf("\n opção 2 foi escolhida");
			break;
	
		case 3:
			printf("\n opção 3 foi escolhida");
			break;
		default:
			printf("\nopcao Invalida");
			break;
	 	}
	}
}
