#include <stdio.h>
#include <stdlib.h>

void main (){
	int cont;

	// tabuada do 5
	for (cont = 1; cont <= 10; cont++){
		printf ("\n 5 x %d = %d",cont, 5 * cont);
	}	
	
	// contando de 2 em 2
	for (cont = 0; cont <= 10; cont + 2){
		printf ("\n%d",cont);
	}
	// contagem regressiva
	for ( cont = 10; cont > 0; cont--){
		printf("\n%d", cont);
	}
