#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

	//responsável por alimentar o rand de forma diferente
	srand((unsigned)time(NULL));

	//VARIAVEL QUE RECEBE O RESTO DA DIVISÃO DO numero por 3( aleatorio entre 0 e 2)
	 int aleatorio = rand() % 3;

	//VARIAVEL QUE RECEBE O RESTO DA DIVISÃO DO numero por 3( aleatorio entre 0 e 2)
	 int aleatorioSegundo = (rand() % 5) + 1;
	//imprime o valor
	 
	printf ("d%", aleatorioSegundo);
		//imprime o valor
	printf ("d%", aleatorio);
	printf ("d%", aleatorio);
	// PAUSA O PROGRAMA
	system ("pause");
	
}

