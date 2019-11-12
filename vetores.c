#include <stdio.h>
#include <stdlib.h>
#define TAM 3


void main(){

	int vetor[TAM], cont;


	//passando valores para o vetor
	
	vetor[0] = 5;
	vetor[1] = 10;
	vetor[2] = 15;

	printf("\nposicao 0: %d, vetor[0]");
	printf("\nposicao 1: %d, vetor[1]");
	printf("\nposicao 2: %d, vetor[2]");

1
	//imprimindo vetores em um laço de repetiçao
	for (cont = 0; cont < TAM ; cont++){
		printf("\nposicao %d : %d", cont, vetor[cont] );
	}

	//ADICIONANDO 1 PARA CADA POSICAO
	for (cont = 0; cont < TAM; cont++){
		vetor[cont] = vetor[cont] + 1;
	}


	//Lendo 3 valores para o vetor
	for (cont = 0; cont < TAM; cont++){
		scanf("%d", &vetor[cont]);
}	
