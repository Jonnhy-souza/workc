#include <stdio.h>
#include <stdlib.h>

void main (){
	int a = 1;
	// primeiro executa depois confere a condicao
	do{

		printf("\n%d", a);

		a++; //a = a + 1;
	}while (a <= 10);		
}


